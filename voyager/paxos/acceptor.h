#ifndef VOYAGER_PAXOS_ACCEPTOR_H_
#define VOYAGER_PAXOS_ACCEPTOR_H_

#include <string>

#include "voyager/paxos/ballot_number.h"
#include "voyager/paxos/messager.h"
#include "voyager/paxos/paxos_message.h"
#include "voyager/util/status.h"

namespace voyager {
namespace paxos {

class Config;

class Acceptor {
 public:
  Acceptor(const Config* config, Messager* messager);

  Status Init();

  void SetInstanceId(uint64_t id) { instance_id_ = id; }
  uint64_t GetInstanceId() const { return instance_id_; }

  BallotNumber GetPromiseBallot() const { return promise_ballot_; }

  void OnPrepare(const PaxosMessage& msg);
  void OnAccpet(const PaxosMessage& msg);

 private:
  Status Load(uint64_t* instance_id);
  Status Persist(uint64_t instance_id, uint32_t last_checksum);

  const Config* config_;
  Messager* messager_;

  BallotNumber promise_ballot_;
  BallotNumber acceptd_ballot_;

  uint64_t instance_id_;
  std::string value_;

  // No copying allowed
  Acceptor(const Acceptor&);
  void operator=(const Acceptor&);
};

}  // namespace paxos
}  // namespace voyager

#endif  // VOYAGER_PAXOS_ACCEPTOR_H_
