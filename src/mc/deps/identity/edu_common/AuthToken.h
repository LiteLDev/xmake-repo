#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity {

struct AuthToken {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> token;
    ::ll::TypedStorage<8, 24, std::string> userId;
    ::ll::TypedStorage<8, 8, long>         expiresOn;
    ::ll::TypedStorage<1, 1, bool>         isDemo;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkb51945;
    ::ll::UntypedStorage<8, 32> mUnk8a202b;
    ::ll::UntypedStorage<8, 8>  mUnkde788c;
    ::ll::UntypedStorage<1, 1>  mUnk467273;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AuthToken& operator=(AuthToken const&);
#endif // @header-generator platform
    AuthToken();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Identity::AuthToken& operator=(::Identity::AuthToken&&);
#else // @header-generator platform
    MCNAPI AuthToken(::Identity::AuthToken const&);
#endif // @header-generator platform

    MCNAPI ~AuthToken();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Identity::AuthToken const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Identity
