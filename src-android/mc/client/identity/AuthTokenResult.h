#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/identity/AuthTokenStatus.h"
#include "mc/client/social/AuthToken.h"

namespace Social {

struct AuthTokenResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                         mAuthToken;
    ::ll::TypedStorage<4, 4, int>                       mIssuerId;
    ::ll::TypedStorage<4, 4, ::Social::AuthTokenStatus> mStatus;
    // NOLINTEND

public:
    // prevent constructor by default
    AuthTokenResult& operator=(AuthTokenResult const&);
};

} // namespace Social
