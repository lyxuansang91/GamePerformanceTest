// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: send_text_emoticon.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "send_text_emoticon.pb.h"

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

const ::google::protobuf::Descriptor* BINSendTextEmoticonRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BINSendTextEmoticonRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* BINSendTextEmoticonResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BINSendTextEmoticonResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_send_5ftext_5femoticon_2eproto() {
  protobuf_AddDesc_send_5ftext_5femoticon_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "send_text_emoticon.proto");
  GOOGLE_CHECK(file != NULL);
  BINSendTextEmoticonRequest_descriptor_ = file->message_type(0);
  static const int BINSendTextEmoticonRequest_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINSendTextEmoticonRequest, textemoticonid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINSendTextEmoticonRequest, targetuserid_),
  };
  BINSendTextEmoticonRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BINSendTextEmoticonRequest_descriptor_,
      BINSendTextEmoticonRequest::default_instance_,
      BINSendTextEmoticonRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINSendTextEmoticonRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINSendTextEmoticonRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BINSendTextEmoticonRequest));
  BINSendTextEmoticonResponse_descriptor_ = file->message_type(1);
  static const int BINSendTextEmoticonResponse_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINSendTextEmoticonResponse, responsecode_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINSendTextEmoticonResponse, message_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINSendTextEmoticonResponse, textemoticonid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINSendTextEmoticonResponse, senderuserid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINSendTextEmoticonResponse, targetuserid_),
  };
  BINSendTextEmoticonResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BINSendTextEmoticonResponse_descriptor_,
      BINSendTextEmoticonResponse::default_instance_,
      BINSendTextEmoticonResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINSendTextEmoticonResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINSendTextEmoticonResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BINSendTextEmoticonResponse));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_send_5ftext_5femoticon_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BINSendTextEmoticonRequest_descriptor_, &BINSendTextEmoticonRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BINSendTextEmoticonResponse_descriptor_, &BINSendTextEmoticonResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_send_5ftext_5femoticon_2eproto() {
  delete BINSendTextEmoticonRequest::default_instance_;
  delete BINSendTextEmoticonRequest_reflection_;
  delete BINSendTextEmoticonResponse::default_instance_;
  delete BINSendTextEmoticonResponse_reflection_;
}

void protobuf_AddDesc_send_5ftext_5femoticon_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\030send_text_emoticon.proto\"J\n\032BINSendTex"
    "tEmoticonRequest\022\026\n\016textEmoticonId\030\001 \002(\005"
    "\022\024\n\014targetUserId\030\002 \002(\003\"\210\001\n\033BINSendTextEm"
    "oticonResponse\022\024\n\014responseCode\030\001 \002(\010\022\017\n\007"
    "message\030\002 \001(\t\022\026\n\016textEmoticonId\030\003 \001(\005\022\024\n"
    "\014senderUserId\030\004 \001(\003\022\024\n\014targetUserId\030\005 \001("
    "\003B\036\n\034com.mi.game.network.data.bin", 273);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "send_text_emoticon.proto", &protobuf_RegisterTypes);
  BINSendTextEmoticonRequest::default_instance_ = new BINSendTextEmoticonRequest();
  BINSendTextEmoticonResponse::default_instance_ = new BINSendTextEmoticonResponse();
  BINSendTextEmoticonRequest::default_instance_->InitAsDefaultInstance();
  BINSendTextEmoticonResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_send_5ftext_5femoticon_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_send_5ftext_5femoticon_2eproto {
  StaticDescriptorInitializer_send_5ftext_5femoticon_2eproto() {
    protobuf_AddDesc_send_5ftext_5femoticon_2eproto();
  }
} static_descriptor_initializer_send_5ftext_5femoticon_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int BINSendTextEmoticonRequest::kTextEmoticonIdFieldNumber;
const int BINSendTextEmoticonRequest::kTargetUserIdFieldNumber;
#endif  // !_MSC_VER

BINSendTextEmoticonRequest::BINSendTextEmoticonRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BINSendTextEmoticonRequest::InitAsDefaultInstance() {
}

BINSendTextEmoticonRequest::BINSendTextEmoticonRequest(const BINSendTextEmoticonRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BINSendTextEmoticonRequest::SharedCtor() {
  _cached_size_ = 0;
  textemoticonid_ = 0;
  targetuserid_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BINSendTextEmoticonRequest::~BINSendTextEmoticonRequest() {
  SharedDtor();
}

void BINSendTextEmoticonRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BINSendTextEmoticonRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BINSendTextEmoticonRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BINSendTextEmoticonRequest_descriptor_;
}

const BINSendTextEmoticonRequest& BINSendTextEmoticonRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_send_5ftext_5femoticon_2eproto();
  return *default_instance_;
}

BINSendTextEmoticonRequest* BINSendTextEmoticonRequest::default_instance_ = NULL;

BINSendTextEmoticonRequest* BINSendTextEmoticonRequest::New() const {
  return new BINSendTextEmoticonRequest;
}

void BINSendTextEmoticonRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    textemoticonid_ = 0;
    targetuserid_ = GOOGLE_LONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BINSendTextEmoticonRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 textEmoticonId = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &textemoticonid_)));
          set_has_textemoticonid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_targetUserId;
        break;
      }

      // required int64 targetUserId = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_targetUserId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &targetuserid_)));
          set_has_targetuserid();
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

void BINSendTextEmoticonRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 textEmoticonId = 1;
  if (has_textemoticonid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->textemoticonid(), output);
  }

  // required int64 targetUserId = 2;
  if (has_targetuserid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->targetuserid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BINSendTextEmoticonRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 textEmoticonId = 1;
  if (has_textemoticonid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->textemoticonid(), target);
  }

  // required int64 targetUserId = 2;
  if (has_targetuserid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->targetuserid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BINSendTextEmoticonRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 textEmoticonId = 1;
    if (has_textemoticonid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->textemoticonid());
    }

    // required int64 targetUserId = 2;
    if (has_targetuserid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->targetuserid());
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

void BINSendTextEmoticonRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BINSendTextEmoticonRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BINSendTextEmoticonRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BINSendTextEmoticonRequest::MergeFrom(const BINSendTextEmoticonRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_textemoticonid()) {
      set_textemoticonid(from.textemoticonid());
    }
    if (from.has_targetuserid()) {
      set_targetuserid(from.targetuserid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BINSendTextEmoticonRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BINSendTextEmoticonRequest::CopyFrom(const BINSendTextEmoticonRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BINSendTextEmoticonRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void BINSendTextEmoticonRequest::Swap(BINSendTextEmoticonRequest* other) {
  if (other != this) {
    std::swap(textemoticonid_, other->textemoticonid_);
    std::swap(targetuserid_, other->targetuserid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BINSendTextEmoticonRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BINSendTextEmoticonRequest_descriptor_;
  metadata.reflection = BINSendTextEmoticonRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int BINSendTextEmoticonResponse::kResponseCodeFieldNumber;
const int BINSendTextEmoticonResponse::kMessageFieldNumber;
const int BINSendTextEmoticonResponse::kTextEmoticonIdFieldNumber;
const int BINSendTextEmoticonResponse::kSenderUserIdFieldNumber;
const int BINSendTextEmoticonResponse::kTargetUserIdFieldNumber;
#endif  // !_MSC_VER

BINSendTextEmoticonResponse::BINSendTextEmoticonResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BINSendTextEmoticonResponse::InitAsDefaultInstance() {
}

BINSendTextEmoticonResponse::BINSendTextEmoticonResponse(const BINSendTextEmoticonResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BINSendTextEmoticonResponse::SharedCtor() {
  _cached_size_ = 0;
  responsecode_ = false;
  message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  textemoticonid_ = 0;
  senderuserid_ = GOOGLE_LONGLONG(0);
  targetuserid_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BINSendTextEmoticonResponse::~BINSendTextEmoticonResponse() {
  SharedDtor();
}

void BINSendTextEmoticonResponse::SharedDtor() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    delete message_;
  }
  if (this != default_instance_) {
  }
}

void BINSendTextEmoticonResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BINSendTextEmoticonResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BINSendTextEmoticonResponse_descriptor_;
}

const BINSendTextEmoticonResponse& BINSendTextEmoticonResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_send_5ftext_5femoticon_2eproto();
  return *default_instance_;
}

BINSendTextEmoticonResponse* BINSendTextEmoticonResponse::default_instance_ = NULL;

BINSendTextEmoticonResponse* BINSendTextEmoticonResponse::New() const {
  return new BINSendTextEmoticonResponse;
}

void BINSendTextEmoticonResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    responsecode_ = false;
    if (has_message()) {
      if (message_ != &::google::protobuf::internal::kEmptyString) {
        message_->clear();
      }
    }
    textemoticonid_ = 0;
    senderuserid_ = GOOGLE_LONGLONG(0);
    targetuserid_ = GOOGLE_LONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BINSendTextEmoticonResponse::MergePartialFromCodedStream(
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
        if (input->ExpectTag(24)) goto parse_textEmoticonId;
        break;
      }

      // optional int32 textEmoticonId = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_textEmoticonId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &textemoticonid_)));
          set_has_textemoticonid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_senderUserId;
        break;
      }

      // optional int64 senderUserId = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_senderUserId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &senderuserid_)));
          set_has_senderuserid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_targetUserId;
        break;
      }

      // optional int64 targetUserId = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_targetUserId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &targetuserid_)));
          set_has_targetuserid();
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

void BINSendTextEmoticonResponse::SerializeWithCachedSizes(
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

  // optional int32 textEmoticonId = 3;
  if (has_textemoticonid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->textemoticonid(), output);
  }

  // optional int64 senderUserId = 4;
  if (has_senderuserid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->senderuserid(), output);
  }

  // optional int64 targetUserId = 5;
  if (has_targetuserid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->targetuserid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BINSendTextEmoticonResponse::SerializeWithCachedSizesToArray(
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

  // optional int32 textEmoticonId = 3;
  if (has_textemoticonid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->textemoticonid(), target);
  }

  // optional int64 senderUserId = 4;
  if (has_senderuserid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->senderuserid(), target);
  }

  // optional int64 targetUserId = 5;
  if (has_targetuserid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, this->targetuserid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BINSendTextEmoticonResponse::ByteSize() const {
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

    // optional int32 textEmoticonId = 3;
    if (has_textemoticonid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->textemoticonid());
    }

    // optional int64 senderUserId = 4;
    if (has_senderuserid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->senderuserid());
    }

    // optional int64 targetUserId = 5;
    if (has_targetuserid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->targetuserid());
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

void BINSendTextEmoticonResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BINSendTextEmoticonResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BINSendTextEmoticonResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BINSendTextEmoticonResponse::MergeFrom(const BINSendTextEmoticonResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_responsecode()) {
      set_responsecode(from.responsecode());
    }
    if (from.has_message()) {
      set_message(from.message());
    }
    if (from.has_textemoticonid()) {
      set_textemoticonid(from.textemoticonid());
    }
    if (from.has_senderuserid()) {
      set_senderuserid(from.senderuserid());
    }
    if (from.has_targetuserid()) {
      set_targetuserid(from.targetuserid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BINSendTextEmoticonResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BINSendTextEmoticonResponse::CopyFrom(const BINSendTextEmoticonResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BINSendTextEmoticonResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void BINSendTextEmoticonResponse::Swap(BINSendTextEmoticonResponse* other) {
  if (other != this) {
    std::swap(responsecode_, other->responsecode_);
    std::swap(message_, other->message_);
    std::swap(textemoticonid_, other->textemoticonid_);
    std::swap(senderuserid_, other->senderuserid_);
    std::swap(targetuserid_, other->targetuserid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BINSendTextEmoticonResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BINSendTextEmoticonResponse_descriptor_;
  metadata.reflection = BINSendTextEmoticonResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
