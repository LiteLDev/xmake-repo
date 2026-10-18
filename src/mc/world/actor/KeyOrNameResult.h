#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct KeyOrNameResult {
public:
    // KeyOrNameResult inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum ResultType : uint {
#else // @header-generator platform
    enum class ResultType : int {
#endif // @header-generator platform
        LocalizationKey = 0,
        Name            = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                  mString;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                mString;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::KeyOrNameResult::ResultType> mType;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~KeyOrNameResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};
