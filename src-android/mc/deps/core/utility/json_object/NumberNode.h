#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/Node.h"

namespace Bedrock::JSONObject {

class NumberNode : public ::Bedrock::JSONObject::Node {
public:
    // NumberNode inner types declare
    // clang-format off
    struct InternalFormat;
    // clang-format on

    // NumberNode inner types define
    struct InternalFormat {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>     mField_b5014caf;
        ::ll::TypedStorage<1, 1, bool> mIsFloatingPoint;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mField_29310910;
    // NOLINTEND
};

} // namespace Bedrock::JSONObject
