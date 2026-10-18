#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/identity/PlayFabBanDetails.h"
#include "mc/client/identity/PlayFabStatus.h"
#include "mc/client/social/AuthToken.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
struct PlayFabEntityTokenResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>                                          mStatus;
    ::ll::UntypedStorage<8, 24>                                         mEntityToken;
    ::ll::TypedStorage<8, 8, long>                                      mEntityTokenExpiration;
    ::ll::TypedStorage<8, 8, long>                                      mTimestamp;
    ::ll::TypedStorage<8, 48, std::optional<Social::PlayFabBanDetails>> mBanDetails;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayFabEntityTokenResult& operator=(PlayFabEntityTokenResult const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayFabEntityTokenResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct PlayFabEntityTokenResult {};
#endif // @header-generator platform

} // namespace Social
