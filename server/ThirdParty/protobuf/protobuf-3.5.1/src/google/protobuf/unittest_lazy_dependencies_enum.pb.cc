// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_lazy_dependencies_enum.proto

#include <google/protobuf/unittest_lazy_dependencies_enum.pb.h>

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
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace protobuf_unittest {
namespace lazy_imports {
}  // namespace lazy_imports
}  // namespace protobuf_unittest
namespace protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto {
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];
const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/protobuf/unittest_lazy_dependencies_enum.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      NULL, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n5google/protobuf/unittest_lazy_dependen"
      "cies_enum.proto\022\036protobuf_unittest.lazy_"
      "imports*,\n\010LazyEnum\022\017\n\013LAZY_ENUM_0\020\000\022\017\n\013"
      "LAZY_ENUM_1\020\001B,B\034UnittestLazyImportsEnum"
      "ProtoH\001\200\001\001\210\001\001\220\001\001\370\001\001"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 179);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/unittest_lazy_dependencies_enum.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto
namespace protobuf_unittest {
namespace lazy_imports {
const ::google::protobuf::EnumDescriptor* LazyEnum_descriptor() {
  protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fenum_2eproto::file_level_enum_descriptors[0];
}
bool LazyEnum_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace lazy_imports
}  // namespace protobuf_unittest

// @@protoc_insertion_point(global_scope)
