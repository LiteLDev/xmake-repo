#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/identity/PlayFabBanDetails.h"
#include "mc/client/identity/PlayFabStatus.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
struct PlayFabGetUserDataResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Social::PlayFabStatus>                       mStatus;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mUserData;
    ::ll::TypedStorage<8, 8, long>                                          mTimestamp;
    ::ll::TypedStorage<8, 48, std::optional<Social::PlayFabBanDetails>>     mBanDetails;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayFabGetUserDataResult& operator=(PlayFabGetUserDataResult const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayFabGetUserDataResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct PlayFabGetUserDataResult {};
#endif // @header-generator platform

} // namespace Social
