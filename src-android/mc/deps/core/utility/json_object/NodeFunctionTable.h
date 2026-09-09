#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class ArrayNode; }
namespace Bedrock::JSONObject { class Node; }
namespace Bedrock::JSONObject { class ObjectNode; }
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

struct NodeFunctionTable {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};

} // namespace Bedrock::JSONObject
