// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: register.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "register.pb.h"

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

const ::google::protobuf::Descriptor* BINRegisterRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BINRegisterRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* BINRegisterResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BINRegisterResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_register_2eproto() {
  protobuf_AddDesc_register_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "register.proto");
  GOOGLE_CHECK(file != NULL);
  BINRegisterRequest_descriptor_ = file->message_type(0);
  static const int BINRegisterRequest_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINRegisterRequest, username_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINRegisterRequest, password_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINRegisterRequest, confirmpassword_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINRegisterRequest, displayname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINRegisterRequest, mobile_),
  };
  BINRegisterRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BINRegisterRequest_descriptor_,
      BINRegisterRequest::default_instance_,
      BINRegisterRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINRegisterRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINRegisterRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BINRegisterRequest));
  BINRegisterResponse_descriptor_ = file->message_type(1);
  static const int BINRegisterResponse_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINRegisterResponse, responsecode_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINRegisterResponse, message_),
  };
  BINRegisterResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BINRegisterResponse_descriptor_,
      BINRegisterResponse::default_instance_,
      BINRegisterResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINRegisterResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINRegisterResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BINRegisterResponse));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_register_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BINRegisterRequest_descriptor_, &BINRegisterRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BINRegisterResponse_descriptor_, &BINRegisterResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_register_2eproto() {
  delete BINRegisterRequest::default_instance_;
  delete BINRegisterRequest_reflection_;
  delete BINRegisterResponse::default_instance_;
  delete BINRegisterResponse_reflection_;
}

void protobuf_AddDesc_register_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016register.proto\"v\n\022BINRegisterRequest\022\020"
    "\n\010userName\030\001 \002(\t\022\020\n\010password\030\002 \002(\t\022\027\n\017co"
    "nfirmPassword\030\003 \002(\t\022\023\n\013displayName\030\004 \001(\t"
    "\022\016\n\006mobile\030\005 \001(\t\"<\n\023BINRegisterResponse\022"
    "\024\n\014responseCode\030\001 \002(\010\022\017\n\007message\030\002 \001(\tB\036"
    "\n\034com.mi.game.network.data.bin", 230);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "register.proto", &protobuf_RegisterTypes);
  BINRegisterRequest::default_instance_ = new BINRegisterRequest();
  BINRegisterResponse::default_instance_ = new BINRegisterResponse();
  BINRegisterRequest::default_instance_->InitAsDefaultInstance();
  BINRegisterResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_register_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_register_2eproto {
  StaticDescriptorInitializer_register_2eproto() {
    protobuf_AddDesc_register_2eproto();
  }
} static_descriptor_initializer_register_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int BINRegisterRequest::kUserNameFieldNumber;
const int BINRegisterRequest::kPasswordFieldNumber;
const int BINRegisterRequest::kConfirmPasswordFieldNumber;
const int BINRegisterRequest::kDisplayNameFieldNumber;
const int BINRegisterRequest::kMobileFieldNumber;
#endif  // !_MSC_VER

BINRegisterRequest::BINRegisterRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BINRegisterRequest::InitAsDefaultInstance() {
}

BINRegisterRequest::BINRegisterRequest(const BINRegisterRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BINRegisterRequest::SharedCtor() {
  _cached_size_ = 0;
  username_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  confirmpassword_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  displayname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  mobile_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BINRegisterRequest::~BINRegisterRequest() {
  SharedDtor();
}

void BINRegisterRequest::SharedDtor() {
  if (username_ != &::google::protobuf::internal::kEmptyString) {
    delete username_;
  }
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    delete password_;
  }
  if (confirmpassword_ != &::google::protobuf::internal::kEmptyString) {
    delete confirmpassword_;
  }
  if (displayname_ != &::google::protobuf::internal::kEmptyString) {
    delete displayname_;
  }
  if (mobile_ != &::google::protobuf::internal::kEmptyString) {
    delete mobile_;
  }
  if (this != default_instance_) {
  }
}

void BINRegisterRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BINRegisterRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BINRegisterRequest_descriptor_;
}

const BINRegisterRequest& BINRegisterRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_register_2eproto();
  return *default_instance_;
}

BINRegisterRequest* BINRegisterRequest::default_instance_ = NULL;

BINRegisterRequest* BINRegisterRequest::New() const {
  return new BINRegisterRequest;
}

void BINRegisterRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_username()) {
      if (username_ != &::google::protobuf::internal::kEmptyString) {
        username_->clear();
      }
    }
    if (has_password()) {
      if (password_ != &::google::protobuf::internal::kEmptyString) {
        password_->clear();
      }
    }
    if (has_confirmpassword()) {
      if (confirmpassword_ != &::google::protobuf::internal::kEmptyString) {
        confirmpassword_->clear();
      }
    }
    if (has_displayname()) {
      if (displayname_ != &::google::protobuf::internal::kEmptyString) {
        displayname_->clear();
      }
    }
    if (has_mobile()) {
      if (mobile_ != &::google::protobuf::internal::kEmptyString) {
        mobile_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BINRegisterRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string userName = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_username()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->username().data(), this->username().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_password;
        break;
      }

      // required string password = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_password:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_password()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->password().data(), this->password().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_confirmPassword;
        break;
      }

      // required string confirmPassword = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_confirmPassword:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_confirmpassword()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->confirmpassword().data(), this->confirmpassword().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_displayName;
        break;
      }

      // optional string displayName = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_displayName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_displayname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->displayname().data(), this->displayname().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_mobile;
        break;
      }

      // optional string mobile = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_mobile:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_mobile()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->mobile().data(), this->mobile().length(),
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

void BINRegisterRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string userName = 1;
  if (has_username()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->username().data(), this->username().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->username(), output);
  }

  // required string password = 2;
  if (has_password()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->password().data(), this->password().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->password(), output);
  }

  // required string confirmPassword = 3;
  if (has_confirmpassword()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->confirmpassword().data(), this->confirmpassword().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->confirmpassword(), output);
  }

  // optional string displayName = 4;
  if (has_displayname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->displayname().data(), this->displayname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->displayname(), output);
  }

  // optional string mobile = 5;
  if (has_mobile()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->mobile().data(), this->mobile().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->mobile(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BINRegisterRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string userName = 1;
  if (has_username()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->username().data(), this->username().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->username(), target);
  }

  // required string password = 2;
  if (has_password()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->password().data(), this->password().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->password(), target);
  }

  // required string confirmPassword = 3;
  if (has_confirmpassword()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->confirmpassword().data(), this->confirmpassword().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->confirmpassword(), target);
  }

  // optional string displayName = 4;
  if (has_displayname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->displayname().data(), this->displayname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->displayname(), target);
  }

  // optional string mobile = 5;
  if (has_mobile()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->mobile().data(), this->mobile().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->mobile(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BINRegisterRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string userName = 1;
    if (has_username()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->username());
    }

    // required string password = 2;
    if (has_password()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->password());
    }

    // required string confirmPassword = 3;
    if (has_confirmpassword()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->confirmpassword());
    }

    // optional string displayName = 4;
    if (has_displayname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->displayname());
    }

    // optional string mobile = 5;
    if (has_mobile()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->mobile());
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

void BINRegisterRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BINRegisterRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BINRegisterRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BINRegisterRequest::MergeFrom(const BINRegisterRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_username()) {
      set_username(from.username());
    }
    if (from.has_password()) {
      set_password(from.password());
    }
    if (from.has_confirmpassword()) {
      set_confirmpassword(from.confirmpassword());
    }
    if (from.has_displayname()) {
      set_displayname(from.displayname());
    }
    if (from.has_mobile()) {
      set_mobile(from.mobile());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BINRegisterRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BINRegisterRequest::CopyFrom(const BINRegisterRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BINRegisterRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void BINRegisterRequest::Swap(BINRegisterRequest* other) {
  if (other != this) {
    std::swap(username_, other->username_);
    std::swap(password_, other->password_);
    std::swap(confirmpassword_, other->confirmpassword_);
    std::swap(displayname_, other->displayname_);
    std::swap(mobile_, other->mobile_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BINRegisterRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BINRegisterRequest_descriptor_;
  metadata.reflection = BINRegisterRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int BINRegisterResponse::kResponseCodeFieldNumber;
const int BINRegisterResponse::kMessageFieldNumber;
#endif  // !_MSC_VER

BINRegisterResponse::BINRegisterResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BINRegisterResponse::InitAsDefaultInstance() {
}

BINRegisterResponse::BINRegisterResponse(const BINRegisterResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BINRegisterResponse::SharedCtor() {
  _cached_size_ = 0;
  responsecode_ = false;
  message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BINRegisterResponse::~BINRegisterResponse() {
  SharedDtor();
}

void BINRegisterResponse::SharedDtor() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    delete message_;
  }
  if (this != default_instance_) {
  }
}

void BINRegisterResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BINRegisterResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BINRegisterResponse_descriptor_;
}

const BINRegisterResponse& BINRegisterResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_register_2eproto();
  return *default_instance_;
}

BINRegisterResponse* BINRegisterResponse::default_instance_ = NULL;

BINRegisterResponse* BINRegisterResponse::New() const {
  return new BINRegisterResponse;
}

void BINRegisterResponse::Clear() {
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

bool BINRegisterResponse::MergePartialFromCodedStream(
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

void BINRegisterResponse::SerializeWithCachedSizes(
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

::google::protobuf::uint8* BINRegisterResponse::SerializeWithCachedSizesToArray(
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

int BINRegisterResponse::ByteSize() const {
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

void BINRegisterResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BINRegisterResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BINRegisterResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BINRegisterResponse::MergeFrom(const BINRegisterResponse& from) {
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

void BINRegisterResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BINRegisterResponse::CopyFrom(const BINRegisterResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BINRegisterResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void BINRegisterResponse::Swap(BINRegisterResponse* other) {
  if (other != this) {
    std::swap(responsecode_, other->responsecode_);
    std::swap(message_, other->message_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BINRegisterResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BINRegisterResponse_descriptor_;
  metadata.reflection = BINRegisterResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
