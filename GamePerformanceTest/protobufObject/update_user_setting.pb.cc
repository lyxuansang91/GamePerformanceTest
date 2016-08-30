// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: update_user_setting.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "update_user_setting.pb.h"

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

const ::google::protobuf::Descriptor* BINUpdateUserSettingRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BINUpdateUserSettingRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* BINUpdateUserSettingResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BINUpdateUserSettingResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_update_5fuser_5fsetting_2eproto() {
  protobuf_AddDesc_update_5fuser_5fsetting_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "update_user_setting.proto");
  GOOGLE_CHECK(file != NULL);
  BINUpdateUserSettingRequest_descriptor_ = file->message_type(0);
  static const int BINUpdateUserSettingRequest_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINUpdateUserSettingRequest, autoready_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINUpdateUserSettingRequest, autodenyinvitation_),
  };
  BINUpdateUserSettingRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BINUpdateUserSettingRequest_descriptor_,
      BINUpdateUserSettingRequest::default_instance_,
      BINUpdateUserSettingRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINUpdateUserSettingRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINUpdateUserSettingRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BINUpdateUserSettingRequest));
  BINUpdateUserSettingResponse_descriptor_ = file->message_type(1);
  static const int BINUpdateUserSettingResponse_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINUpdateUserSettingResponse, responsecode_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINUpdateUserSettingResponse, message_),
  };
  BINUpdateUserSettingResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BINUpdateUserSettingResponse_descriptor_,
      BINUpdateUserSettingResponse::default_instance_,
      BINUpdateUserSettingResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINUpdateUserSettingResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINUpdateUserSettingResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BINUpdateUserSettingResponse));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_update_5fuser_5fsetting_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BINUpdateUserSettingRequest_descriptor_, &BINUpdateUserSettingRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BINUpdateUserSettingResponse_descriptor_, &BINUpdateUserSettingResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_update_5fuser_5fsetting_2eproto() {
  delete BINUpdateUserSettingRequest::default_instance_;
  delete BINUpdateUserSettingRequest_reflection_;
  delete BINUpdateUserSettingResponse::default_instance_;
  delete BINUpdateUserSettingResponse_reflection_;
}

void protobuf_AddDesc_update_5fuser_5fsetting_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031update_user_setting.proto\"L\n\033BINUpdate"
    "UserSettingRequest\022\021\n\tautoReady\030\001 \001(\010\022\032\n"
    "\022autoDenyInvitation\030\002 \001(\010\"E\n\034BINUpdateUs"
    "erSettingResponse\022\024\n\014responseCode\030\001 \002(\010\022"
    "\017\n\007message\030\002 \001(\tB\036\n\034com.mi.game.network."
    "data.bin", 208);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "update_user_setting.proto", &protobuf_RegisterTypes);
  BINUpdateUserSettingRequest::default_instance_ = new BINUpdateUserSettingRequest();
  BINUpdateUserSettingResponse::default_instance_ = new BINUpdateUserSettingResponse();
  BINUpdateUserSettingRequest::default_instance_->InitAsDefaultInstance();
  BINUpdateUserSettingResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_update_5fuser_5fsetting_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_update_5fuser_5fsetting_2eproto {
  StaticDescriptorInitializer_update_5fuser_5fsetting_2eproto() {
    protobuf_AddDesc_update_5fuser_5fsetting_2eproto();
  }
} static_descriptor_initializer_update_5fuser_5fsetting_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int BINUpdateUserSettingRequest::kAutoReadyFieldNumber;
const int BINUpdateUserSettingRequest::kAutoDenyInvitationFieldNumber;
#endif  // !_MSC_VER

BINUpdateUserSettingRequest::BINUpdateUserSettingRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BINUpdateUserSettingRequest::InitAsDefaultInstance() {
}

BINUpdateUserSettingRequest::BINUpdateUserSettingRequest(const BINUpdateUserSettingRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BINUpdateUserSettingRequest::SharedCtor() {
  _cached_size_ = 0;
  autoready_ = false;
  autodenyinvitation_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BINUpdateUserSettingRequest::~BINUpdateUserSettingRequest() {
  SharedDtor();
}

void BINUpdateUserSettingRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BINUpdateUserSettingRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BINUpdateUserSettingRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BINUpdateUserSettingRequest_descriptor_;
}

const BINUpdateUserSettingRequest& BINUpdateUserSettingRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_update_5fuser_5fsetting_2eproto();
  return *default_instance_;
}

BINUpdateUserSettingRequest* BINUpdateUserSettingRequest::default_instance_ = NULL;

BINUpdateUserSettingRequest* BINUpdateUserSettingRequest::New() const {
  return new BINUpdateUserSettingRequest;
}

void BINUpdateUserSettingRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    autoready_ = false;
    autodenyinvitation_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BINUpdateUserSettingRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool autoReady = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &autoready_)));
          set_has_autoready();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_autoDenyInvitation;
        break;
      }

      // optional bool autoDenyInvitation = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_autoDenyInvitation:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &autodenyinvitation_)));
          set_has_autodenyinvitation();
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

void BINUpdateUserSettingRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional bool autoReady = 1;
  if (has_autoready()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->autoready(), output);
  }

  // optional bool autoDenyInvitation = 2;
  if (has_autodenyinvitation()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->autodenyinvitation(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BINUpdateUserSettingRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional bool autoReady = 1;
  if (has_autoready()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->autoready(), target);
  }

  // optional bool autoDenyInvitation = 2;
  if (has_autodenyinvitation()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->autodenyinvitation(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BINUpdateUserSettingRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bool autoReady = 1;
    if (has_autoready()) {
      total_size += 1 + 1;
    }

    // optional bool autoDenyInvitation = 2;
    if (has_autodenyinvitation()) {
      total_size += 1 + 1;
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

void BINUpdateUserSettingRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BINUpdateUserSettingRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BINUpdateUserSettingRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BINUpdateUserSettingRequest::MergeFrom(const BINUpdateUserSettingRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_autoready()) {
      set_autoready(from.autoready());
    }
    if (from.has_autodenyinvitation()) {
      set_autodenyinvitation(from.autodenyinvitation());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BINUpdateUserSettingRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BINUpdateUserSettingRequest::CopyFrom(const BINUpdateUserSettingRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BINUpdateUserSettingRequest::IsInitialized() const {

  return true;
}

void BINUpdateUserSettingRequest::Swap(BINUpdateUserSettingRequest* other) {
  if (other != this) {
    std::swap(autoready_, other->autoready_);
    std::swap(autodenyinvitation_, other->autodenyinvitation_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BINUpdateUserSettingRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BINUpdateUserSettingRequest_descriptor_;
  metadata.reflection = BINUpdateUserSettingRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int BINUpdateUserSettingResponse::kResponseCodeFieldNumber;
const int BINUpdateUserSettingResponse::kMessageFieldNumber;
#endif  // !_MSC_VER

BINUpdateUserSettingResponse::BINUpdateUserSettingResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BINUpdateUserSettingResponse::InitAsDefaultInstance() {
}

BINUpdateUserSettingResponse::BINUpdateUserSettingResponse(const BINUpdateUserSettingResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BINUpdateUserSettingResponse::SharedCtor() {
  _cached_size_ = 0;
  responsecode_ = false;
  message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BINUpdateUserSettingResponse::~BINUpdateUserSettingResponse() {
  SharedDtor();
}

void BINUpdateUserSettingResponse::SharedDtor() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    delete message_;
  }
  if (this != default_instance_) {
  }
}

void BINUpdateUserSettingResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BINUpdateUserSettingResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BINUpdateUserSettingResponse_descriptor_;
}

const BINUpdateUserSettingResponse& BINUpdateUserSettingResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_update_5fuser_5fsetting_2eproto();
  return *default_instance_;
}

BINUpdateUserSettingResponse* BINUpdateUserSettingResponse::default_instance_ = NULL;

BINUpdateUserSettingResponse* BINUpdateUserSettingResponse::New() const {
  return new BINUpdateUserSettingResponse;
}

void BINUpdateUserSettingResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    responsecode_ = false;
    if (has_message()) {
      if (message_ != &::google::protobuf::internal::kEmptyString) {
        message_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BINUpdateUserSettingResponse::MergePartialFromCodedStream(
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

void BINUpdateUserSettingResponse::SerializeWithCachedSizes(
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

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BINUpdateUserSettingResponse::SerializeWithCachedSizesToArray(
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

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BINUpdateUserSettingResponse::ByteSize() const {
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

void BINUpdateUserSettingResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BINUpdateUserSettingResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BINUpdateUserSettingResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BINUpdateUserSettingResponse::MergeFrom(const BINUpdateUserSettingResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_responsecode()) {
      set_responsecode(from.responsecode());
    }
    if (from.has_message()) {
      set_message(from.message());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BINUpdateUserSettingResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BINUpdateUserSettingResponse::CopyFrom(const BINUpdateUserSettingResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BINUpdateUserSettingResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void BINUpdateUserSettingResponse::Swap(BINUpdateUserSettingResponse* other) {
  if (other != this) {
    std::swap(responsecode_, other->responsecode_);
    std::swap(message_, other->message_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BINUpdateUserSettingResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BINUpdateUserSettingResponse_descriptor_;
  metadata.reflection = BINUpdateUserSettingResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)