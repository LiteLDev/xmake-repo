#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/gui/oreui/resources/AllowListProfileImage.h"
#include "mc/client/social/FriendInviteType.h"
#include "mc/client/social/UserPresenceResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace Social { struct FriendData; }
// clang-format on

namespace OreUI {

struct InvitableFriendBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Social::FriendInviteType>       mFriendInviteType;
    ::ll::TypedStorage<8, 24, std::string>                     mUserId;
    ::ll::TypedStorage<8, 24, std::string>                     mPlayerName;
    ::ll::TypedStorage<4, 4, ::Social::UserPresenceResult>     mPresence;
    ::ll::TypedStorage<8, 112, ::OreUI::AllowListProfileImage> mProfileImage;
    ::ll::UntypedStorage<8, 72>                                mPlatformImage;
    // NOLINTEND

public:
    // prevent constructor by default
    InvitableFriendBindings& operator=(InvitableFriendBindings const&);
    InvitableFriendBindings(InvitableFriendBindings const&);
    InvitableFriendBindings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InvitableFriendBindings(
        ::Social::FriendData const&,
        ::Social::FriendInviteType,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );

    MCNAPI std::string const& getActiveProfileImage() const;

    MCNAPI ~InvitableFriendBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Social::FriendData const&,
        ::Social::FriendInviteType,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
