#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class ArrayNode; }
namespace Bedrock::JSONObject { class Node; }
namespace Bedrock::JSONObject { class ObjectNode; }
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::JSONObject {

struct NodeFunctionTable {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, void(*)(bool&, ::Bedrock::JSONObject::Node const&)> mBoolean;
    ::ll::TypedStorage<8, 8, void(*)(uint&, ::Bedrock::JSONObject::Node const&)> mUInt32;
    ::ll::TypedStorage<8, 8, void(*)(int&, ::Bedrock::JSONObject::Node const&)> mSInt32;
    ::ll::TypedStorage<8, 8, void(*)(ulong&, ::Bedrock::JSONObject::Node const&)> mUInt64;
    ::ll::TypedStorage<8, 8, void(*)(long&, ::Bedrock::JSONObject::Node const&)> mSInt64;
    ::ll::TypedStorage<8, 8, void(*)(float&, ::Bedrock::JSONObject::Node const&)> mFloat;
    ::ll::TypedStorage<8, 8, void(*)(double&, ::Bedrock::JSONObject::Node const&)> mDouble;
    ::ll::TypedStorage<8, 8, void(*)(std::basic_ostream<char, std::char_traits<char>>&, ::Bedrock::JSONObject::Node const&)> mStream;
    ::ll::TypedStorage<8, 8, void(*)(std::basic_ostream<char, std::char_traits<char>>&, ::Bedrock::JSONObject::Node const&)> mJSONStream;
    ::ll::TypedStorage<8, 8, void(*)(::Bedrock::JSONObject::ArrayNode const*&, ::Bedrock::JSONObject::Node const&)> mArray;
    ::ll::TypedStorage<8, 8, void(*)(::Bedrock::JSONObject::ObjectNode const*&, ::Bedrock::JSONObject::Node const&)> mObject;
    ::ll::TypedStorage<8, 8, bool(*)(::Bedrock::JSONObject::Node&, ::Bedrock::JSONObject::ValueWrapper const&)> mAssignment;
    ::ll::TypedStorage<8, 8, bool(*)(::Bedrock::JSONObject::Node const&, ::Bedrock::JSONObject::Node const&)> mCompareEqual;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk77f062;
    ::ll::UntypedStorage<8, 8> mUnk4bf913;
    ::ll::UntypedStorage<8, 8> mUnka38fc5;
    ::ll::UntypedStorage<8, 8> mUnkffdcc1;
    ::ll::UntypedStorage<8, 8> mUnk584e50;
    ::ll::UntypedStorage<8, 8> mUnk956814;
    ::ll::UntypedStorage<8, 8> mUnkc14813;
    ::ll::UntypedStorage<8, 8> mUnk75dba2;
    ::ll::UntypedStorage<8, 8> mUnk10fe93;
    ::ll::UntypedStorage<8, 8> mUnk2a05d8;
    ::ll::UntypedStorage<8, 8> mUnk94a11a;
    ::ll::UntypedStorage<8, 8> mUnkebff7f;
    ::ll::UntypedStorage<8, 8> mUnkafebd2;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    NodeFunctionTable& operator=(NodeFunctionTable const&);
    NodeFunctionTable(NodeFunctionTable const&);
    NodeFunctionTable();
#endif // @header-generator platform
};

} // namespace Bedrock::JSONObject
