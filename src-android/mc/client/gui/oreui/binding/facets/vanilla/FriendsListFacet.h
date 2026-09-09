#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/FriendsLoadingState.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SocialPlayer.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace Parties { class IPartyProvider; }
namespace Realms { class RealmsList; }
namespace Social { class FriendList; }
namespace Social { class IUserManager; }
namespace World { class WorldPlayerListTracker; }
// clang-format on

namespace OreUI {

class FriendsListFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::FriendsListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::FriendList>> mFriendList;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsList>> mRealmsList;
    ::ll::TypedStorage<8, 8, ::World::WorldPlayerListTracker&>     mWorldPlayerListTracker;
    ::ll::TypedStorage<4, 4, ::OreUI::FriendsLoadingState>         mXblFriendsLoadingState;
    ::ll::TypedStorage<4, 4, ::OreUI::FriendsLoadingState>         mPlatformFriendsLoadingState;
    ::ll::UntypedStorage<8, 24>                                    mResourceAllowList;
    ::ll::UntypedStorage<8, 24>                                    mUserManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mPartySubscription;
    ::ll::UntypedStorage<8, 24>                                    mPartyProvider;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::SocialPlayer>>    mXblFriends;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::SocialPlayer>>    mPlatformFriends;
    ::ll::TypedStorage<1, 1, bool>                                 mIsDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mBuildGameListSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mRealmsListSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mFriendListChangedSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mPlayerListChangedSubscriber;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::SocialPlayer>>    mPrevXblFriends;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::SocialPlayer>>    mPrevPlatformFriends;
    // NOLINTEND

public:
    // prevent constructor by default
    FriendsListFacet& operator=(FriendsListFacet const&);
    FriendsListFacet(FriendsListFacet const&);
    FriendsListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FriendsListFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FriendsListFacet(
        std::shared_ptr<Social::FriendList>,
        ::World::WorldPlayerListTracker&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>,
        ::Bedrock::NonOwnerPointer<Parties::IPartyProvider>
    );

    MCNAPI std::vector<OreUI::SocialPlayer> const& getPlatformFriends() const;

    MCNAPI ::OreUI::FriendsLoadingState getPlatformFriendsLoadingState() const;

    MCNAPI std::vector<OreUI::SocialPlayer> const& getXblFriends() const;

    MCNAPI ::OreUI::FriendsLoadingState getXblFriendsLoadingState() const;

    MCNAPI void userControlledUpdateGameList();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[25]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<Social::FriendList>,
        ::World::WorldPlayerListTracker&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>,
        ::Bedrock::NonOwnerPointer<Parties::IPartyProvider>
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
