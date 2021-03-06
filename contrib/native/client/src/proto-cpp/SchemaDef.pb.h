// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SchemaDef.proto

#ifndef PROTOBUF_SchemaDef_2eproto__INCLUDED
#define PROTOBUF_SchemaDef_2eproto__INCLUDED

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
#include "Types.pb.h"
// @@protoc_insertion_point(includes)

namespace exec {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_SchemaDef_2eproto();
void protobuf_AssignDesc_SchemaDef_2eproto();
void protobuf_ShutdownFile_SchemaDef_2eproto();

class NamePart;
class FieldDef;

enum NamePart_Type {
  NamePart_Type_NAME = 0,
  NamePart_Type_ARRAY = 1
};
bool NamePart_Type_IsValid(int value);
const NamePart_Type NamePart_Type_Type_MIN = NamePart_Type_NAME;
const NamePart_Type NamePart_Type_Type_MAX = NamePart_Type_ARRAY;
const int NamePart_Type_Type_ARRAYSIZE = NamePart_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* NamePart_Type_descriptor();
inline const ::std::string& NamePart_Type_Name(NamePart_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    NamePart_Type_descriptor(), value);
}
inline bool NamePart_Type_Parse(
    const ::std::string& name, NamePart_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<NamePart_Type>(
    NamePart_Type_descriptor(), name, value);
}
enum ValueMode {
  VALUE_VECTOR = 0,
  RLE = 1,
  DICT = 2
};
bool ValueMode_IsValid(int value);
const ValueMode ValueMode_MIN = VALUE_VECTOR;
const ValueMode ValueMode_MAX = DICT;
const int ValueMode_ARRAYSIZE = ValueMode_MAX + 1;

const ::google::protobuf::EnumDescriptor* ValueMode_descriptor();
inline const ::std::string& ValueMode_Name(ValueMode value) {
  return ::google::protobuf::internal::NameOfEnum(
    ValueMode_descriptor(), value);
}
inline bool ValueMode_Parse(
    const ::std::string& name, ValueMode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ValueMode>(
    ValueMode_descriptor(), name, value);
}
// ===================================================================

class NamePart : public ::google::protobuf::Message {
 public:
  NamePart();
  virtual ~NamePart();

  NamePart(const NamePart& from);

  inline NamePart& operator=(const NamePart& from) {
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
  static const NamePart& default_instance();

  void Swap(NamePart* other);

  // implements Message ----------------------------------------------

  NamePart* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const NamePart& from);
  void MergeFrom(const NamePart& from);
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

  typedef NamePart_Type Type;
  static const Type NAME = NamePart_Type_NAME;
  static const Type ARRAY = NamePart_Type_ARRAY;
  static inline bool Type_IsValid(int value) {
    return NamePart_Type_IsValid(value);
  }
  static const Type Type_MIN =
    NamePart_Type_Type_MIN;
  static const Type Type_MAX =
    NamePart_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    NamePart_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return NamePart_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return NamePart_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return NamePart_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .exec.NamePart.Type type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::exec::NamePart_Type type() const;
  inline void set_type(::exec::NamePart_Type value);

  // optional string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:exec.NamePart)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_name();
  inline void clear_has_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  int type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_SchemaDef_2eproto();
  friend void protobuf_AssignDesc_SchemaDef_2eproto();
  friend void protobuf_ShutdownFile_SchemaDef_2eproto();

  void InitAsDefaultInstance();
  static NamePart* default_instance_;
};
// -------------------------------------------------------------------

class FieldDef : public ::google::protobuf::Message {
 public:
  FieldDef();
  virtual ~FieldDef();

  FieldDef(const FieldDef& from);

  inline FieldDef& operator=(const FieldDef& from) {
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
  static const FieldDef& default_instance();

  void Swap(FieldDef* other);

  // implements Message ----------------------------------------------

  FieldDef* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FieldDef& from);
  void MergeFrom(const FieldDef& from);
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

  // repeated .exec.NamePart name = 1;
  inline int name_size() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::exec::NamePart& name(int index) const;
  inline ::exec::NamePart* mutable_name(int index);
  inline ::exec::NamePart* add_name();
  inline const ::google::protobuf::RepeatedPtrField< ::exec::NamePart >&
      name() const;
  inline ::google::protobuf::RepeatedPtrField< ::exec::NamePart >*
      mutable_name();

  // optional .common.MajorType major_type = 2;
  inline bool has_major_type() const;
  inline void clear_major_type();
  static const int kMajorTypeFieldNumber = 2;
  inline const ::common::MajorType& major_type() const;
  inline ::common::MajorType* mutable_major_type();
  inline ::common::MajorType* release_major_type();
  inline void set_allocated_major_type(::common::MajorType* major_type);

  // @@protoc_insertion_point(class_scope:exec.FieldDef)
 private:
  inline void set_has_major_type();
  inline void clear_has_major_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::exec::NamePart > name_;
  ::common::MajorType* major_type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_SchemaDef_2eproto();
  friend void protobuf_AssignDesc_SchemaDef_2eproto();
  friend void protobuf_ShutdownFile_SchemaDef_2eproto();

  void InitAsDefaultInstance();
  static FieldDef* default_instance_;
};
// ===================================================================


// ===================================================================

// NamePart

// optional .exec.NamePart.Type type = 1;
inline bool NamePart::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NamePart::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NamePart::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NamePart::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::exec::NamePart_Type NamePart::type() const {
  return static_cast< ::exec::NamePart_Type >(type_);
}
inline void NamePart::set_type(::exec::NamePart_Type value) {
  assert(::exec::NamePart_Type_IsValid(value));
  set_has_type();
  type_ = value;
}

// optional string name = 2;
inline bool NamePart::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NamePart::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NamePart::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NamePart::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& NamePart::name() const {
  return *name_;
}
inline void NamePart::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void NamePart::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void NamePart::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* NamePart::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* NamePart::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void NamePart::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// FieldDef

// repeated .exec.NamePart name = 1;
inline int FieldDef::name_size() const {
  return name_.size();
}
inline void FieldDef::clear_name() {
  name_.Clear();
}
inline const ::exec::NamePart& FieldDef::name(int index) const {
  return name_.Get(index);
}
inline ::exec::NamePart* FieldDef::mutable_name(int index) {
  return name_.Mutable(index);
}
inline ::exec::NamePart* FieldDef::add_name() {
  return name_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::exec::NamePart >&
FieldDef::name() const {
  return name_;
}
inline ::google::protobuf::RepeatedPtrField< ::exec::NamePart >*
FieldDef::mutable_name() {
  return &name_;
}

// optional .common.MajorType major_type = 2;
inline bool FieldDef::has_major_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FieldDef::set_has_major_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FieldDef::clear_has_major_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FieldDef::clear_major_type() {
  if (major_type_ != NULL) major_type_->::common::MajorType::Clear();
  clear_has_major_type();
}
inline const ::common::MajorType& FieldDef::major_type() const {
  return major_type_ != NULL ? *major_type_ : *default_instance_->major_type_;
}
inline ::common::MajorType* FieldDef::mutable_major_type() {
  set_has_major_type();
  if (major_type_ == NULL) major_type_ = new ::common::MajorType;
  return major_type_;
}
inline ::common::MajorType* FieldDef::release_major_type() {
  clear_has_major_type();
  ::common::MajorType* temp = major_type_;
  major_type_ = NULL;
  return temp;
}
inline void FieldDef::set_allocated_major_type(::common::MajorType* major_type) {
  delete major_type_;
  major_type_ = major_type;
  if (major_type) {
    set_has_major_type();
  } else {
    clear_has_major_type();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace exec

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::exec::NamePart_Type>() {
  return ::exec::NamePart_Type_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::exec::ValueMode>() {
  return ::exec::ValueMode_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SchemaDef_2eproto__INCLUDED
