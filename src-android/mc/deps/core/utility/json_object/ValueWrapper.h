#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/JSONType.h"

namespace Bedrock::JSONObject {

class ValueWrapper {
public:
    // ValueWrapper inner types declare
    // clang-format off
    struct NumberInfo;
    struct StringInfo;
    // clang-format on

    // ValueWrapper inner types define
    struct NumberInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>     mField_212cb3bd;
        ::ll::TypedStorage<1, 1, bool> mIsFloatingPoint;
        // NOLINTEND
    };

    struct StringInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, char const*> mString;
        ::ll::TypedStorage<4, 4, uint>        mLength;
        ::ll::TypedStorage<4, 4, uint>        mCopy;
        // NOLINTEND
    };

    using ArrayWrapFnStorage = std::aligned_storage<48, 16>::type;

    using ObjectWrapFnStorage = std::aligned_storage<48, 16>::type;

    using ArrayWrapFn = std::function<bool(Bedrock::JSONObject::ValueWrapper&)>;

    using ObjectWrapFn = std::function<bool(std::string&, Bedrock::JSONObject::ValueWrapper&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mType;
    ::ll::UntypedStorage<8, 48> mField_20a238da;
    // NOLINTEND
};

} // namespace Bedrock::JSONObject
