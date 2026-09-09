#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/identity/PlayFabBanDetails.h"
#include "mc/client/identity/PlayFabStatus.h"
#include "mc/client/social/AuthToken.h"

namespace Social {

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

} // namespace Social
