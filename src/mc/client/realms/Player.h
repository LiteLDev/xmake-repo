#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/realms/PlayerRole.h"
#include "mc/client/realms/RealmStoriesPlayerRole.h"
#include "mc/client/social/XboxLiveUserProfileData.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms::Stories {

#if defined(LL_PLAT_A) // @header-generator platform
struct Player {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                              mXuid;
    ::ll::TypedStorage<1, 1, bool>                                      mIsPrimaryUser;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::RealmStoriesPlayerRole> mRealmStoriesRole;
    ::ll::TypedStorage<4, 4, ::Realms::PlayerRole>                      mRealmsRole;
    ::ll::TypedStorage<1, 1, bool>                                      mIsPlayingOnRealm;
    ::ll::TypedStorage<8, 280, ::Social::XboxLiveUserProfileData>       mProfileData;
    ::ll::TypedStorage<1, 1, bool>                                      mHasOptedIn;
    ::ll::TypedStorage<8, 8, long>                                      mLastSeenTime;
    ::ll::TypedStorage<1, 1, bool>                                      mHasAccepted;
    // NOLINTEND

public:
    // prevent constructor by default
    Player();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Player();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct Player {};
#endif // @header-generator platform

} // namespace Realms::Stories
