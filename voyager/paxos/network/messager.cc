#include "voyager/paxos/network/messager.h"
#include "voyager/paxos/config.h"
#include "voyager/util/logging.h"

namespace voyager {
namespace paxos {

Messager::Messager(Config* config, Network* network)
    : config_(config),
      network_(network) {
}

Content* Messager::PackMessage(ContentType type,
                               PaxosMessage* pmsg,
                               CheckPointMessage* cmsg) {
  Content* content = new Content();
  content->set_type(type);
  content->set_group_id(config_->GetGroupId());
  content->set_version(1);
  content->set_allocated_paxos_msg(pmsg);
  content->set_allocated_checkpoint_msg(cmsg);
  return content;
}

void Messager::SendMessage(uint64_t node_id, Content* content) {
  std::string s;
  bool res = content->SerializeToString(&s);
  if (res) {
    network_->SendMessage(NodeInfo(node_id), s);
  } else {
    VOYAGER_LOG(ERROR) << "Messager::SendMessage - "
                       << "content SerializeToString error.";
  }
}

void Messager::BroadcastMessage(Content* content) {
  std::string s;
  bool res = content->SerializeToString(&s);
  if (res) {
    std::set<uint64_t>& nodes = config_->NodeIdSet();
    for (std::set<uint64_t>::iterator it = nodes.begin();
         it != nodes.end(); ++it) {
      network_->SendMessage(NodeInfo(*it), s);
    }
  } else {
    VOYAGER_LOG(ERROR) << "Messager::BroadcastMessage - "
                       << "content SerializeToString error.";
  }
}


void Messager::BroadcastMessageToFollower(Content* content) {
}

}  // namespace paxos
}  // namespace voyager
