// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rpc.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "rpc.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace voyager {
class RpcMessageDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<RpcMessage> {};
RpcMessageDefaultTypeInternal _RpcMessage_default_instance_;

namespace {

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

}  // namespace


const ::google::protobuf::uint32* protobuf_Offsets_rpc_2eproto() GOOGLE_ATTRIBUTE_COLD;
const ::google::protobuf::uint32* protobuf_Offsets_rpc_2eproto() {
  static const ::google::protobuf::uint32 offsets[] = {
    ~0u,  // no _has_bits_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMessage, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMessage, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMessage, service_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMessage, method_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMessage, data_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMessage, error_),
  };
  return offsets;
}

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(RpcMessage)},
};

static const ::google::protobuf::internal::DefaultInstanceData file_default_instances[] = {
  {reinterpret_cast<const ::google::protobuf::Message*>(&_RpcMessage_default_instance_), NULL},
};

namespace {

void protobuf_AssignDescriptors() {
  protobuf_AddDesc_rpc_2eproto();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "rpc.proto", schemas, file_default_instances, protobuf_Offsets_rpc_2eproto(), factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void protobuf_ShutdownFile_rpc_2eproto() {
  _RpcMessage_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void protobuf_InitDefaults_rpc_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _RpcMessage_default_instance_.DefaultConstruct();
}

void protobuf_InitDefaults_rpc_2eproto() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_InitDefaults_rpc_2eproto_impl);
}
void protobuf_AddDesc_rpc_2eproto_impl() {
  protobuf_InitDefaults_rpc_2eproto();
  static const char descriptor[] = {
      "\n\trpc.proto\022\007voyager\"t\n\nRpcMessage\022\n\n\002id"
      "\030\001 \001(\005\022\024\n\014service_name\030\002 \001(\t\022\023\n\013method_n"
      "ame\030\003 \001(\t\022\014\n\004data\030\004 \001(\014\022!\n\005error\030\005 \001(\0162\022"
      ".voyager.ErrorCode*\255\001\n\tErrorCode\022\021\n\rERRO"
      "R_CODE_OK\020\000\022\026\n\022ERROR_CODE_TIMEOUT\020\001\022\036\n\032E"
      "RROR_CODE_INVALID_SERVICE\020\002\022\035\n\031ERROR_COD"
      "E_INVALID_METHOD\020\003\022\036\n\032ERROR_CODE_INVALID"
      "_REQUEST\020\004\022\026\n\022ERROR_CODE_UNKNOWN\020\005b\006prot"
      "o3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 322);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "rpc.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_rpc_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_rpc_2eproto_once_);
void protobuf_AddDesc_rpc_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_rpc_2eproto_once_,
                 &protobuf_AddDesc_rpc_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_rpc_2eproto {
  StaticDescriptorInitializer_rpc_2eproto() {
    protobuf_AddDesc_rpc_2eproto();
  }
} static_descriptor_initializer_rpc_2eproto_;
const ::google::protobuf::EnumDescriptor* ErrorCode_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return file_level_enum_descriptors[0];
}
bool ErrorCode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RpcMessage::kIdFieldNumber;
const int RpcMessage::kServiceNameFieldNumber;
const int RpcMessage::kMethodNameFieldNumber;
const int RpcMessage::kDataFieldNumber;
const int RpcMessage::kErrorFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RpcMessage::RpcMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_InitDefaults_rpc_2eproto();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:voyager.RpcMessage)
}
RpcMessage::RpcMessage(const RpcMessage& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  service_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.service_name().size() > 0) {
    service_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.service_name_);
  }
  method_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.method_name().size() > 0) {
    method_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.method_name_);
  }
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.data().size() > 0) {
    data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  ::memcpy(&id_, &from.id_,
    reinterpret_cast<char*>(&error_) -
    reinterpret_cast<char*>(&id_) + sizeof(error_));
  // @@protoc_insertion_point(copy_constructor:voyager.RpcMessage)
}

void RpcMessage::SharedCtor() {
  service_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  method_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, reinterpret_cast<char*>(&error_) -
    reinterpret_cast<char*>(&id_) + sizeof(error_));
  _cached_size_ = 0;
}

RpcMessage::~RpcMessage() {
  // @@protoc_insertion_point(destructor:voyager.RpcMessage)
  SharedDtor();
}

void RpcMessage::SharedDtor() {
  service_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  method_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void RpcMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RpcMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[0].descriptor;
}

const RpcMessage& RpcMessage::default_instance() {
  protobuf_InitDefaults_rpc_2eproto();
  return *internal_default_instance();
}

RpcMessage* RpcMessage::New(::google::protobuf::Arena* arena) const {
  RpcMessage* n = new RpcMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RpcMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:voyager.RpcMessage)
  service_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  method_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, reinterpret_cast<char*>(&error_) -
    reinterpret_cast<char*>(&id_) + sizeof(error_));
}

bool RpcMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:voyager.RpcMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 id = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string service_name = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_service_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->service_name().data(), this->service_name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "voyager.RpcMessage.service_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string method_name = 3;
      case 3: {
        if (tag == 26u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_method_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->method_name().data(), this->method_name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "voyager.RpcMessage.method_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes data = 4;
      case 4: {
        if (tag == 34u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_data()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .voyager.ErrorCode error = 5;
      case 5: {
        if (tag == 40u) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_error(static_cast< ::voyager::ErrorCode >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:voyager.RpcMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:voyager.RpcMessage)
  return false;
#undef DO_
}

void RpcMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:voyager.RpcMessage)
  // int32 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // string service_name = 2;
  if (this->service_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->service_name().data(), this->service_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "voyager.RpcMessage.service_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->service_name(), output);
  }

  // string method_name = 3;
  if (this->method_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->method_name().data(), this->method_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "voyager.RpcMessage.method_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->method_name(), output);
  }

  // bytes data = 4;
  if (this->data().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->data(), output);
  }

  // .voyager.ErrorCode error = 5;
  if (this->error() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->error(), output);
  }

  // @@protoc_insertion_point(serialize_end:voyager.RpcMessage)
}

::google::protobuf::uint8* RpcMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:voyager.RpcMessage)
  // int32 id = 1;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // string service_name = 2;
  if (this->service_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->service_name().data(), this->service_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "voyager.RpcMessage.service_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->service_name(), target);
  }

  // string method_name = 3;
  if (this->method_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->method_name().data(), this->method_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "voyager.RpcMessage.method_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->method_name(), target);
  }

  // bytes data = 4;
  if (this->data().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->data(), target);
  }

  // .voyager.ErrorCode error = 5;
  if (this->error() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      5, this->error(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:voyager.RpcMessage)
  return target;
}

size_t RpcMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:voyager.RpcMessage)
  size_t total_size = 0;

  // string service_name = 2;
  if (this->service_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->service_name());
  }

  // string method_name = 3;
  if (this->method_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->method_name());
  }

  // bytes data = 4;
  if (this->data().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->data());
  }

  // int32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());
  }

  // .voyager.ErrorCode error = 5;
  if (this->error() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->error());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RpcMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:voyager.RpcMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const RpcMessage* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RpcMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:voyager.RpcMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:voyager.RpcMessage)
    MergeFrom(*source);
  }
}

void RpcMessage::MergeFrom(const RpcMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:voyager.RpcMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.service_name().size() > 0) {

    service_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.service_name_);
  }
  if (from.method_name().size() > 0) {

    method_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.method_name_);
  }
  if (from.data().size() > 0) {

    data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.error() != 0) {
    set_error(from.error());
  }
}

void RpcMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:voyager.RpcMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RpcMessage::CopyFrom(const RpcMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:voyager.RpcMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RpcMessage::IsInitialized() const {
  return true;
}

void RpcMessage::Swap(RpcMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RpcMessage::InternalSwap(RpcMessage* other) {
  service_name_.Swap(&other->service_name_);
  method_name_.Swap(&other->method_name_);
  data_.Swap(&other->data_);
  std::swap(id_, other->id_);
  std::swap(error_, other->error_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RpcMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RpcMessage

// int32 id = 1;
void RpcMessage::clear_id() {
  id_ = 0;
}
::google::protobuf::int32 RpcMessage::id() const {
  // @@protoc_insertion_point(field_get:voyager.RpcMessage.id)
  return id_;
}
void RpcMessage::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:voyager.RpcMessage.id)
}

// string service_name = 2;
void RpcMessage::clear_service_name() {
  service_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& RpcMessage::service_name() const {
  // @@protoc_insertion_point(field_get:voyager.RpcMessage.service_name)
  return service_name_.GetNoArena();
}
void RpcMessage::set_service_name(const ::std::string& value) {
  
  service_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:voyager.RpcMessage.service_name)
}
#if LANG_CXX11
void RpcMessage::set_service_name(::std::string&& value) {
  
  service_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:voyager.RpcMessage.service_name)
}
#endif
void RpcMessage::set_service_name(const char* value) {
  
  service_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:voyager.RpcMessage.service_name)
}
void RpcMessage::set_service_name(const char* value, size_t size) {
  
  service_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:voyager.RpcMessage.service_name)
}
::std::string* RpcMessage::mutable_service_name() {
  
  // @@protoc_insertion_point(field_mutable:voyager.RpcMessage.service_name)
  return service_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* RpcMessage::release_service_name() {
  // @@protoc_insertion_point(field_release:voyager.RpcMessage.service_name)
  
  return service_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void RpcMessage::set_allocated_service_name(::std::string* service_name) {
  if (service_name != NULL) {
    
  } else {
    
  }
  service_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), service_name);
  // @@protoc_insertion_point(field_set_allocated:voyager.RpcMessage.service_name)
}

// string method_name = 3;
void RpcMessage::clear_method_name() {
  method_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& RpcMessage::method_name() const {
  // @@protoc_insertion_point(field_get:voyager.RpcMessage.method_name)
  return method_name_.GetNoArena();
}
void RpcMessage::set_method_name(const ::std::string& value) {
  
  method_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:voyager.RpcMessage.method_name)
}
#if LANG_CXX11
void RpcMessage::set_method_name(::std::string&& value) {
  
  method_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:voyager.RpcMessage.method_name)
}
#endif
void RpcMessage::set_method_name(const char* value) {
  
  method_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:voyager.RpcMessage.method_name)
}
void RpcMessage::set_method_name(const char* value, size_t size) {
  
  method_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:voyager.RpcMessage.method_name)
}
::std::string* RpcMessage::mutable_method_name() {
  
  // @@protoc_insertion_point(field_mutable:voyager.RpcMessage.method_name)
  return method_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* RpcMessage::release_method_name() {
  // @@protoc_insertion_point(field_release:voyager.RpcMessage.method_name)
  
  return method_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void RpcMessage::set_allocated_method_name(::std::string* method_name) {
  if (method_name != NULL) {
    
  } else {
    
  }
  method_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), method_name);
  // @@protoc_insertion_point(field_set_allocated:voyager.RpcMessage.method_name)
}

// bytes data = 4;
void RpcMessage::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& RpcMessage::data() const {
  // @@protoc_insertion_point(field_get:voyager.RpcMessage.data)
  return data_.GetNoArena();
}
void RpcMessage::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:voyager.RpcMessage.data)
}
#if LANG_CXX11
void RpcMessage::set_data(::std::string&& value) {
  
  data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:voyager.RpcMessage.data)
}
#endif
void RpcMessage::set_data(const char* value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:voyager.RpcMessage.data)
}
void RpcMessage::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:voyager.RpcMessage.data)
}
::std::string* RpcMessage::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:voyager.RpcMessage.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* RpcMessage::release_data() {
  // @@protoc_insertion_point(field_release:voyager.RpcMessage.data)
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void RpcMessage::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:voyager.RpcMessage.data)
}

// .voyager.ErrorCode error = 5;
void RpcMessage::clear_error() {
  error_ = 0;
}
::voyager::ErrorCode RpcMessage::error() const {
  // @@protoc_insertion_point(field_get:voyager.RpcMessage.error)
  return static_cast< ::voyager::ErrorCode >(error_);
}
void RpcMessage::set_error(::voyager::ErrorCode value) {
  
  error_ = value;
  // @@protoc_insertion_point(field_set:voyager.RpcMessage.error)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace voyager

// @@protoc_insertion_point(global_scope)
