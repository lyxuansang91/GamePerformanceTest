// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: change_rule.proto

#ifndef PROTOBUF_change_5frule_2eproto__INCLUDED
#define PROTOBUF_change_5frule_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "map_field_entry.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_change_5frule_2eproto();
void protobuf_AssignDesc_change_5frule_2eproto();
void protobuf_ShutdownFile_change_5frule_2eproto();

class BINChangeRuleRequest;
class BINChangeRuleResponse;

// ===================================================================

class BINChangeRuleRequest : public ::google::protobuf::Message {
 public:
  BINChangeRuleRequest();
  virtual ~BINChangeRuleRequest();

  BINChangeRuleRequest(const BINChangeRuleRequest& from);

  inline BINChangeRuleRequest& operator=(const BINChangeRuleRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BINChangeRuleRequest& default_instance();

  void Swap(BINChangeRuleRequest* other);

  // implements Message ----------------------------------------------

  BINChangeRuleRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BINChangeRuleRequest& from);
  void MergeFrom(const BINChangeRuleRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 roomIndex = 1;
  inline bool has_roomindex() const;
  inline void clear_roomindex();
  static const int kRoomIndexFieldNumber = 1;
  inline ::google::protobuf::int32 roomindex() const;
  inline void set_roomindex(::google::protobuf::int32 value);

  // repeated .BINMapFieldEntry args = 2;
  inline int args_size() const;
  inline void clear_args();
  static const int kArgsFieldNumber = 2;
  inline const ::BINMapFieldEntry& args(int index) const;
  inline ::BINMapFieldEntry* mutable_args(int index);
  inline ::BINMapFieldEntry* add_args();
  inline const ::google::protobuf::RepeatedPtrField< ::BINMapFieldEntry >&
      args() const;
  inline ::google::protobuf::RepeatedPtrField< ::BINMapFieldEntry >*
      mutable_args();

  // @@protoc_insertion_point(class_scope:BINChangeRuleRequest)
 private:
  inline void set_has_roomindex();
  inline void clear_has_roomindex();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::BINMapFieldEntry > args_;
  ::google::protobuf::int32 roomindex_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_change_5frule_2eproto();
  friend void protobuf_AssignDesc_change_5frule_2eproto();
  friend void protobuf_ShutdownFile_change_5frule_2eproto();

  void InitAsDefaultInstance();
  static BINChangeRuleRequest* default_instance_;
};
// -------------------------------------------------------------------

class BINChangeRuleResponse : public ::google::protobuf::Message {
 public:
  BINChangeRuleResponse();
  virtual ~BINChangeRuleResponse();

  BINChangeRuleResponse(const BINChangeRuleResponse& from);

  inline BINChangeRuleResponse& operator=(const BINChangeRuleResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BINChangeRuleResponse& default_instance();

  void Swap(BINChangeRuleResponse* other);

  // implements Message ----------------------------------------------

  BINChangeRuleResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BINChangeRuleResponse& from);
  void MergeFrom(const BINChangeRuleResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bool responseCode = 1;
  inline bool has_responsecode() const;
  inline void clear_responsecode();
  static const int kResponseCodeFieldNumber = 1;
  inline bool responsecode() const;
  inline void set_responsecode(bool value);

  // optional string message = 2;
  inline bool has_message() const;
  inline void clear_message();
  static const int kMessageFieldNumber = 2;
  inline const ::std::string& message() const;
  inline void set_message(const ::std::string& value);
  inline void set_message(const char* value);
  inline void set_message(const char* value, size_t size);
  inline ::std::string* mutable_message();
  inline ::std::string* release_message();
  inline void set_allocated_message(::std::string* message);

  // repeated .BINMapFieldEntry args = 7;
  inline int args_size() const;
  inline void clear_args();
  static const int kArgsFieldNumber = 7;
  inline const ::BINMapFieldEntry& args(int index) const;
  inline ::BINMapFieldEntry* mutable_args(int index);
  inline ::BINMapFieldEntry* add_args();
  inline const ::google::protobuf::RepeatedPtrField< ::BINMapFieldEntry >&
      args() const;
  inline ::google::protobuf::RepeatedPtrField< ::BINMapFieldEntry >*
      mutable_args();

  // @@protoc_insertion_point(class_scope:BINChangeRuleResponse)
 private:
  inline void set_has_responsecode();
  inline void clear_has_responsecode();
  inline void set_has_message();
  inline void clear_has_message();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* message_;
  ::google::protobuf::RepeatedPtrField< ::BINMapFieldEntry > args_;
  bool responsecode_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_change_5frule_2eproto();
  friend void protobuf_AssignDesc_change_5frule_2eproto();
  friend void protobuf_ShutdownFile_change_5frule_2eproto();

  void InitAsDefaultInstance();
  static BINChangeRuleResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// BINChangeRuleRequest

// required int32 roomIndex = 1;
inline bool BINChangeRuleRequest::has_roomindex() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BINChangeRuleRequest::set_has_roomindex() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BINChangeRuleRequest::clear_has_roomindex() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BINChangeRuleRequest::clear_roomindex() {
  roomindex_ = 0;
  clear_has_roomindex();
}
inline ::google::protobuf::int32 BINChangeRuleRequest::roomindex() const {
  return roomindex_;
}
inline void BINChangeRuleRequest::set_roomindex(::google::protobuf::int32 value) {
  set_has_roomindex();
  roomindex_ = value;
}

// repeated .BINMapFieldEntry args = 2;
inline int BINChangeRuleRequest::args_size() const {
  return args_.size();
}
inline void BINChangeRuleRequest::clear_args() {
  args_.Clear();
}
inline const ::BINMapFieldEntry& BINChangeRuleRequest::args(int index) const {
  return args_.Get(index);
}
inline ::BINMapFieldEntry* BINChangeRuleRequest::mutable_args(int index) {
  return args_.Mutable(index);
}
inline ::BINMapFieldEntry* BINChangeRuleRequest::add_args() {
  return args_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::BINMapFieldEntry >&
BINChangeRuleRequest::args() const {
  return args_;
}
inline ::google::protobuf::RepeatedPtrField< ::BINMapFieldEntry >*
BINChangeRuleRequest::mutable_args() {
  return &args_;
}

// -------------------------------------------------------------------

// BINChangeRuleResponse

// required bool responseCode = 1;
inline bool BINChangeRuleResponse::has_responsecode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BINChangeRuleResponse::set_has_responsecode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BINChangeRuleResponse::clear_has_responsecode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BINChangeRuleResponse::clear_responsecode() {
  responsecode_ = false;
  clear_has_responsecode();
}
inline bool BINChangeRuleResponse::responsecode() const {
  return responsecode_;
}
inline void BINChangeRuleResponse::set_responsecode(bool value) {
  set_has_responsecode();
  responsecode_ = value;
}

// optional string message = 2;
inline bool BINChangeRuleResponse::has_message() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BINChangeRuleResponse::set_has_message() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BINChangeRuleResponse::clear_has_message() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BINChangeRuleResponse::clear_message() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    message_->clear();
  }
  clear_has_message();
}
inline const ::std::string& BINChangeRuleResponse::message() const {
  return *message_;
}
inline void BINChangeRuleResponse::set_message(const ::std::string& value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void BINChangeRuleResponse::set_message(const char* value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void BINChangeRuleResponse::set_message(const char* value, size_t size) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BINChangeRuleResponse::mutable_message() {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  return message_;
}
inline ::std::string* BINChangeRuleResponse::release_message() {
  clear_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = message_;
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void BINChangeRuleResponse::set_allocated_message(::std::string* message) {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    delete message_;
  }
  if (message) {
    set_has_message();
    message_ = message;
  } else {
    clear_has_message();
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated .BINMapFieldEntry args = 7;
inline int BINChangeRuleResponse::args_size() const {
  return args_.size();
}
inline void BINChangeRuleResponse::clear_args() {
  args_.Clear();
}
inline const ::BINMapFieldEntry& BINChangeRuleResponse::args(int index) const {
  return args_.Get(index);
}
inline ::BINMapFieldEntry* BINChangeRuleResponse::mutable_args(int index) {
  return args_.Mutable(index);
}
inline ::BINMapFieldEntry* BINChangeRuleResponse::add_args() {
  return args_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::BINMapFieldEntry >&
BINChangeRuleResponse::args() const {
  return args_;
}
inline ::google::protobuf::RepeatedPtrField< ::BINMapFieldEntry >*
BINChangeRuleResponse::mutable_args() {
  return &args_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_change_5frule_2eproto__INCLUDED
