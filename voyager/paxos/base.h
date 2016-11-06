#ifndef VOYAGER_PAXOS_BASE_H_
#define VOYAGER_PAXOS_BASE_H_

#include <string>

#include "voyager/util/status.h"
#include "voyager/paxos/paxos_message.h"

namespace voyager {
namespace paxos {

class Config;

class Base {
 public:
  Base(const Config* config);

  Status PackMessage(const PaxosMessage& msg, std::string* s);
  Status UnPackMessage(const std::string& s, PaxosMessage* msg);

  Status SendMessage(uint64_t node_id, const PaxosMessage& msg);
  Status BroadcastMessage(const PaxosMessage& msg);
  Status BroadcastMessageToFollower(const PaxosMessage& msg);

 private:
  const Config* config_;

  // No copying allowed
  Base(const Base&);
  void operator=(const Base&);
};

}  // namespace paxos
}  // namespace voyager

#endif  // VOYAGER_PAXOS_BASE_H_
