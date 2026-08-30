#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/ServerID.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/social/ProfileImageOptions.h"
#include "mc/client/social/RelationToCurrentUser.h"
#include "mc/client/social/RelationshipStatus.h"
#include "mc/client/social/TitleHistory.h"
#include "mc/client/social/UserPresenceResult.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Social { struct PlatformUserProfileData; }
namespace Social { struct XboxLiveUserProfileData; }
// clang-format on

namespace Social {

struct FriendData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                    mXuid;
    ::ll::TypedStorage<8, 24, std::string>                    mPlatformId;
    ::ll::TypedStorage<8, 24, std::string>                    mGamerTag;
    ::ll::TypedStorage<8, 56, ::Social::ProfileImageOptions>  mProfileImage;
    ::ll::UntypedStorage<8, 24>                               mPlatformProfileImagePath;
    ::ll::TypedStorage<4, 4, ::Social::UserPresenceResult>    mUserPresence;
    ::ll::TypedStorage<8, 24, std::string>                    mPresenceMessage;
    ::ll::TypedStorage<8, 24, std::string>                    mPresenceTitle;
    ::ll::TypedStorage<4, 4, ::Social::TitleHistory>          mTitleHistory;
    ::ll::TypedStorage<4, 8, std::optional<uint>>             mTitleId;
    ::ll::UntypedStorage<1, 1>                                mIsCurrentlyPlaying;
    ::ll::UntypedStorage<8, 24>                               mPlayingOnServerId;
    ::ll::UntypedStorage<8, 16>                               mPlayingOnRealmId;
    ::ll::TypedStorage<4, 4, ::RelationshipStatus>            mIsFavorite;
    ::ll::TypedStorage<1, 1, bool>                            mIsBlocked;
    ::ll::TypedStorage<1, 1, bool>                            mIsMuted;
    ::ll::TypedStorage<4, 4, ::Social::RelationToCurrentUser> mRelationToCurrentUser;
    // NOLINTEND

public:
    // prevent constructor by default
    FriendData(FriendData const&);
    FriendData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Social::FriendData& operator=(::Social::FriendData&&);

    MCNAPI bool operator==(::Social::FriendData const&) const;

    MCNAPI bool updateIfChanged(
        ::Social::PlatformUserProfileData const&,
        std::optional<Network::ServerID> const&,
        std::optional<Realms::RealmId> const&
    );

    MCNAPI bool updateIfChanged(
        ::Social::XboxLiveUserProfileData const&,
        std::optional<Network::ServerID> const&,
        std::optional<Realms::RealmId> const&,
        std::string
    );

    MCNAPI bool updateIfChanged(
        ::Social::UserPresenceResult const,
        std::string,
        ::RelationshipStatus,
        std::optional<Network::ServerID> const&,
        std::optional<Realms::RealmId> const&,
        bool const,
        bool const,
        ::Social::RelationToCurrentUser const
    );

    MCNAPI ~FriendData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
