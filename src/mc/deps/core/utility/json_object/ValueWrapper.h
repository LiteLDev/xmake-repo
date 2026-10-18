#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/JSONType.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 8>     mField_212cb3bd;
        ::ll::TypedStorage<1, 1, bool> mIsFloatingPoint;
#else // @header-generator platform
        union {
            ::ll::UntypedStorage<8, 8> mUnk2d9cad;
            ::ll::UntypedStorage<8, 8> mUnk69087f;
        };
        ::ll::UntypedStorage<1, 1> mUnk9b5c2a;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        NumberInfo& operator=(NumberInfo const&);
        NumberInfo(NumberInfo const&);
        NumberInfo();
#endif // @header-generator platform
    };

    struct StringInfo {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, char const*> mString;
        ::ll::TypedStorage<4, 4, uint>        mLength;
        ::ll::TypedStorage<4, 4, uint>        mCopy;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnk1197f1;
        ::ll::UntypedStorage<4, 4> mUnk970063;
        ::ll::UntypedStorage<4, 4> mUnkd0118a;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
    };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ArrayWrapFnStorage = std::aligned_storage<48, 16>::type;

    using ObjectWrapFnStorage = std::aligned_storage<48, 16>::type;

    using ArrayWrapFn = std::function<bool(Bedrock::JSONObject::ValueWrapper&)>;

    using ObjectWrapFn = std::function<bool(std::string&, Bedrock::JSONObject::ValueWrapper&)>;
#else // @header-generator platform
    public:
        // prevent constructor by default
        StringInfo& operator=(StringInfo const&);
        StringInfo(StringInfo const&);
        StringInfo();
    };
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 16> mType;
    ::ll::UntypedStorage<8, 48> mField_20a238da;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk7795a7;
    union {
        ::ll::UntypedStorage<8, 16> mUnk7f22b7;
        ::ll::UntypedStorage<1, 1>  mUnk97e533;
        ::ll::UntypedStorage<8, 16> mUnka7ef63;
        ::ll::UntypedStorage<8, 64> mUnk5b5602;
        ::ll::UntypedStorage<8, 64> mUnk827f1a;
    };
    // NOLINTEND

public:
    // prevent constructor by default
    ValueWrapper& operator=(ValueWrapper const&);
    ValueWrapper(ValueWrapper const&);
    ValueWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ValueWrapper();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::JSONObject
