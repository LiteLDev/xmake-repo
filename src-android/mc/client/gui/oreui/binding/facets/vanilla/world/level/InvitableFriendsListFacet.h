#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/FriendsLoadingState.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/InvitableFriendBindings.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/social/FriendInviteType.h"
#include "mc/client/social/InvitableFriendsHandler.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace Social { class FriendList; }
namespace Social { class IUserManager; }
namespace Social { class MultiplayerServiceManager; }
namespace World { class WorldPlayerListTracker; }
// clang-format on

namespace OreUI {

class InvitableFriendsListFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::InvitableFriendsListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>             mFriendListSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>             mLobbyChangedSubscriber;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::FriendList>>         mFriendList;
    ::ll::UntypedStorage<8, 24>                                            mUserManager;
    ::ll::TypedStorage<8, 88, ::Social::InvitableFriendsHandler>           mInvitableFriendsHandler;
    ::ll::UntypedStorage<8, 24>                                            mResourceAllowList;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::InvitableFriendBindings>> mInvitableFriends;
    ::ll::TypedStorage<1, 1, bool>                                         mIsDirty;
    ::ll::TypedStorage<4, 4, ::OreUI::FriendsLoadingState>                 mXblFriendsLoadingState;
    ::ll::TypedStorage<4, 4, ::OreUI::FriendsLoadingState>                 mPlatformFriendsLoadingState;
    ::ll::TypedStorage<1, 1, bool>                                         mHasPlatformIcons;
    // NOLINTEND

public:
    // prevent constructor by default
    InvitableFriendsListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InvitableFriendsListFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InvitableFriendsListFacet(
        std::shared_ptr<Social::FriendList>,
        ::World::WorldPlayerListTracker&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );

    MCNAPI void _fetchInvitableFriends();

    MCNAPI std::vector<OreUI::InvitableFriendBindings> const& getInvitableFriends();

    MCNAPI ::OreUI::FriendsLoadingState getPlatformFriendsLoadingState() const;

    MCNAPI ::OreUI::FriendsLoadingState getXblFriendsLoadingState() const;

    MCNAPI bool const hasPlatformIcons() const;

    MCNAPI void sendInvite(std::string const, ::Social::FriendInviteType const);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[29]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<Social::FriendList>,
        ::World::WorldPlayerListTracker&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
