// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: register.proto

#ifndef PROTOBUF_register_2eproto__INCLUDED
#define PROTOBUF_register_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_register_2eproto();
void protobuf_AssignDesc_register_2eproto();
void protobuf_ShutdownFile_register_2eproto();

class BINRegisterRequest;
class BINRegisterResponse;

// ===================================================================

class BINRegisterRequest : public ::google::protobuf::Message {
 public:
  BINRegisterRequest();
  virtual ~BINRegisterRequest();

  BINRegisterRequest(const BINRegisterRequest& from);

  inline BINRegisterRequest& operator=(const BINRegisterRequest& from) {
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
  static const BINRegisterRequest& default_instance();

  void Swap(BINRegisterRequest* other);

  // implements Message ----------------------------------------------

  BINRegisterRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BINRegisterRequest& from);
  void MergeFrom(const BINRegisterRequest& from);
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

  // required string userName = 1;
  inline bool has_username() const;
  inline void clear_username();
  static const int kUserNameFieldNumber = 1;
  inline const ::std::string& username() const;
  inline void set_username(const ::std::string& value);
  inline void set_username(const char* value);
  inline void set_username(const char* value, size_t size);
  inline ::std::string* mutable_username();
  inline ::std::string* release_username();
  inline void set_allocated_username(::std::string* username);

  // required string password = 2;
  inline bool has_password() const;
  inline void clear_password();
  static const int kPasswordFieldNumber = 2;
  inline const ::std::string& password() const;
  inline void set_password(const ::std::string& value);
  inline void set_password(const char* value);
  inline void set_password(const char* value, size_t size);
  inline ::std::string* mutable_password();
  inline ::std::string* release_password();
  inline void set_allocated_password(::std::string* password);

  // required string confirmPassword = 3;
  inline bool has_confirmpassword() const;
  inline void clear_confirmpassword();
  static const int kConfirmPasswordFieldNumber = 3;
  inline const ::std::string& confirmpassword() const;
  inline void set_confirmpassword(const ::std::string& value);
  inline void set_confirmpassword(const char* value);
  inline void set_confirmpassword(const char* value, size_t size);
  inline ::std::string* mutable_confirmpassword();
  inline ::std::string* release_confirmpassword();
  inline void set_allocated_confirmpassword(::std::string* confirmpassword);

  // optional string displayName = 4;
  inline bool has_displayname() const;
  inline void clear_displayname();
  static const int kDisplayNameFieldNumber = 4;
  inline const ::std::string& displayname() const;
  inline void set_displayname(const ::std::string& value);
  inline void set_displayname(const char* value);
  inline void set_displayname(const char* value, size_t size);
  inline ::std::string* mutable_displayname();
  inline ::std::string* release_displayname();
  inline void set_allocated_displayname(::std::string* displayname);

  // optional string mobile = 5;
  inline bool has_mobile() const;
  inline void clear_mobile();
  static const int kMobileFieldNumber = 5;
  inline const ::std::string& mobile() const;
  inline void set_mobile(const ::std::string& value);
  inline void set_mobile(const char* value);
  inline void set_mobile(const char* value, size_t size);
  inline ::std::string* mutable_mobile();
  inline ::std::string* release_mobile();
  inline void set_allocated_mobile(::std::string* mobile);

  // @@protoc_insertion_point(class_scope:BINRegisterRequest)
 private:
  inline void set_has_username();
  inline void clear_has_username();
  inline void set_has_password();
  inline void clear_has_password();
  inline void set_has_confirmpassword();
  inline void clear_has_confirmpassword();
  inline void set_has_displayname();
  inline void clear_has_displayname();
  inline void set_has_mobile();
  inline void clear_has_mobile();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* username_;
  ::std::string* password_;
  ::std::string* confirmpassword_;
  ::std::string* displayname_;
  ::std::string* mobile_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_register_2eproto();
  friend void protobuf_AssignDesc_register_2eproto();
  friend void protobuf_ShutdownFile_register_2eproto();

  void InitAsDefaultInstance();
  static BINRegisterRequest* default_instance_;
};
// -------------------------------------------------------------------

class BINRegisterResponse : public ::google::protobuf::Message {
 public:
  BINRegisterResponse();
  virtual ~BINRegisterResponse();

  BINRegisterResponse(const BINRegisterResponse& from);

  inline BINRegisterResponse& operator=(const BINRegisterResponse& from) {
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
  static const BINRegisterResponse& default_instance();

  void Swap(BINRegisterResponse* other);

  // implements Message ----------------------------------------------

  BINRegisterResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BINRegisterResponse& from);
  void MergeFrom(const BINRegisterResponse& from);
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

  // @@protoc_insertion_point(class_scope:BINRegisterResponse)
 private:
  inline void set_has_responsecode();
  inline void clear_has_responsecode();
  inline void set_has_message();
  inline void clear_has_message();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* message_;
  bool responsecode_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_register_2eproto();
  friend void protobuf_AssignDesc_register_2eproto();
  friend void protobuf_ShutdownFile_register_2eproto();

  void InitAsDefaultInstance();
  static BINRegisterResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// BINRegisterRequest

// required string userName = 1;
inline bool BINRegisterRequest::has_username() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BINRegisterRequest::set_has_username() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BINRegisterRequest::clear_has_username() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BINRegisterRequest::clear_username() {
  if (username_ != &::google::protobuf::internal::kEmptyString) {
    username_->clear();
  }
  clear_has_username();
}
inline const ::std::string& BINRegisterRequest::username() const {
  return *username_;
}
inline void BINRegisterRequest::set_username(const ::std::string& value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  username_->assign(value);
}
inline void BINRegisterRequest::set_username(const char* value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  username_->assign(value);
}
inline void BINRegisterRequest::set_username(const char* value, size_t size) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  username_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BINRegisterRequest::mutable_username() {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  return username_;
}
inline ::std::string* BINRegisterRequest::release_username() {
  clear_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = username_;
    username_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void BINRegisterRequest::set_allocated_username(::std::string* username) {
  if (username_ != &::google::protobuf::internal::kEmptyString) {
    delete username_;
  }
  if (username) {
    set_has_username();
    username_ = username;
  } else {
    clear_has_username();
    username_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string password = 2;
inline bool BINRegisterRequest::has_password() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BINRegisterRequest::set_has_password() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BINRegisterRequest::clear_has_password() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BINRegisterRequest::clear_password() {
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    password_->clear();
  }
  clear_has_password();
}
inline const ::std::string& BINRegisterRequest::password() const {
  return *password_;
}
inline void BINRegisterRequest::set_password(const ::std::string& value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(value);
}
inline void BINRegisterRequest::set_password(const char* value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(value);
}
inline void BINRegisterRequest::set_password(const char* value, size_t size) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BINRegisterRequest::mutable_password() {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  return password_;
}
inline ::std::string* BINRegisterRequest::release_password() {
  clear_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = password_;
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void BINRegisterRequest::set_allocated_password(::std::string* password) {
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    delete password_;
  }
  if (password) {
    set_has_password();
    password_ = password;
  } else {
    clear_has_password();
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string confirmPassword = 3;
inline bool BINRegisterRequest::has_confirmpassword() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BINRegisterRequest::set_has_confirmpassword() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BINRegisterRequest::clear_has_confirmpassword() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BINRegisterRequest::clear_confirmpassword() {
  if (confirmpassword_ != &::google::protobuf::internal::kEmptyString) {
    confirmpassword_->clear();
  }
  clear_has_confirmpassword();
}
inline const ::std::string& BINRegisterRequest::confirmpassword() const {
  return *confirmpassword_;
}
inline void BINRegisterRequest::set_confirmpassword(const ::std::string& value) {
  set_has_confirmpassword();
  if (confirmpassword_ == &::google::protobuf::internal::kEmptyString) {
    confirmpassword_ = new ::std::string;
  }
  confirmpassword_->assign(value);
}
inline void BINRegisterRequest::set_confirmpassword(const char* value) {
  set_has_confirmpassword();
  if (confirmpassword_ == &::google::protobuf::internal::kEmptyString) {
    confirmpassword_ = new ::std::string;
  }
  confirmpassword_->assign(value);
}
inline void BINRegisterRequest::set_confirmpassword(const char* value, size_t size) {
  set_has_confirmpassword();
  if (confirmpassword_ == &::google::protobuf::internal::kEmptyString) {
    confirmpassword_ = new ::std::string;
  }
  confirmpassword_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BINRegisterRequest::mutable_confirmpassword() {
  set_has_confirmpassword();
  if (confirmpassword_ == &::google::protobuf::internal::kEmptyString) {
    confirmpassword_ = new ::std::string;
  }
  return confirmpassword_;
}
inline ::std::string* BINRegisterRequest::release_confirmpassword() {
  clear_has_confirmpassword();
  if (confirmpassword_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = confirmpassword_;
    confirmpassword_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void BINRegisterRequest::set_allocated_confirmpassword(::std::string* confirmpassword) {
  if (confirmpassword_ != &::google::protobuf::internal::kEmptyString) {
    delete confirmpassword_;
  }
  if (confirmpassword) {
    set_has_confirmpassword();
    confirmpassword_ = confirmpassword;
  } else {
    clear_has_confirmpassword();
    confirmpassword_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string displayName = 4;
inline bool BINRegisterRequest::has_displayname() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void BINRegisterRequest::set_has_displayname() {
  _has_bits_[0] |= 0x00000008u;
}
inline void BINRegisterRequest::clear_has_displayname() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void BINRegisterRequest::clear_displayname() {
  if (displayname_ != &::google::protobuf::internal::kEmptyString) {
    displayname_->clear();
  }
  clear_has_displayname();
}
inline const ::std::string& BINRegisterRequest::displayname() const {
  return *displayname_;
}
inline void BINRegisterRequest::set_displayname(const ::std::string& value) {
  set_has_displayname();
  if (displayname_ == &::google::protobuf::internal::kEmptyString) {
    displayname_ = new ::std::string;
  }
  displayname_->assign(value);
}
inline void BINRegisterRequest::set_displayname(const char* value) {
  set_has_displayname();
  if (displayname_ == &::google::protobuf::internal::kEmptyString) {
    displayname_ = new ::std::string;
  }
  displayname_->assign(value);
}
inline void BINRegisterRequest::set_displayname(const char* value, size_t size) {
  set_has_displayname();
  if (displayname_ == &::google::protobuf::internal::kEmptyString) {
    displayname_ = new ::std::string;
  }
  displayname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BINRegisterRequest::mutable_displayname() {
  set_has_displayname();
  if (displayname_ == &::google::protobuf::internal::kEmptyString) {
    displayname_ = new ::std::string;
  }
  return displayname_;
}
inline ::std::string* BINRegisterRequest::release_displayname() {
  clear_has_displayname();
  if (displayname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = displayname_;
    displayname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void BINRegisterRequest::set_allocated_displayname(::std::string* displayname) {
  if (displayname_ != &::google::protobuf::internal::kEmptyString) {
    delete displayname_;
  }
  if (displayname) {
    set_has_displayname();
    displayname_ = displayname;
  } else {
    clear_has_displayname();
    displayname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string mobile = 5;
inline bool BINRegisterRequest::has_mobile() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void BINRegisterRequest::set_has_mobile() {
  _has_bits_[0] |= 0x00000010u;
}
inline void BINRegisterRequest::clear_has_mobile() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void BINRegisterRequest::clear_mobile() {
  if (mobile_ != &::google::protobuf::internal::kEmptyString) {
    mobile_->clear();
  }
  clear_has_mobile();
}
inline const ::std::string& BINRegisterRequest::mobile() const {
  return *mobile_;
}
inline void BINRegisterRequest::set_mobile(const ::std::string& value) {
  set_has_mobile();
  if (mobile_ == &::google::protobuf::internal::kEmptyString) {
    mobile_ = new ::std::string;
  }
  mobile_->assign(value);
}
inline void BINRegisterRequest::set_mobile(const char* value) {
  set_has_mobile();
  if (mobile_ == &::google::protobuf::internal::kEmptyString) {
    mobile_ = new ::std::string;
  }
  mobile_->assign(value);
}
inline void BINRegisterRequest::set_mobile(const char* value, size_t size) {
  set_has_mobile();
  if (mobile_ == &::google::protobuf::internal::kEmptyString) {
    mobile_ = new ::std::string;
  }
  mobile_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BINRegisterRequest::mutable_mobile() {
  set_has_mobile();
  if (mobile_ == &::google::protobuf::internal::kEmptyString) {
    mobile_ = new ::std::string;
  }
  return mobile_;
}
inline ::std::string* BINRegisterRequest::release_mobile() {
  clear_has_mobile();
  if (mobile_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = mobile_;
    mobile_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void BINRegisterRequest::set_allocated_mobile(::std::string* mobile) {
  if (mobile_ != &::google::protobuf::internal::kEmptyString) {
    delete mobile_;
  }
  if (mobile) {
    set_has_mobile();
    mobile_ = mobile;
  } else {
    clear_has_mobile();
    mobile_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// BINRegisterResponse

// required bool responseCode = 1;
inline bool BINRegisterResponse::has_responsecode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BINRegisterResponse::set_has_responsecode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BINRegisterResponse::clear_has_responsecode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BINRegisterResponse::clear_responsecode() {
  responsecode_ = false;
  clear_has_responsecode();
}
inline bool BINRegisterResponse::responsecode() const {
  return responsecode_;
}
inline void BINRegisterResponse::set_responsecode(bool value) {
  set_has_responsecode();
  responsecode_ = value;
}

// optional string message = 2;
inline bool BINRegisterResponse::has_message() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BINRegisterResponse::set_has_message() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BINRegisterResponse::clear_has_message() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BINRegisterResponse::clear_message() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    message_->clear();
  }
  clear_has_message();
}
inline const ::std::string& BINRegisterResponse::message() const {
  return *message_;
}
inline void BINRegisterResponse::set_message(const ::std::string& value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void BINRegisterResponse::set_message(const char* value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void BINRegisterResponse::set_message(const char* value, size_t size) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BINRegisterResponse::mutable_message() {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  return message_;
}
inline ::std::string* BINRegisterResponse::release_message() {
  clear_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = message_;
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void BINRegisterResponse::set_allocated_message(::std::string* message) {
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


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_register_2eproto__INCLUDED
