#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/identity/PlayFabStatus.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
struct PlayFabGetPlayerPlatformAccountIdsResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Social::PlayFabStatus>                           mStatus;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<std::string, std::string>>> mLinkedIdPairs;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayFabGetPlayerPlatformAccountIdsResult& operator=(PlayFabGetPlayerPlatformAccountIdsResult const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayFabGetPlayerPlatformAccountIdsResult(::Social::PlayFabGetPlayerPlatformAccountIdsResult const&);

    MCNAPI ~PlayFabGetPlayerPlatformAccountIdsResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Social::PlayFabGetPlayerPlatformAccountIdsResult const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct PlayFabGetPlayerPlatformAccountIdsResult {};
#endif // @header-generator platform

} // namespace Social
