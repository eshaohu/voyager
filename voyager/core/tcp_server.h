#ifndef VOYAGER_CORE_TCP_SERVER_H_
#define VOYAGER_CORE_TCP_SERVER_H_

#include <map>
#include <string>
#include <netdb.h>

#include "voyager/core/callback.h"
#include "voyager/core/sockaddr.h"
#include "voyager/port/atomic_sequence_num.h"
#include "voyager/util/scoped_ptr.h"

namespace voyager {

class Acceptor;
class EventLoop;
class Schedule;

class TcpServer {
 public:
  TcpServer(EventLoop* ev,
            const SockAddr& addr,
            const std::string& name = std::string("VoyagerServer"),
            int thread_size = 1,
            int backlog = SOMAXCONN);
  ~TcpServer();

  const std::string& name() const { return name_; }

  void SetConnectionCallback(const ConnectionCallback& cb) {
    connection_cb_ = cb;
  }
  void SetCloseCallback(const CloseCallback& cb) {
    close_cb_ = cb;
  }
  void SetWriteCompleteCallback(const WriteCompleteCallback& cb) {
    writecomplete_cb_ = cb;
  }
  void SetMessageCallback(const MessageCallback& cb) {
    message_cb_ = cb;
  }

  void SetConnectionCallback(ConnectionCallback&& cb) {
    connection_cb_ = std::move(cb);
  }
  void SetCloseCallback(CloseCallback&& cb) {
    close_cb_ = std::move(cb);
  }
  void SetWriteCompleteCallback(WriteCompleteCallback&& cb) {
    writecomplete_cb_ = std::move(cb);
  }
  void SetMessageCallback(MessageCallback&& cb) {
    message_cb_ = std::move(cb);
  }

  void Start();

 private:
  void NewConnection(int fd, const struct sockaddr_storage& sa);

  EventLoop* eventloop_;
  std::string ipbuf_;
  const std::string name_;
  scoped_ptr<Acceptor> acceptor_ptr_;
  scoped_ptr<Schedule> schedule_;
  port::SequenceNumber seq_;
  uint64_t conn_id_;

  ConnectionCallback connection_cb_;
  CloseCallback close_cb_;
  WriteCompleteCallback writecomplete_cb_;
  MessageCallback message_cb_;

  // No copying allow
  TcpServer(const TcpServer&);
  void operator=(const TcpServer&);
};

}  // namespace voyager

#endif  // VOYAGER_CORE_TCP_SERVER_H_
