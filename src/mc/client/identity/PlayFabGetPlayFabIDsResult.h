#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/identity/PlayFabStatus.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
struct PlayFabGetPlayFabIDsResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Social::PlayFabStatus>                       mStatus;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mPlayFabIds;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayFabGetPlayFabIDsResult& operator=(PlayFabGetPlayFabIDsResult const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayFabGetPlayFabIDsResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct PlayFabGetPlayFabIDsResult {};
#endif // @header-generator platform

} // namespace Social
