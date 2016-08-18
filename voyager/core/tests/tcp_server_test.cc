#include "voyager/core/tcp_server.h"
#include "voyager/core/eventloop.h"
#include "voyager/core/sockaddr.h"

using namespace voyager;

TcpServer* g_server = NULL;

void DeleteServer() {
  if (g_server) {
    delete g_server;
  }
}

int main(int argc, char** argv) {
  EventLoop eventloop;
  SockAddr addr(5666);
  g_server = new TcpServer(&eventloop, addr, "Voyager", 4);
  g_server->Start();
  eventloop.RunAfter(std::bind(DeleteServer), 5000000);
  eventloop.RunAfter(std::bind(&EventLoop::Exit, &eventloop), 6000000);
  eventloop.Loop();
  return 0;
}
