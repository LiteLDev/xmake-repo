#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
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
namespace OreUI { struct SocialPlayer; }
namespace OreUI { struct WorldPlayerInfoBindings; }
namespace Parties { class IPartyProvider; }
namespace Social { class FriendList; }
namespace Social { class IUserManager; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class ProfileSystem; }
namespace Social { class User; }
namespace Social { struct PlayerIdentifier; }
namespace World { class WorldPlayerListTracker; }
namespace mce { class UUID; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class WorldPlayersListFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::WorldPlayersListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mLocalPlayerSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mCachedPlayerPermissionsLevelChangedPublisher;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mPlayerAbilitiesSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mWorldPlayerListChangedSubscription;
    ::ll::TypedStorage<8, 64, ::std::function<::LocalPlayer*()>>          mGetCurrentLocalPlayer;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::User>>          mLocalUser;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::ProfileSystem>> mProfileSystem;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IAppPlatform const>>           mAppPlatform;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>>      mUserManager;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                                    mIsInGame;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PlayerAbilitiesManager>>       mPlayerAbilitiesManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>>
                                                                                     mMultiplayerServiceManager;
    ::ll::TypedStorage<8, 8, ::World::WorldPlayerListTracker&>                       mWorldPlayerListTracker;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::FriendList>>               mFriendList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mPartySubscription;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>> mPartyProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::TrialManager>>         mTrialManager;
    ::ll::TypedStorage<8, 64, ::std::function<::ClientLevel*()>>                     mGetCurrentLevel;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mLocalPlayerID;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::WorldPlayerInfoBindings>>       mPlayerList;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::WorldPlayerInfoBindings>>       mPrevPlayerList;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::SocialPlayer>>                  mPlayersInMyWorld;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::SocialPlayer>>                  mPrevPlayersInMyWorld;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsLocalPlayerHosting;
    ::ll::TypedStorage<1, 1, bool>                                                   mLocalPlayerLoaded;
    ::ll::TypedStorage<1, 1, bool>                                                   mPlayerListChanged;
    ::ll::TypedStorage<1, 1, bool>                                                   mPlayersInMyWorldChanged;
    ::ll::TypedStorage<1, 1, bool>                                                   mImagesChanged;
    ::ll::TypedStorage<1, 1, bool>                                                   mPartyChanged;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsInRealm;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldPlayersListFacet& operator=(WorldPlayersListFacet const&);
    WorldPlayersListFacet(WorldPlayersListFacet const&);
    WorldPlayersListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldPlayersListFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldPlayersListFacet(
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&                  appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>              userManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>         resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> multiplayerServiceManager,
        ::LocalPlayerChangedConnector const&                               localPlayerChangedConnector,
        ::std::shared_ptr<::Social::User>                                  localUser,
        ::World::WorldPlayerListTracker&                                   worldPlayerListTracker,
        ::std::shared_ptr<::Social::ProfileSystem>                         profileSystem,
        ::std::function<::LocalPlayer*()>                                  getCurrentLocalPlayer,
        ::std::function<bool()>                                            isInGame,
        ::std::shared_ptr<::Social::FriendList>                            friendList,
        ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>              partyProvider,
        ::Bedrock::NotNullNonOwnerPtr<::TrialManager>                      trialManager,
        ::std::function<::ClientLevel*()>                                  getCurrentLevel
    );

    MCAPI void _clearResources();

    MCAPI ::mce::UUID _getLocalPlayerUUID() const;

    MCAPI void _initResources();

    MCAPI void _refreshPlayers();

    MCAPI void _updatePlayerInfo(::Social::PlayerIdentifier const& playerIdentifier);

    MCAPI void _updatePlayerPermissionLevel(
        ::ActorUniqueID const&                   playerId,
        ::std::optional<::PlayerPermissionLevel> playerPermissionLevel
    );

    MCAPI bool getEnableInviteToPlayButton() const;

    MCFOLD ::std::string const& getLocalPlayerID() const;

    MCAPI ::std::vector<::OreUI::WorldPlayerInfoBindings> const& getPlayerList() const;

    MCAPI ::std::vector<::OreUI::SocialPlayer> const& getPlayersInMyWorld() const;

    MCAPI bool isInRealm() const;

    MCAPI bool isLocalPlayerHosting() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&                  appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>              userManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>         resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> multiplayerServiceManager,
        ::LocalPlayerChangedConnector const&                               localPlayerChangedConnector,
        ::std::shared_ptr<::Social::User>                                  localUser,
        ::World::WorldPlayerListTracker&                                   worldPlayerListTracker,
        ::std::shared_ptr<::Social::ProfileSystem>                         profileSystem,
        ::std::function<::LocalPlayer*()>                                  getCurrentLocalPlayer,
        ::std::function<bool()>                                            isInGame,
        ::std::shared_ptr<::Social::FriendList>                            friendList,
        ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>              partyProvider,
        ::Bedrock::NotNullNonOwnerPtr<::TrialManager>                      trialManager,
        ::std::function<::ClientLevel*()>                                  getCurrentLevel
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class WorldPlayersListFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
