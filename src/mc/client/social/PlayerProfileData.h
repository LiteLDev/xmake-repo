#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/ServerID.h"
#include "mc/client/social/PlayerIdentifier.h"
#include "mc/client/social/ProfileImageOptions.h"
#include "mc/client/social/RelationToCurrentUser.h"
#include "mc/client/social/RelationshipStatus.h"
#include "mc/client/social/UserPicturePath.h"
#include "mc/client/social/UserPresenceResult.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
struct PlayerProfileData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::Social::PlayerIdentifier>     playerIdentifier;
    ::ll::TypedStorage<8, 24, std::string>                    offlineName;
    ::ll::TypedStorage<8, 24, std::string>                    xblName;
    ::ll::TypedStorage<8, 24, std::string>                    platformName;
    ::ll::TypedStorage<8, 24, std::string>                    realName;
    ::ll::TypedStorage<8, 56, ::Social::ProfileImageOptions>  profileImage;
    ::ll::TypedStorage<8, 56, ::Social::ProfileImageOptions>  avatarImage;
    ::ll::TypedStorage<8, 48, ::Social::UserPicturePath>      platformProfilePic;
    ::ll::TypedStorage<4, 4, ::Social::RelationToCurrentUser> relation;
    ::ll::TypedStorage<1, 1, bool>                            isOnline;
    ::ll::TypedStorage<1, 1, bool>                            isBlocked;
    ::ll::TypedStorage<1, 1, bool>                            isMuted;
    ::ll::TypedStorage<4, 4, ::Social::UserPresenceResult>    presence;
    ::ll::TypedStorage<8, 24, std::string>                    titleName;
    ::ll::TypedStorage<4, 8, std::optional<uint>>             titleId;
    ::ll::TypedStorage<8, 24, std::string>                    presenceMessage;
    ::ll::TypedStorage<8, 24, std::string>                    url;
    ::ll::UntypedStorage<8, 24>                               playingOnServerId;
    ::ll::TypedStorage<8, 24, std::string>                    playingOnRealmId;
    ::ll::TypedStorage<4, 4, ::RelationshipStatus>            favoriteStatus;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerProfileData(PlayerProfileData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerProfileData();

    MCNAPI ::Social::PlayerProfileData& operator=(::Social::PlayerProfileData const&);

    MCNAPI ~PlayerProfileData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct PlayerProfileData {};
#endif // @header-generator platform

} // namespace Social
