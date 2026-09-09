#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SocialPlayer.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/WorldPlayerInfoBindings.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class ClientLevel;
class IAppPlatform;
class LocalPlayer;
class PlayerAbilitiesManager;
class TrialManager;
struct ActorUniqueID;
struct LocalPlayerChangedConnector;
namespace OreUI { class IResourceAllowList; }
namespace Parties { class IPartyProvider; }
namespace Social { class FriendList; }
namespace Social { class IUserManager; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class ProfileSystem; }
namespace Social { class User; }
namespace Social { struct FriendData; }
namespace Social { struct PlayerIdentifier; }
namespace World { class WorldPlayerListTracker; }
namespace mce { class UUID; }
// clang-format on

namespace OreUI {

class WorldPlayersListFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::WorldPlayersListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mLocalPlayerSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mCachedPlayerPermissionsLevelChangedPublisher;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mPlayerAbilitiesSubscription;
    ::ll::UntypedStorage<8, 24>                                       mWorldPlayerListChangedSubscription;
    ::ll::UntypedStorage<8, 48>                                       mGetCurrentLocalPlayer;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::User>>          mLocalUser;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::ProfileSystem>> mProfileSystem;
    ::ll::UntypedStorage<8, 24>                                       mAppPlatform;
    ::ll::UntypedStorage<8, 24>                                       mUserManager;
    ::ll::UntypedStorage<8, 48>                                       mIsInGame;
    ::ll::UntypedStorage<8, 24>                                       mResourceAllowList;
    ::ll::UntypedStorage<8, 24>                                       mPlayerAbilitiesManager;
    ::ll::UntypedStorage<8, 24>                                       mMultiplayerServiceManager;
    ::ll::TypedStorage<8, 8, ::World::WorldPlayerListTracker&>        mWorldPlayerListTracker;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::FriendList>>    mFriendList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mPartySubscription;
    ::ll::UntypedStorage<8, 24>                                       mPartyProvider;
    ::ll::UntypedStorage<8, 24>                                       mTrialManager;
    ::ll::UntypedStorage<8, 48>                                       mGetCurrentLevel;
    ::ll::TypedStorage<8, 24, std::string>                            mLocalPlayerID;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::WorldPlayerInfoBindings>> mPlayerList;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::WorldPlayerInfoBindings>> mPrevPlayerList;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::SocialPlayer>>            mPlayersInMyWorld;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::SocialPlayer>>            mPrevPlayersInMyWorld;
    ::ll::TypedStorage<1, 1, bool>                                         mIsLocalPlayerHosting;
    ::ll::TypedStorage<1, 1, bool>                                         mLocalPlayerLoaded;
    ::ll::TypedStorage<1, 1, bool>                                         mPlayerListChanged;
    ::ll::TypedStorage<1, 1, bool>                                         mPlayersInMyWorldChanged;
    ::ll::TypedStorage<1, 1, bool>                                         mImagesChanged;
    ::ll::TypedStorage<1, 1, bool>                                         mPartyChanged;
    ::ll::TypedStorage<1, 1, bool>                                         mIsInRealm;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldPlayersListFacet& operator=(WorldPlayersListFacet const&);
    WorldPlayersListFacet(WorldPlayersListFacet const&);
    WorldPlayersListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldPlayersListFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldPlayersListFacet(
        ::Bedrock::NonOwnerPointer<IAppPlatform> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>>,
        ::LocalPlayerChangedConnector const&,
        std::shared_ptr<Social::User>,
        ::World::WorldPlayerListTracker&,
        std::shared_ptr<Social::ProfileSystem>,
        std::function<LocalPlayer*()>,
        std::function<bool()>,
        std::shared_ptr<Social::FriendList>,
        ::Bedrock::NonOwnerPointer<Parties::IPartyProvider>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<TrialManager>>,
        std::function<ClientLevel*()>
    );

    MCNAPI void _clearResources();

    MCNAPI ::mce::UUID _getLocalPlayerUUID() const;

    MCNAPI void _initResources();

    MCNAPI void _refreshPlayers();

    MCNAPI void _updatePlayerInfo(::Social::PlayerIdentifier const&);

    MCNAPI void _updatePlayerPermissionLevel(::ActorUniqueID const&, std::optional<PlayerPermissionLevel>);

    MCNAPI bool getEnableInviteToPlayButton() const;

    MCNAPI std::string const& getLocalPlayerID() const;

    MCNAPI std::vector<OreUI::WorldPlayerInfoBindings> const& getPlayerList() const;

    MCNAPI std::vector<OreUI::SocialPlayer> const& getPlayersInMyWorld() const;

    MCNAPI bool isInRealm() const;

    MCNAPI bool isLocalPlayerHosting() const;
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
        ::Bedrock::NonOwnerPointer<IAppPlatform> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>>,
        ::LocalPlayerChangedConnector const&,
        std::shared_ptr<Social::User>,
        ::World::WorldPlayerListTracker&,
        std::shared_ptr<Social::ProfileSystem>,
        std::function<LocalPlayer*()>,
        std::function<bool()>,
        std::shared_ptr<Social::FriendList>,
        ::Bedrock::NonOwnerPointer<Parties::IPartyProvider>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<TrialManager>>,
        std::function<ClientLevel*()>
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
