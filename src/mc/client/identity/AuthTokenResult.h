#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/identity/AuthTokenStatus.h"
#include "mc/client/social/AuthToken.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct AuthTokenResult {};
#endif // @header-generator platform

} // namespace Social
