#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/identity/IdentitySignInTrigger.h"
#include "mc/identity/IdentityType.h"

// auto generated forward declare list
// clang-format off
namespace Social { struct MultiIdentitySigninResult; }
// clang-format on

namespace Social {

struct UserSignInProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Social::IdentityType>          mIdentitySigningIn;
    ::ll::TypedStorage<1, 1, bool>                            mAllowUI;
    ::ll::TypedStorage<4, 4, ::Social::IdentitySignInTrigger> mSignInTrigger;
    ::ll::UntypedStorage<8, 32>                               mSignInSource;
    ::ll::UntypedStorage<8, 48>                               mCallback;
    ::ll::UntypedStorage<8, 48>                               mDisplayDelegate;
    // NOLINTEND

public:
    // prevent constructor by default
    UserSignInProperties& operator=(UserSignInProperties const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~UserSignInProperties();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
