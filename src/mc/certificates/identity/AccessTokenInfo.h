#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AccessTokenInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> email;
    ::ll::TypedStorage<8, 8, long>         expiration;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkb9bab6;
    ::ll::UntypedStorage<8, 8>  mUnk705dd3;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AccessTokenInfo& operator=(AccessTokenInfo const&);
    AccessTokenInfo(AccessTokenInfo const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AccessTokenInfo();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI AccessTokenInfo(::std::string _email, int64 _expiration);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::string _email, int64 _expiration);
#endif
    // NOLINTEND
#endif // @header-generator platform
};
