#include "voyager/port/bounded_blockingqueue.h"

#include <stdio.h>
#include <unistd.h>
#include <inttypes.h>

#include "voyager/port/countdownlatch.h"
#include "voyager/port/thread.h"
#include "voyager/port/currentthread.h"
#include "voyager/util/stringprintf.h"
#include "voyager/util/scoped_ptr.h"

namespace voyager {
namespace port {

using namespace std::placeholders;

class BoundedBlockingQueueTest {
 public:
  BoundedBlockingQueueTest(int threads_size)
      : queue_(18),
        latch_(threads_size),
        threads_size_(threads_size),
        threads_(new scoped_ptr<Thread>[threads_size]) {
    for (int i = 0; i < threads_size_; ++i) {
      threads_[i].reset(new Thread(
            std::bind(&BoundedBlockingQueueTest::ThreadFunc, this),
            StringPrintf("thread %d", i)));
      threads_[i]->Start();
    }
  }

  void Task(int num) {
    printf("waiting for all threads start...\n");
    latch_.Wait();
    for (int i = 1; i <= num; ++i) {
      std::string task(StringPrintf("task %d", i));
      queue_.Put(task);
      printf("tid=%" PRIu64", add task=%s, queue's size=%zd\n",
             CurrentThread::Tid(), task.c_str(), queue_.Size());
    }
  }

  void JoinAll() {
    for (int i = 0; i < threads_size_; ++i) {
      queue_.Put("No task, stop!");
    }
    for (int i = 0; i < threads_size_; ++i) {
      threads_[i]->Join();
    }
  }

 private:
  void ThreadFunc() {
    printf("tid=%" PRIu64", %s started.\n",
           CurrentThread::Tid(), CurrentThread::ThreadName());
    latch_.CountDown();
    while (true) {
      std::string task(queue_.Take());
      if (task == "No task, stop!") {
        printf("All taskes have been done! Yelp!\n");
        printf("tid=%" PRIu64", get task = %s, queue's size = %zd\n",
               CurrentThread::Tid(), task.c_str(), queue_.Size());
        break;
      }
    }
  }

  BoundedBlockingQueue<std::string> queue_;
  CountDownLatch latch_;
  int threads_size_;
  scoped_array<scoped_ptr<Thread> > threads_;
};

}  // namespace port
}  // namespace voyager
int main(int argc, char** argv) {
  printf("pid=%d, tid=%" PRIu64"\n", ::getpid(), voyager::port::CurrentThread::Tid());
  voyager::port::BoundedBlockingQueueTest t(4);
  t.Task(100);
  t.JoinAll();
  return 0;
}
