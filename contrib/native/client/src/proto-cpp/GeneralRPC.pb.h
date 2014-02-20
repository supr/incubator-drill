// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GeneralRPC.proto

#ifndef PROTOBUF_GeneralRPC_2eproto__INCLUDED
#define PROTOBUF_GeneralRPC_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "Coordination.pb.h"
// @@protoc_insertion_point(includes)

namespace exec {
namespace rpc {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_GeneralRPC_2eproto();
void protobuf_AssignDesc_GeneralRPC_2eproto();
void protobuf_ShutdownFile_GeneralRPC_2eproto();

class Ack;
class RpcHeader;
class CompleteRpcMessage;
class RpcFailure;

enum RpcMode {
  REQUEST = 0,
  RESPONSE = 1,
  RESPONSE_FAILURE = 2
};
bool RpcMode_IsValid(int value);
const RpcMode RpcMode_MIN = REQUEST;
const RpcMode RpcMode_MAX = RESPONSE_FAILURE;
const int RpcMode_ARRAYSIZE = RpcMode_MAX + 1;

const ::google::protobuf::EnumDescriptor* RpcMode_descriptor();
inline const ::std::string& RpcMode_Name(RpcMode value) {
  return ::google::protobuf::internal::NameOfEnum(
    RpcMode_descriptor(), value);
}
inline bool RpcMode_Parse(
    const ::std::string& name, RpcMode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<RpcMode>(
    RpcMode_descriptor(), name, value);
}
// ===================================================================

class Ack : public ::google::protobuf::Message {
 public:
  Ack();
  virtual ~Ack();

  Ack(const Ack& from);

  inline Ack& operator=(const Ack& from) {
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
  static const Ack& default_instance();

  void Swap(Ack* other);

  // implements Message ----------------------------------------------

  Ack* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Ack& from);
  void MergeFrom(const Ack& from);
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

  // optional bool ok = 1;
  inline bool has_ok() const;
  inline void clear_ok();
  static const int kOkFieldNumber = 1;
  inline bool ok() const;
  inline void set_ok(bool value);

  // @@protoc_insertion_point(class_scope:exec.rpc.Ack)
 private:
  inline void set_has_ok();
  inline void clear_has_ok();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  bool ok_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_GeneralRPC_2eproto();
  friend void protobuf_AssignDesc_GeneralRPC_2eproto();
  friend void protobuf_ShutdownFile_GeneralRPC_2eproto();

  void InitAsDefaultInstance();
  static Ack* default_instance_;
};
// -------------------------------------------------------------------

class RpcHeader : public ::google::protobuf::Message {
 public:
  RpcHeader();
  virtual ~RpcHeader();

  RpcHeader(const RpcHeader& from);

  inline RpcHeader& operator=(const RpcHeader& from) {
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
  static const RpcHeader& default_instance();

  void Swap(RpcHeader* other);

  // implements Message ----------------------------------------------

  RpcHeader* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RpcHeader& from);
  void MergeFrom(const RpcHeader& from);
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

  // optional .exec.rpc.RpcMode mode = 1;
  inline bool has_mode() const;
  inline void clear_mode();
  static const int kModeFieldNumber = 1;
  inline ::exec::rpc::RpcMode mode() const;
  inline void set_mode(::exec::rpc::RpcMode value);

  // optional int32 coordination_id = 2;
  inline bool has_coordination_id() const;
  inline void clear_coordination_id();
  static const int kCoordinationIdFieldNumber = 2;
  inline ::google::protobuf::int32 coordination_id() const;
  inline void set_coordination_id(::google::protobuf::int32 value);

  // optional int32 rpc_type = 3;
  inline bool has_rpc_type() const;
  inline void clear_rpc_type();
  static const int kRpcTypeFieldNumber = 3;
  inline ::google::protobuf::int32 rpc_type() const;
  inline void set_rpc_type(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:exec.rpc.RpcHeader)
 private:
  inline void set_has_mode();
  inline void clear_has_mode();
  inline void set_has_coordination_id();
  inline void clear_has_coordination_id();
  inline void set_has_rpc_type();
  inline void clear_has_rpc_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  int mode_;
  ::google::protobuf::int32 coordination_id_;
  ::google::protobuf::int32 rpc_type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_GeneralRPC_2eproto();
  friend void protobuf_AssignDesc_GeneralRPC_2eproto();
  friend void protobuf_ShutdownFile_GeneralRPC_2eproto();

  void InitAsDefaultInstance();
  static RpcHeader* default_instance_;
};
// -------------------------------------------------------------------

class CompleteRpcMessage : public ::google::protobuf::Message {
 public:
  CompleteRpcMessage();
  virtual ~CompleteRpcMessage();

  CompleteRpcMessage(const CompleteRpcMessage& from);

  inline CompleteRpcMessage& operator=(const CompleteRpcMessage& from) {
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
  static const CompleteRpcMessage& default_instance();

  void Swap(CompleteRpcMessage* other);

  // implements Message ----------------------------------------------

  CompleteRpcMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CompleteRpcMessage& from);
  void MergeFrom(const CompleteRpcMessage& from);
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

  // optional .exec.rpc.RpcHeader header = 1;
  inline bool has_header() const;
  inline void clear_header();
  static const int kHeaderFieldNumber = 1;
  inline const ::exec::rpc::RpcHeader& header() const;
  inline ::exec::rpc::RpcHeader* mutable_header();
  inline ::exec::rpc::RpcHeader* release_header();
  inline void set_allocated_header(::exec::rpc::RpcHeader* header);

  // optional bytes protobuf_body = 2;
  inline bool has_protobuf_body() const;
  inline void clear_protobuf_body();
  static const int kProtobufBodyFieldNumber = 2;
  inline const ::std::string& protobuf_body() const;
  inline void set_protobuf_body(const ::std::string& value);
  inline void set_protobuf_body(const char* value);
  inline void set_protobuf_body(const void* value, size_t size);
  inline ::std::string* mutable_protobuf_body();
  inline ::std::string* release_protobuf_body();
  inline void set_allocated_protobuf_body(::std::string* protobuf_body);

  // optional bytes raw_body = 3;
  inline bool has_raw_body() const;
  inline void clear_raw_body();
  static const int kRawBodyFieldNumber = 3;
  inline const ::std::string& raw_body() const;
  inline void set_raw_body(const ::std::string& value);
  inline void set_raw_body(const char* value);
  inline void set_raw_body(const void* value, size_t size);
  inline ::std::string* mutable_raw_body();
  inline ::std::string* release_raw_body();
  inline void set_allocated_raw_body(::std::string* raw_body);

  // @@protoc_insertion_point(class_scope:exec.rpc.CompleteRpcMessage)
 private:
  inline void set_has_header();
  inline void clear_has_header();
  inline void set_has_protobuf_body();
  inline void clear_has_protobuf_body();
  inline void set_has_raw_body();
  inline void clear_has_raw_body();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::exec::rpc::RpcHeader* header_;
  ::std::string* protobuf_body_;
  ::std::string* raw_body_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_GeneralRPC_2eproto();
  friend void protobuf_AssignDesc_GeneralRPC_2eproto();
  friend void protobuf_ShutdownFile_GeneralRPC_2eproto();

  void InitAsDefaultInstance();
  static CompleteRpcMessage* default_instance_;
};
// -------------------------------------------------------------------

class RpcFailure : public ::google::protobuf::Message {
 public:
  RpcFailure();
  virtual ~RpcFailure();

  RpcFailure(const RpcFailure& from);

  inline RpcFailure& operator=(const RpcFailure& from) {
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
  static const RpcFailure& default_instance();

  void Swap(RpcFailure* other);

  // implements Message ----------------------------------------------

  RpcFailure* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RpcFailure& from);
  void MergeFrom(const RpcFailure& from);
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

  // optional int64 error_id = 1;
  inline bool has_error_id() const;
  inline void clear_error_id();
  static const int kErrorIdFieldNumber = 1;
  inline ::google::protobuf::int64 error_id() const;
  inline void set_error_id(::google::protobuf::int64 value);

  // optional int32 error_code = 2;
  inline bool has_error_code() const;
  inline void clear_error_code();
  static const int kErrorCodeFieldNumber = 2;
  inline ::google::protobuf::int32 error_code() const;
  inline void set_error_code(::google::protobuf::int32 value);

  // optional string short_error = 3;
  inline bool has_short_error() const;
  inline void clear_short_error();
  static const int kShortErrorFieldNumber = 3;
  inline const ::std::string& short_error() const;
  inline void set_short_error(const ::std::string& value);
  inline void set_short_error(const char* value);
  inline void set_short_error(const char* value, size_t size);
  inline ::std::string* mutable_short_error();
  inline ::std::string* release_short_error();
  inline void set_allocated_short_error(::std::string* short_error);

  // optional string long_error = 4;
  inline bool has_long_error() const;
  inline void clear_long_error();
  static const int kLongErrorFieldNumber = 4;
  inline const ::std::string& long_error() const;
  inline void set_long_error(const ::std::string& value);
  inline void set_long_error(const char* value);
  inline void set_long_error(const char* value, size_t size);
  inline ::std::string* mutable_long_error();
  inline ::std::string* release_long_error();
  inline void set_allocated_long_error(::std::string* long_error);

  // @@protoc_insertion_point(class_scope:exec.rpc.RpcFailure)
 private:
  inline void set_has_error_id();
  inline void clear_has_error_id();
  inline void set_has_error_code();
  inline void clear_has_error_code();
  inline void set_has_short_error();
  inline void clear_has_short_error();
  inline void set_has_long_error();
  inline void clear_has_long_error();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 error_id_;
  ::std::string* short_error_;
  ::std::string* long_error_;
  ::google::protobuf::int32 error_code_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_GeneralRPC_2eproto();
  friend void protobuf_AssignDesc_GeneralRPC_2eproto();
  friend void protobuf_ShutdownFile_GeneralRPC_2eproto();

  void InitAsDefaultInstance();
  static RpcFailure* default_instance_;
};
// ===================================================================


// ===================================================================

// Ack

// optional bool ok = 1;
inline bool Ack::has_ok() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Ack::set_has_ok() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Ack::clear_has_ok() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Ack::clear_ok() {
  ok_ = false;
  clear_has_ok();
}
inline bool Ack::ok() const {
  return ok_;
}
inline void Ack::set_ok(bool value) {
  set_has_ok();
  ok_ = value;
}

// -------------------------------------------------------------------

// RpcHeader

// optional .exec.rpc.RpcMode mode = 1;
inline bool RpcHeader::has_mode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RpcHeader::set_has_mode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RpcHeader::clear_has_mode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RpcHeader::clear_mode() {
  mode_ = 0;
  clear_has_mode();
}
inline ::exec::rpc::RpcMode RpcHeader::mode() const {
  return static_cast< ::exec::rpc::RpcMode >(mode_);
}
inline void RpcHeader::set_mode(::exec::rpc::RpcMode value) {
  assert(::exec::rpc::RpcMode_IsValid(value));
  set_has_mode();
  mode_ = value;
}

// optional int32 coordination_id = 2;
inline bool RpcHeader::has_coordination_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RpcHeader::set_has_coordination_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RpcHeader::clear_has_coordination_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RpcHeader::clear_coordination_id() {
  coordination_id_ = 0;
  clear_has_coordination_id();
}
inline ::google::protobuf::int32 RpcHeader::coordination_id() const {
  return coordination_id_;
}
inline void RpcHeader::set_coordination_id(::google::protobuf::int32 value) {
  set_has_coordination_id();
  coordination_id_ = value;
}

// optional int32 rpc_type = 3;
inline bool RpcHeader::has_rpc_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RpcHeader::set_has_rpc_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RpcHeader::clear_has_rpc_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RpcHeader::clear_rpc_type() {
  rpc_type_ = 0;
  clear_has_rpc_type();
}
inline ::google::protobuf::int32 RpcHeader::rpc_type() const {
  return rpc_type_;
}
inline void RpcHeader::set_rpc_type(::google::protobuf::int32 value) {
  set_has_rpc_type();
  rpc_type_ = value;
}

// -------------------------------------------------------------------

// CompleteRpcMessage

// optional .exec.rpc.RpcHeader header = 1;
inline bool CompleteRpcMessage::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CompleteRpcMessage::set_has_header() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CompleteRpcMessage::clear_has_header() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CompleteRpcMessage::clear_header() {
  if (header_ != NULL) header_->::exec::rpc::RpcHeader::Clear();
  clear_has_header();
}
inline const ::exec::rpc::RpcHeader& CompleteRpcMessage::header() const {
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
inline ::exec::rpc::RpcHeader* CompleteRpcMessage::mutable_header() {
  set_has_header();
  if (header_ == NULL) header_ = new ::exec::rpc::RpcHeader;
  return header_;
}
inline ::exec::rpc::RpcHeader* CompleteRpcMessage::release_header() {
  clear_has_header();
  ::exec::rpc::RpcHeader* temp = header_;
  header_ = NULL;
  return temp;
}
inline void CompleteRpcMessage::set_allocated_header(::exec::rpc::RpcHeader* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
}

// optional bytes protobuf_body = 2;
inline bool CompleteRpcMessage::has_protobuf_body() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CompleteRpcMessage::set_has_protobuf_body() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CompleteRpcMessage::clear_has_protobuf_body() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CompleteRpcMessage::clear_protobuf_body() {
  if (protobuf_body_ != &::google::protobuf::internal::kEmptyString) {
    protobuf_body_->clear();
  }
  clear_has_protobuf_body();
}
inline const ::std::string& CompleteRpcMessage::protobuf_body() const {
  return *protobuf_body_;
}
inline void CompleteRpcMessage::set_protobuf_body(const ::std::string& value) {
  set_has_protobuf_body();
  if (protobuf_body_ == &::google::protobuf::internal::kEmptyString) {
    protobuf_body_ = new ::std::string;
  }
  protobuf_body_->assign(value);
}
inline void CompleteRpcMessage::set_protobuf_body(const char* value) {
  set_has_protobuf_body();
  if (protobuf_body_ == &::google::protobuf::internal::kEmptyString) {
    protobuf_body_ = new ::std::string;
  }
  protobuf_body_->assign(value);
}
inline void CompleteRpcMessage::set_protobuf_body(const void* value, size_t size) {
  set_has_protobuf_body();
  if (protobuf_body_ == &::google::protobuf::internal::kEmptyString) {
    protobuf_body_ = new ::std::string;
  }
  protobuf_body_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CompleteRpcMessage::mutable_protobuf_body() {
  set_has_protobuf_body();
  if (protobuf_body_ == &::google::protobuf::internal::kEmptyString) {
    protobuf_body_ = new ::std::string;
  }
  return protobuf_body_;
}
inline ::std::string* CompleteRpcMessage::release_protobuf_body() {
  clear_has_protobuf_body();
  if (protobuf_body_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = protobuf_body_;
    protobuf_body_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CompleteRpcMessage::set_allocated_protobuf_body(::std::string* protobuf_body) {
  if (protobuf_body_ != &::google::protobuf::internal::kEmptyString) {
    delete protobuf_body_;
  }
  if (protobuf_body) {
    set_has_protobuf_body();
    protobuf_body_ = protobuf_body;
  } else {
    clear_has_protobuf_body();
    protobuf_body_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional bytes raw_body = 3;
inline bool CompleteRpcMessage::has_raw_body() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CompleteRpcMessage::set_has_raw_body() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CompleteRpcMessage::clear_has_raw_body() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CompleteRpcMessage::clear_raw_body() {
  if (raw_body_ != &::google::protobuf::internal::kEmptyString) {
    raw_body_->clear();
  }
  clear_has_raw_body();
}
inline const ::std::string& CompleteRpcMessage::raw_body() const {
  return *raw_body_;
}
inline void CompleteRpcMessage::set_raw_body(const ::std::string& value) {
  set_has_raw_body();
  if (raw_body_ == &::google::protobuf::internal::kEmptyString) {
    raw_body_ = new ::std::string;
  }
  raw_body_->assign(value);
}
inline void CompleteRpcMessage::set_raw_body(const char* value) {
  set_has_raw_body();
  if (raw_body_ == &::google::protobuf::internal::kEmptyString) {
    raw_body_ = new ::std::string;
  }
  raw_body_->assign(value);
}
inline void CompleteRpcMessage::set_raw_body(const void* value, size_t size) {
  set_has_raw_body();
  if (raw_body_ == &::google::protobuf::internal::kEmptyString) {
    raw_body_ = new ::std::string;
  }
  raw_body_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CompleteRpcMessage::mutable_raw_body() {
  set_has_raw_body();
  if (raw_body_ == &::google::protobuf::internal::kEmptyString) {
    raw_body_ = new ::std::string;
  }
  return raw_body_;
}
inline ::std::string* CompleteRpcMessage::release_raw_body() {
  clear_has_raw_body();
  if (raw_body_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = raw_body_;
    raw_body_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CompleteRpcMessage::set_allocated_raw_body(::std::string* raw_body) {
  if (raw_body_ != &::google::protobuf::internal::kEmptyString) {
    delete raw_body_;
  }
  if (raw_body) {
    set_has_raw_body();
    raw_body_ = raw_body;
  } else {
    clear_has_raw_body();
    raw_body_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// RpcFailure

// optional int64 error_id = 1;
inline bool RpcFailure::has_error_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RpcFailure::set_has_error_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RpcFailure::clear_has_error_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RpcFailure::clear_error_id() {
  error_id_ = GOOGLE_LONGLONG(0);
  clear_has_error_id();
}
inline ::google::protobuf::int64 RpcFailure::error_id() const {
  return error_id_;
}
inline void RpcFailure::set_error_id(::google::protobuf::int64 value) {
  set_has_error_id();
  error_id_ = value;
}

// optional int32 error_code = 2;
inline bool RpcFailure::has_error_code() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RpcFailure::set_has_error_code() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RpcFailure::clear_has_error_code() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RpcFailure::clear_error_code() {
  error_code_ = 0;
  clear_has_error_code();
}
inline ::google::protobuf::int32 RpcFailure::error_code() const {
  return error_code_;
}
inline void RpcFailure::set_error_code(::google::protobuf::int32 value) {
  set_has_error_code();
  error_code_ = value;
}

// optional string short_error = 3;
inline bool RpcFailure::has_short_error() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RpcFailure::set_has_short_error() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RpcFailure::clear_has_short_error() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RpcFailure::clear_short_error() {
  if (short_error_ != &::google::protobuf::internal::kEmptyString) {
    short_error_->clear();
  }
  clear_has_short_error();
}
inline const ::std::string& RpcFailure::short_error() const {
  return *short_error_;
}
inline void RpcFailure::set_short_error(const ::std::string& value) {
  set_has_short_error();
  if (short_error_ == &::google::protobuf::internal::kEmptyString) {
    short_error_ = new ::std::string;
  }
  short_error_->assign(value);
}
inline void RpcFailure::set_short_error(const char* value) {
  set_has_short_error();
  if (short_error_ == &::google::protobuf::internal::kEmptyString) {
    short_error_ = new ::std::string;
  }
  short_error_->assign(value);
}
inline void RpcFailure::set_short_error(const char* value, size_t size) {
  set_has_short_error();
  if (short_error_ == &::google::protobuf::internal::kEmptyString) {
    short_error_ = new ::std::string;
  }
  short_error_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RpcFailure::mutable_short_error() {
  set_has_short_error();
  if (short_error_ == &::google::protobuf::internal::kEmptyString) {
    short_error_ = new ::std::string;
  }
  return short_error_;
}
inline ::std::string* RpcFailure::release_short_error() {
  clear_has_short_error();
  if (short_error_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = short_error_;
    short_error_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void RpcFailure::set_allocated_short_error(::std::string* short_error) {
  if (short_error_ != &::google::protobuf::internal::kEmptyString) {
    delete short_error_;
  }
  if (short_error) {
    set_has_short_error();
    short_error_ = short_error;
  } else {
    clear_has_short_error();
    short_error_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string long_error = 4;
inline bool RpcFailure::has_long_error() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RpcFailure::set_has_long_error() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RpcFailure::clear_has_long_error() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void RpcFailure::clear_long_error() {
  if (long_error_ != &::google::protobuf::internal::kEmptyString) {
    long_error_->clear();
  }
  clear_has_long_error();
}
inline const ::std::string& RpcFailure::long_error() const {
  return *long_error_;
}
inline void RpcFailure::set_long_error(const ::std::string& value) {
  set_has_long_error();
  if (long_error_ == &::google::protobuf::internal::kEmptyString) {
    long_error_ = new ::std::string;
  }
  long_error_->assign(value);
}
inline void RpcFailure::set_long_error(const char* value) {
  set_has_long_error();
  if (long_error_ == &::google::protobuf::internal::kEmptyString) {
    long_error_ = new ::std::string;
  }
  long_error_->assign(value);
}
inline void RpcFailure::set_long_error(const char* value, size_t size) {
  set_has_long_error();
  if (long_error_ == &::google::protobuf::internal::kEmptyString) {
    long_error_ = new ::std::string;
  }
  long_error_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RpcFailure::mutable_long_error() {
  set_has_long_error();
  if (long_error_ == &::google::protobuf::internal::kEmptyString) {
    long_error_ = new ::std::string;
  }
  return long_error_;
}
inline ::std::string* RpcFailure::release_long_error() {
  clear_has_long_error();
  if (long_error_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = long_error_;
    long_error_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void RpcFailure::set_allocated_long_error(::std::string* long_error) {
  if (long_error_ != &::google::protobuf::internal::kEmptyString) {
    delete long_error_;
  }
  if (long_error) {
    set_has_long_error();
    long_error_ = long_error;
  } else {
    clear_has_long_error();
    long_error_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace rpc
}  // namespace exec

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::exec::rpc::RpcMode>() {
  return ::exec::rpc::RpcMode_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_GeneralRPC_2eproto__INCLUDED
