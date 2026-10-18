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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 8>     mField_b5014caf;
        ::ll::TypedStorage<1, 1, bool> mIsFloatingPoint;
#else // @header-generator platform
        union {
            ::ll::UntypedStorage<8, 8> mUnkb620ea;
            ::ll::UntypedStorage<8, 8> mUnk233717;
        };
        ::ll::UntypedStorage<1, 1> mUnk5b8be2;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        InternalFormat& operator=(InternalFormat const&);
        InternalFormat(InternalFormat const&);
        InternalFormat();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 8> mField_29310910;
#else // @header-generator platform
    union {
        ::ll::UntypedStorage<8, 8> mUnkffbb2c;
        ::ll::UntypedStorage<8, 8> mUnk91d366;
    };
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    NumberNode& operator=(NumberNode const&);
    NumberNode(NumberNode const&);
    NumberNode();
#endif // @header-generator platform
};

} // namespace Bedrock::JSONObject
