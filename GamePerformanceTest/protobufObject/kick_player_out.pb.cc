// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: kick_player_out.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "kick_player_out.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* BINKickPlayerOutRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BINKickPlayerOutRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* BINKickPlayerOutResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BINKickPlayerOutResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_kick_5fplayer_5fout_2eproto() {
  protobuf_AddDesc_kick_5fplayer_5fout_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "kick_player_out.proto");
  GOOGLE_CHECK(file != NULL);
  BINKickPlayerOutRequest_descriptor_ = file->message_type(0);
  static const int BINKickPlayerOutRequest_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINKickPlayerOutRequest, roomindex_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINKickPlayerOutRequest, kickeduserid_),
  };
  BINKickPlayerOutRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BINKickPlayerOutRequest_descriptor_,
      BINKickPlayerOutRequest::default_instance_,
      BINKickPlayerOutRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINKickPlayerOutRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINKickPlayerOutRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BINKickPlayerOutRequest));
  BINKickPlayerOutResponse_descriptor_ = file->message_type(1);
  static const int BINKickPlayerOutResponse_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINKickPlayerOutResponse, responsecode_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINKickPlayerOutResponse, message_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINKickPlayerOutResponse, kickeduserid_),
  };
  BINKickPlayerOutResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BINKickPlayerOutResponse_descriptor_,
      BINKickPlayerOutResponse::default_instance_,
      BINKickPlayerOutResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINKickPlayerOutResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINKickPlayerOutResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BINKickPlayerOutResponse));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_kick_5fplayer_5fout_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BINKickPlayerOutRequest_descriptor_, &BINKickPlayerOutRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BINKickPlayerOutResponse_descriptor_, &BINKickPlayerOutResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_kick_5fplayer_5fout_2eproto() {
  delete BINKickPlayerOutRequest::default_instance_;
  delete BINKickPlayerOutRequest_reflection_;
  delete BINKickPlayerOutResponse::default_instance_;
  delete BINKickPlayerOutResponse_reflection_;
}

void protobuf_AddDesc_kick_5fplayer_5fout_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025kick_player_out.proto\"B\n\027BINKickPlayer"
    "OutRequest\022\021\n\troomIndex\030\001 \002(\005\022\024\n\014kickedU"
    "serId\030\002 \002(\003\"W\n\030BINKickPlayerOutResponse\022"
    "\024\n\014responseCode\030\001 \002(\010\022\017\n\007message\030\002 \001(\t\022\024"
    "\n\014kickedUserId\030\003 \001(\003B\036\n\034com.mi.game.netw"
    "ork.data.bin", 212);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "kick_player_out.proto", &protobuf_RegisterTypes);
  BINKickPlayerOutRequest::default_instance_ = new BINKickPlayerOutRequest();
  BINKickPlayerOutResponse::default_instance_ = new BINKickPlayerOutResponse();
  BINKickPlayerOutRequest::default_instance_->InitAsDefaultInstance();
  BINKickPlayerOutResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_kick_5fplayer_5fout_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_kick_5fplayer_5fout_2eproto {
  StaticDescriptorInitializer_kick_5fplayer_5fout_2eproto() {
    protobuf_AddDesc_kick_5fplayer_5fout_2eproto();
  }
} static_descriptor_initializer_kick_5fplayer_5fout_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int BINKickPlayerOutRequest::kRoomIndexFieldNumber;
const int BINKickPlayerOutRequest::kKickedUserIdFieldNumber;
#endif  // !_MSC_VER

BINKickPlayerOutRequest::BINKickPlayerOutRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BINKickPlayerOutRequest::InitAsDefaultInstance() {
}

BINKickPlayerOutRequest::BINKickPlayerOutRequest(const BINKickPlayerOutRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BINKickPlayerOutRequest::SharedCtor() {
  _cached_size_ = 0;
  roomindex_ = 0;
  kickeduserid_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BINKickPlayerOutRequest::~BINKickPlayerOutRequest() {
  SharedDtor();
}

void BINKickPlayerOutRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BINKickPlayerOutRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BINKickPlayerOutRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BINKickPlayerOutRequest_descriptor_;
}

const BINKickPlayerOutRequest& BINKickPlayerOutRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_kick_5fplayer_5fout_2eproto();
  return *default_instance_;
}

BINKickPlayerOutRequest* BINKickPlayerOutRequest::default_instance_ = NULL;

BINKickPlayerOutRequest* BINKickPlayerOutRequest::New() const {
  return new BINKickPlayerOutRequest;
}

void BINKickPlayerOutRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    roomindex_ = 0;
    kickeduserid_ = GOOGLE_LONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BINKickPlayerOutRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 roomIndex = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &roomindex_)));
          set_has_roomindex();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_kickedUserId;
        break;
      }

      // required int64 kickedUserId = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_kickedUserId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &kickeduserid_)));
          set_has_kickeduserid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void BINKickPlayerOutRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 roomIndex = 1;
  if (has_roomindex()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->roomindex(), output);
  }

  // required int64 kickedUserId = 2;
  if (has_kickeduserid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->kickeduserid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BINKickPlayerOutRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 roomIndex = 1;
  if (has_roomindex()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->roomindex(), target);
  }

  // required int64 kickedUserId = 2;
  if (has_kickeduserid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->kickeduserid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BINKickPlayerOutRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 roomIndex = 1;
    if (has_roomindex()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->roomindex());
    }

    // required int64 kickedUserId = 2;
    if (has_kickeduserid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->kickeduserid());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BINKickPlayerOutRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BINKickPlayerOutRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BINKickPlayerOutRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BINKickPlayerOutRequest::MergeFrom(const BINKickPlayerOutRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_roomindex()) {
      set_roomindex(from.roomindex());
    }
    if (from.has_kickeduserid()) {
      set_kickeduserid(from.kickeduserid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BINKickPlayerOutRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BINKickPlayerOutRequest::CopyFrom(const BINKickPlayerOutRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BINKickPlayerOutRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void BINKickPlayerOutRequest::Swap(BINKickPlayerOutRequest* other) {
  if (other != this) {
    std::swap(roomindex_, other->roomindex_);
    std::swap(kickeduserid_, other->kickeduserid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BINKickPlayerOutRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BINKickPlayerOutRequest_descriptor_;
  metadata.reflection = BINKickPlayerOutRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int BINKickPlayerOutResponse::kResponseCodeFieldNumber;
const int BINKickPlayerOutResponse::kMessageFieldNumber;
const int BINKickPlayerOutResponse::kKickedUserIdFieldNumber;
#endif  // !_MSC_VER

BINKickPlayerOutResponse::BINKickPlayerOutResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BINKickPlayerOutResponse::InitAsDefaultInstance() {
}

BINKickPlayerOutResponse::BINKickPlayerOutResponse(const BINKickPlayerOutResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BINKickPlayerOutResponse::SharedCtor() {
  _cached_size_ = 0;
  responsecode_ = false;
  message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  kickeduserid_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BINKickPlayerOutResponse::~BINKickPlayerOutResponse() {
  SharedDtor();
}

void BINKickPlayerOutResponse::SharedDtor() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    delete message_;
  }
  if (this != default_instance_) {
  }
}

void BINKickPlayerOutResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BINKickPlayerOutResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BINKickPlayerOutResponse_descriptor_;
}

const BINKickPlayerOutResponse& BINKickPlayerOutResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_kick_5fplayer_5fout_2eproto();
  return *default_instance_;
}

BINKickPlayerOutResponse* BINKickPlayerOutResponse::default_instance_ = NULL;

BINKickPlayerOutResponse* BINKickPlayerOutResponse::New() const {
  return new BINKickPlayerOutResponse;
}

void BINKickPlayerOutResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    responsecode_ = false;
    if (has_message()) {
      if (message_ != &::google::protobuf::internal::kEmptyString) {
        message_->clear();
      }
    }
    kickeduserid_ = GOOGLE_LONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BINKickPlayerOutResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bool responseCode = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &responsecode_)));
          set_has_responsecode();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_message;
        break;
      }

      // optional string message = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_message:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_message()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->message().data(), this->message().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_kickedUserId;
        break;
      }

      // optional int64 kickedUserId = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_kickedUserId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &kickeduserid_)));
          set_has_kickeduserid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void BINKickPlayerOutResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required bool responseCode = 1;
  if (has_responsecode()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->responsecode(), output);
  }

  // optional string message = 2;
  if (has_message()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->message(), output);
  }

  // optional int64 kickedUserId = 3;
  if (has_kickeduserid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->kickeduserid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BINKickPlayerOutResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required bool responseCode = 1;
  if (has_responsecode()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->responsecode(), target);
  }

  // optional string message = 2;
  if (has_message()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->message(), target);
  }

  // optional int64 kickedUserId = 3;
  if (has_kickeduserid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->kickeduserid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BINKickPlayerOutResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required bool responseCode = 1;
    if (has_responsecode()) {
      total_size += 1 + 1;
    }

    // optional string message = 2;
    if (has_message()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->message());
    }

    // optional int64 kickedUserId = 3;
    if (has_kickeduserid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->kickeduserid());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BINKickPlayerOutResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BINKickPlayerOutResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BINKickPlayerOutResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BINKickPlayerOutResponse::MergeFrom(const BINKickPlayerOutResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_responsecode()) {
      set_responsecode(from.responsecode());
    }
    if (from.has_message()) {
      set_message(from.message());
    }
    if (from.has_kickeduserid()) {
      set_kickeduserid(from.kickeduserid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BINKickPlayerOutResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BINKickPlayerOutResponse::CopyFrom(const BINKickPlayerOutResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BINKickPlayerOutResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void BINKickPlayerOutResponse::Swap(BINKickPlayerOutResponse* other) {
  if (other != this) {
    std::swap(responsecode_, other->responsecode_);
    std::swap(message_, other->message_);
    std::swap(kickeduserid_, other->kickeduserid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BINKickPlayerOutResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BINKickPlayerOutResponse_descriptor_;
  metadata.reflection = BINKickPlayerOutResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)