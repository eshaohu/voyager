#include "voyager/core/event_kqueue.h"

#include <assert.h>
#include <errno.h>
#include <string.h>
#include <poll.h>

#include "voyager/core/dispatch.h"
#include "voyager/util/logging.h"

namespace voyager {

EventKqueue::EventKqueue(EventLoop* ev) 
    : EventPoller(ev),
      kq_(::kqueue()),
      events_(kInitKqueueFdSize) {
  if (kq_ == -1) {
    VOYAGER_LOG(FATAL) << "kqueue: " << strerror(errno);
  }
}

EventKqueue::~EventKqueue() {
}

void EventKqueue::Poll(int timeout, std::vector<Dispatch*>* dispatches) {
  struct timespec out;
  out.tv_sec = timeout / 1000;
  out.tv_nsec = (timeout % 1000) * 1000 * 1000;
  int nfds = ::kevent(kq_, NULL, 0,
                      &*events_.begin(), static_cast<int>(events_.size()),
                      &out);
  if (nfds == -1) {
    VOYAGER_LOG(ERROR) << "kevent: " << strerror(errno);
  }
  
  for (int i = 0; i < nfds; ++i) {
    Dispatch *dispatch = reinterpret_cast<Dispatch*>(events_[i].udata);
    int revents = 0;
    if (events_[i].flags & EV_ERROR) {
      revents |= POLLERR;
    }
    if (events_[i].filter == EVFILT_READ) {
      revents |= POLLIN;
    } else if (events_[i].filter == EVFILT_WRITE) {
      revents |= POLLOUT;
    }

    dispatch->SetRevents(revents);
    dispatches->push_back(dispatch);
  }
  if (nfds == static_cast<int>(events_.size())) {
    events_.resize(events_.size() * 2);
  }
}

void EventKqueue::RemoveDispatch(Dispatch* dispatch) {
  eventloop_->AssertInMyLoop();
  int fd = dispatch->Fd();
  assert(dispatch_map_.find(fd) != dispatch_map_.end());
  assert(dispatch_map_[fd] == dispatch);
  assert(dispatch->IsNoneEvent());
  dispatch_map_.erase(fd);
}

void EventKqueue::UpdateDispatch(Dispatch* dispatch) {
  eventloop_->AssertInMyLoop();
  int fd = dispatch->Fd();
  int change = dispatch->ChangeEvent();
  
  struct kevent ev[2];
  int n = 0;
  switch(change) {
    case kEnableRead:
      EV_SET(&ev[n++], fd, EVFILT_READ, EV_ADD | EV_ENABLE, 0, 0, 
             reinterpret_cast<void*>(dispatch));
      break;

    case kEnableWrite:
      EV_SET(&ev[n++], fd, EVFILT_WRITE, EV_ADD | EV_ENABLE, 0, 0,
             reinterpret_cast<void*>(dispatch));
      break;

    case kDisableRead:
      EV_SET(&ev[n++], fd, EVFILT_READ, EV_DELETE, 0, 0,
             reinterpret_cast<void*>(dispatch));
      break;

    case kDisableWrite:
      EV_SET(&ev[n++], fd, EVFILT_WRITE, EV_DELETE, 0, 0,
             reinterpret_cast<void*>(dispatch));
      break;

    case kDisableAll:
      EV_SET(&ev[n++], fd, EVFILT_READ, EV_DELETE, 0, 0, 
             reinterpret_cast<void*>(dispatch));
      EV_SET(&ev[n++], fd, EVFILT_WRITE, EV_DELETE, 0, 0, 
             reinterpret_cast<void*>(dispatch));
      break;
  }

  if (::kevent(kq_, ev, n, NULL, 0, NULL) == -1) {
    VOYAGER_LOG(ERROR) << "kevent: " << strerror(errno);
  }
  dispatch_map_[fd] = dispatch;
}

}  // namespace voyager
