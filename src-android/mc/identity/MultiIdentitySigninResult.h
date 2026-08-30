#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/identity/IdentityType.h"

namespace Social {

struct MultiIdentitySigninResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::error_code>       mFailure;
    ::ll::TypedStorage<1, 1, bool>                   mIsNewAccount;
    ::ll::TypedStorage<8, 24, std::string>           mGamertagHint;
    ::ll::TypedStorage<8, 8, ::Social::IdentityType> mFailingType;
    ::ll::TypedStorage<8, 24, std::string>           mBanReason;
    ::ll::TypedStorage<8, 24, std::string>           mBanExpiration;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiIdentitySigninResult& operator=(MultiIdentitySigninResult const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MultiIdentitySigninResult(::Social::MultiIdentitySigninResult const&);

    MCNAPI ~MultiIdentitySigninResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Social::MultiIdentitySigninResult const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
