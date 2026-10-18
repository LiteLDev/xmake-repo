#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/identity/edu_common/ActiveDirectoryAuthenticationState.h"
#include "mc/deps/identity/edu_common/AuthToken.h"
#else // @header-generator platform
#endif // @header-generator platform

struct EduIdentityData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                 mAuthDialogOpen;
    ::ll::TypedStorage<1, 1, ::ActiveDirectoryAuthenticationState> mAuthenticationState;
    ::ll::TypedStorage<8, 64, ::Identity::AuthToken>               mAccessToken;
    ::ll::TypedStorage<8, 24, std::string>                         mLastError;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnk90f184;
    ::ll::UntypedStorage<1, 1>  mUnkb528a4;
    ::ll::UntypedStorage<8, 80> mUnk250984;
    ::ll::UntypedStorage<8, 32> mUnk45a3b6;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EduIdentityData& operator=(EduIdentityData const&);
    EduIdentityData(EduIdentityData const&);
    EduIdentityData();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EduIdentityData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
