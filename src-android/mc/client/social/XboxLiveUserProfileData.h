#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/RelationToCurrentUser.h"
#include "mc/client/social/RelationshipStatus.h"
#include "mc/client/social/TitleHistory.h"
#include "mc/client/social/UserPresenceResult.h"
#include "mc/client/social/XboxLivePermission.h"

// auto generated forward declare list
// clang-format off
namespace Social { class ProfileImageOptions; }
// clang-format on

namespace Social {

struct XboxLiveUserProfileData {
public:
    // XboxLiveUserProfileData inner types define
    enum class FetchedData : int {
        None        = 0,
        Profile     = 1,
        Permissions = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                   mXuid;
    ::ll::TypedStorage<4, 4, ::Social::XboxLiveUserProfileData::FetchedData> mFetchedData;
    ::ll::TypedStorage<8, 24, std::string>                                   mGamertag;
    ::ll::TypedStorage<8, 24, std::string>                                   mDisplayName;
    ::ll::TypedStorage<8, 24, std::string>                                   mRealName;
    ::ll::TypedStorage<8, 24, std::string>                                   mGamerPicUrl;
    ::ll::TypedStorage<8, 24, std::string>                                   mTitleName;
    ::ll::TypedStorage<4, 4, uint>                                           mTitleId;
    ::ll::TypedStorage<8, 24, std::string>                                   mGamerScore;
    ::ll::TypedStorage<4, 4, ::Social::TitleHistory>                         mTitleHistory;
    ::ll::TypedStorage<1, 1, bool>                                           mIsProfileValid;
    ::ll::TypedStorage<8, 24, std::string>                                   mPresenceMessage;
    ::ll::TypedStorage<4, 4, ::Social::UserPresenceResult>                   mPresence;
    ::ll::TypedStorage<4, 4, ::RelationshipStatus>                           mIsMuted;
    ::ll::TypedStorage<4, 4, ::RelationshipStatus>                           mIsBlocked;
    ::ll::TypedStorage<4, 4, ::RelationshipStatus>                           mIsFriend;
    ::ll::TypedStorage<4, 4, ::RelationshipStatus>                           mIsFavorite;
    ::ll::TypedStorage<4, 4, ::RelationshipStatus>                           mIsThisUserFollowingMe;
    ::ll::TypedStorage<4, 4, ::RelationshipStatus>                           mAmIFollowingThisUser;
    ::ll::TypedStorage<4, 4, ::RelationshipStatus>                           mIsFriendRequestSent;
    ::ll::TypedStorage<4, 4, ::RelationshipStatus>                           mIsFriendRequestReceived;
    ::ll::TypedStorage<8, 24, std::vector<Social::XboxLivePermission>>       mPermissions;
    // NOLINTEND

public:
    // prevent constructor by default
    XboxLiveUserProfileData& operator=(XboxLiveUserProfileData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit XboxLiveUserProfileData(std::string const&);

    MCNAPI XboxLiveUserProfileData(::Social::XboxLiveUserProfileData const&);

    MCNAPI ::Social::ProfileImageOptions getDefaultProfileImageOptions() const;

    MCNAPI ::Social::RelationToCurrentUser getRelationToCurrentUser(std::string const&) const;

    MCNAPI bool hasFetchedData(::Social::XboxLiveUserProfileData::FetchedData);

    MCNAPI bool hasValidXUID() const;

    MCNAPI ~XboxLiveUserProfileData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::RelationshipStatus boolToRelationshipStatus(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&);

    MCNAPI void* $ctor(::Social::XboxLiveUserProfileData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
