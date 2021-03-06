// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: update_money.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "update_money.pb.h"

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

const ::google::protobuf::Descriptor* BINMoneyBox_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BINMoneyBox_reflection_ = NULL;
const ::google::protobuf::Descriptor* BINUpdateMoneyResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BINUpdateMoneyResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_update_5fmoney_2eproto() {
  protobuf_AddDesc_update_5fmoney_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "update_money.proto");
  GOOGLE_CHECK(file != NULL);
  BINMoneyBox_descriptor_ = file->message_type(0);
  static const int BINMoneyBox_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINMoneyBox, userid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINMoneyBox, iscash_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINMoneyBox, changemoney_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINMoneyBox, currentmoney_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINMoneyBox, displaychangemoney_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINMoneyBox, reason_),
  };
  BINMoneyBox_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BINMoneyBox_descriptor_,
      BINMoneyBox::default_instance_,
      BINMoneyBox_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINMoneyBox, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINMoneyBox, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BINMoneyBox));
  BINUpdateMoneyResponse_descriptor_ = file->message_type(1);
  static const int BINUpdateMoneyResponse_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINUpdateMoneyResponse, responsecode_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINUpdateMoneyResponse, message_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINUpdateMoneyResponse, moneyboxes_),
  };
  BINUpdateMoneyResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BINUpdateMoneyResponse_descriptor_,
      BINUpdateMoneyResponse::default_instance_,
      BINUpdateMoneyResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINUpdateMoneyResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINUpdateMoneyResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BINUpdateMoneyResponse));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_update_5fmoney_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BINMoneyBox_descriptor_, &BINMoneyBox::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BINUpdateMoneyResponse_descriptor_, &BINUpdateMoneyResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_update_5fmoney_2eproto() {
  delete BINMoneyBox::default_instance_;
  delete BINMoneyBox_reflection_;
  delete BINUpdateMoneyResponse::default_instance_;
  delete BINUpdateMoneyResponse_reflection_;
}

void protobuf_AddDesc_update_5fmoney_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022update_money.proto\"\204\001\n\013BINMoneyBox\022\016\n\006"
    "userId\030\001 \002(\003\022\016\n\006isCash\030\002 \002(\010\022\023\n\013changeMo"
    "ney\030\003 \002(\003\022\024\n\014currentMoney\030\004 \002(\003\022\032\n\022displ"
    "ayChangeMoney\030\005 \001(\003\022\016\n\006reason\030\006 \001(\t\"a\n\026B"
    "INUpdateMoneyResponse\022\024\n\014responseCode\030\001 "
    "\002(\010\022\017\n\007message\030\002 \001(\t\022 \n\nmoneyBoxes\030\003 \003(\013"
    "2\014.BINMoneyBoxB\036\n\034com.mi.game.network.da"
    "ta.bin", 286);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "update_money.proto", &protobuf_RegisterTypes);
  BINMoneyBox::default_instance_ = new BINMoneyBox();
  BINUpdateMoneyResponse::default_instance_ = new BINUpdateMoneyResponse();
  BINMoneyBox::default_instance_->InitAsDefaultInstance();
  BINUpdateMoneyResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_update_5fmoney_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_update_5fmoney_2eproto {
  StaticDescriptorInitializer_update_5fmoney_2eproto() {
    protobuf_AddDesc_update_5fmoney_2eproto();
  }
} static_descriptor_initializer_update_5fmoney_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int BINMoneyBox::kUserIdFieldNumber;
const int BINMoneyBox::kIsCashFieldNumber;
const int BINMoneyBox::kChangeMoneyFieldNumber;
const int BINMoneyBox::kCurrentMoneyFieldNumber;
const int BINMoneyBox::kDisplayChangeMoneyFieldNumber;
const int BINMoneyBox::kReasonFieldNumber;
#endif  // !_MSC_VER

BINMoneyBox::BINMoneyBox()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BINMoneyBox::InitAsDefaultInstance() {
}

BINMoneyBox::BINMoneyBox(const BINMoneyBox& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BINMoneyBox::SharedCtor() {
  _cached_size_ = 0;
  userid_ = GOOGLE_LONGLONG(0);
  iscash_ = false;
  changemoney_ = GOOGLE_LONGLONG(0);
  currentmoney_ = GOOGLE_LONGLONG(0);
  displaychangemoney_ = GOOGLE_LONGLONG(0);
  reason_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BINMoneyBox::~BINMoneyBox() {
  SharedDtor();
}

void BINMoneyBox::SharedDtor() {
  if (reason_ != &::google::protobuf::internal::kEmptyString) {
    delete reason_;
  }
  if (this != default_instance_) {
  }
}

void BINMoneyBox::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BINMoneyBox::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BINMoneyBox_descriptor_;
}

const BINMoneyBox& BINMoneyBox::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_update_5fmoney_2eproto();
  return *default_instance_;
}

BINMoneyBox* BINMoneyBox::default_instance_ = NULL;

BINMoneyBox* BINMoneyBox::New() const {
  return new BINMoneyBox;
}

void BINMoneyBox::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    userid_ = GOOGLE_LONGLONG(0);
    iscash_ = false;
    changemoney_ = GOOGLE_LONGLONG(0);
    currentmoney_ = GOOGLE_LONGLONG(0);
    displaychangemoney_ = GOOGLE_LONGLONG(0);
    if (has_reason()) {
      if (reason_ != &::google::protobuf::internal::kEmptyString) {
        reason_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BINMoneyBox::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int64 userId = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &userid_)));
          set_has_userid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_isCash;
        break;
      }

      // required bool isCash = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_isCash:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &iscash_)));
          set_has_iscash();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_changeMoney;
        break;
      }

      // required int64 changeMoney = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_changeMoney:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &changemoney_)));
          set_has_changemoney();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_currentMoney;
        break;
      }

      // required int64 currentMoney = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_currentMoney:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &currentmoney_)));
          set_has_currentmoney();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_displayChangeMoney;
        break;
      }

      // optional int64 displayChangeMoney = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_displayChangeMoney:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &displaychangemoney_)));
          set_has_displaychangemoney();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_reason;
        break;
      }

      // optional string reason = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_reason:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_reason()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->reason().data(), this->reason().length(),
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

void BINMoneyBox::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int64 userId = 1;
  if (has_userid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->userid(), output);
  }

  // required bool isCash = 2;
  if (has_iscash()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->iscash(), output);
  }

  // required int64 changeMoney = 3;
  if (has_changemoney()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->changemoney(), output);
  }

  // required int64 currentMoney = 4;
  if (has_currentmoney()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->currentmoney(), output);
  }

  // optional int64 displayChangeMoney = 5;
  if (has_displaychangemoney()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->displaychangemoney(), output);
  }

  // optional string reason = 6;
  if (has_reason()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->reason().data(), this->reason().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->reason(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BINMoneyBox::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int64 userId = 1;
  if (has_userid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->userid(), target);
  }

  // required bool isCash = 2;
  if (has_iscash()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->iscash(), target);
  }

  // required int64 changeMoney = 3;
  if (has_changemoney()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->changemoney(), target);
  }

  // required int64 currentMoney = 4;
  if (has_currentmoney()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->currentmoney(), target);
  }

  // optional int64 displayChangeMoney = 5;
  if (has_displaychangemoney()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, this->displaychangemoney(), target);
  }

  // optional string reason = 6;
  if (has_reason()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->reason().data(), this->reason().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->reason(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BINMoneyBox::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int64 userId = 1;
    if (has_userid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->userid());
    }

    // required bool isCash = 2;
    if (has_iscash()) {
      total_size += 1 + 1;
    }

    // required int64 changeMoney = 3;
    if (has_changemoney()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->changemoney());
    }

    // required int64 currentMoney = 4;
    if (has_currentmoney()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->currentmoney());
    }

    // optional int64 displayChangeMoney = 5;
    if (has_displaychangemoney()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->displaychangemoney());
    }

    // optional string reason = 6;
    if (has_reason()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->reason());
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

void BINMoneyBox::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BINMoneyBox* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BINMoneyBox*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BINMoneyBox::MergeFrom(const BINMoneyBox& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_userid()) {
      set_userid(from.userid());
    }
    if (from.has_iscash()) {
      set_iscash(from.iscash());
    }
    if (from.has_changemoney()) {
      set_changemoney(from.changemoney());
    }
    if (from.has_currentmoney()) {
      set_currentmoney(from.currentmoney());
    }
    if (from.has_displaychangemoney()) {
      set_displaychangemoney(from.displaychangemoney());
    }
    if (from.has_reason()) {
      set_reason(from.reason());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BINMoneyBox::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BINMoneyBox::CopyFrom(const BINMoneyBox& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BINMoneyBox::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void BINMoneyBox::Swap(BINMoneyBox* other) {
  if (other != this) {
    std::swap(userid_, other->userid_);
    std::swap(iscash_, other->iscash_);
    std::swap(changemoney_, other->changemoney_);
    std::swap(currentmoney_, other->currentmoney_);
    std::swap(displaychangemoney_, other->displaychangemoney_);
    std::swap(reason_, other->reason_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BINMoneyBox::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BINMoneyBox_descriptor_;
  metadata.reflection = BINMoneyBox_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int BINUpdateMoneyResponse::kResponseCodeFieldNumber;
const int BINUpdateMoneyResponse::kMessageFieldNumber;
const int BINUpdateMoneyResponse::kMoneyBoxesFieldNumber;
#endif  // !_MSC_VER

BINUpdateMoneyResponse::BINUpdateMoneyResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BINUpdateMoneyResponse::InitAsDefaultInstance() {
}

BINUpdateMoneyResponse::BINUpdateMoneyResponse(const BINUpdateMoneyResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BINUpdateMoneyResponse::SharedCtor() {
  _cached_size_ = 0;
  responsecode_ = false;
  message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BINUpdateMoneyResponse::~BINUpdateMoneyResponse() {
  SharedDtor();
}

void BINUpdateMoneyResponse::SharedDtor() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    delete message_;
  }
  if (this != default_instance_) {
  }
}

void BINUpdateMoneyResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BINUpdateMoneyResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BINUpdateMoneyResponse_descriptor_;
}

const BINUpdateMoneyResponse& BINUpdateMoneyResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_update_5fmoney_2eproto();
  return *default_instance_;
}

BINUpdateMoneyResponse* BINUpdateMoneyResponse::default_instance_ = NULL;

BINUpdateMoneyResponse* BINUpdateMoneyResponse::New() const {
  return new BINUpdateMoneyResponse;
}

void BINUpdateMoneyResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    responsecode_ = false;
    if (has_message()) {
      if (message_ != &::google::protobuf::internal::kEmptyString) {
        message_->clear();
      }
    }
  }
  moneyboxes_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BINUpdateMoneyResponse::MergePartialFromCodedStream(
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
        if (input->ExpectTag(26)) goto parse_moneyBoxes;
        break;
      }

      // repeated .BINMoneyBox moneyBoxes = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_moneyBoxes:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_moneyboxes()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_moneyBoxes;
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

void BINUpdateMoneyResponse::SerializeWithCachedSizes(
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

  // repeated .BINMoneyBox moneyBoxes = 3;
  for (int i = 0; i < this->moneyboxes_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->moneyboxes(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BINUpdateMoneyResponse::SerializeWithCachedSizesToArray(
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

  // repeated .BINMoneyBox moneyBoxes = 3;
  for (int i = 0; i < this->moneyboxes_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->moneyboxes(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BINUpdateMoneyResponse::ByteSize() const {
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
  // repeated .BINMoneyBox moneyBoxes = 3;
  total_size += 1 * this->moneyboxes_size();
  for (int i = 0; i < this->moneyboxes_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->moneyboxes(i));
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

void BINUpdateMoneyResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BINUpdateMoneyResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BINUpdateMoneyResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BINUpdateMoneyResponse::MergeFrom(const BINUpdateMoneyResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  moneyboxes_.MergeFrom(from.moneyboxes_);
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

void BINUpdateMoneyResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BINUpdateMoneyResponse::CopyFrom(const BINUpdateMoneyResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BINUpdateMoneyResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  for (int i = 0; i < moneyboxes_size(); i++) {
    if (!this->moneyboxes(i).IsInitialized()) return false;
  }
  return true;
}

void BINUpdateMoneyResponse::Swap(BINUpdateMoneyResponse* other) {
  if (other != this) {
    std::swap(responsecode_, other->responsecode_);
    std::swap(message_, other->message_);
    moneyboxes_.Swap(&other->moneyboxes_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BINUpdateMoneyResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BINUpdateMoneyResponse_descriptor_;
  metadata.reflection = BINUpdateMoneyResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
