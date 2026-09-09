#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/FriendData.h"
#include "mc/client/social/FriendInviteType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Social { class FriendList; }
namespace Social { class MultiplayerServiceManager; }
// clang-format on

namespace Social {

class InvitableFriendsHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::FriendList>> mFriendList;
    ::ll::UntypedStorage<8, 24>                                    mMultiplayerServiceManager;
    ::ll::TypedStorage<8, 24, std::vector<Social::FriendData>>     mXboxLiveEntries;
    ::ll::TypedStorage<8, 24, std::vector<Social::FriendData>>     mPlatformEntries;
    // NOLINTEND

public:
    // prevent constructor by default
    InvitableFriendsHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InvitableFriendsHandler(
        std::shared_ptr<Social::FriendList>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>> const&
    );

    MCNAPI bool fetchInvitableFriends(
        std::function<bool(const Social::FriendData&)>,
        std::function<bool(const Social::FriendData&)>
    );

    MCNAPI std::vector<Social::FriendData> const& getInvitablePlatformFriends();

    MCNAPI std::vector<Social::FriendData> const& getInvitableXboxLiveFriends();

    MCNAPI void sendFriendInvite(std::string const, ::Social::FriendInviteType const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<Social::FriendList>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>> const&
    );
    // NOLINTEND
};

} // namespace Social
