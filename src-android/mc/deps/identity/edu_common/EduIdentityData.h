#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/identity/edu_common/ActiveDirectoryAuthenticationState.h"
#include "mc/deps/identity/edu_common/AuthToken.h"

struct EduIdentityData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                 mAuthDialogOpen;
    ::ll::TypedStorage<1, 1, ::ActiveDirectoryAuthenticationState> mAuthenticationState;
    ::ll::TypedStorage<8, 64, ::Identity::AuthToken>               mAccessToken;
    ::ll::TypedStorage<8, 24, std::string>                         mLastError;
    // NOLINTEND

public:
    // prevent constructor by default
    EduIdentityData& operator=(EduIdentityData const&);
    EduIdentityData(EduIdentityData const&);
    EduIdentityData();

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
};
