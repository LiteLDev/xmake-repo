#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/RelationshipStatus.h"
#include "mc/client/social/UserPresenceResult.h"

namespace Social {

struct XblPeopleHubUser {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                 xuid;
    ::ll::TypedStorage<8, 24, std::string>                 gamertag;
    ::ll::TypedStorage<8, 24, std::string>                 gamerIconRaw;
    ::ll::TypedStorage<4, 4, ::Social::UserPresenceResult> presenceStatus;
    ::ll::TypedStorage<4, 4, ::RelationshipStatus>         isFollowingMe;
    ::ll::TypedStorage<4, 4, ::RelationshipStatus>         isFollowedByMe;
    ::ll::TypedStorage<4, 4, ::RelationshipStatus>         isFriend;
    ::ll::TypedStorage<4, 4, ::RelationshipStatus>         isFriendRequestReceived;
    ::ll::TypedStorage<4, 4, ::RelationshipStatus>         isFriendRequestSent;
    ::ll::TypedStorage<8, 24, std::string>                 lastPlayedWithDateTime;
    // NOLINTEND

public:
    // prevent constructor by default
    XblPeopleHubUser();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~XblPeopleHubUser();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
