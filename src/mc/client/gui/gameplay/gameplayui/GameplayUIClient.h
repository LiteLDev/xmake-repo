#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/events/NetworkType.h"
#include "mc/world/actor/player/persona/ProfileType.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ItemEventListener.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IOptionRegistry;
class ISceneStack;
class LocalPlayer;
struct ActorUniqueID;
struct GameConnectionConnector;
struct PlayerNotificationEvent;
namespace GameplayUI { struct GameplayUIContext; }
namespace OreUI { class Router; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/events/NetworkType.h"
#include "mc/world/actor/player/persona/ProfileType.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ItemEventListener.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IOptionRegistry;
class ISceneStack;
class LocalPlayer;
struct ActorUniqueID;
struct GameConnectionConnector;
struct PlayerNotificationEvent;
namespace GameplayUI { struct GameplayUIContext; }
namespace OreUI { class Router; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GameplayUI {

#if defined(LL_PLAT_A) // @header-generator platform
class GameplayUIClient : public ::EventListenerDispatcher<PlayerEventListener>,
                         public ::EventListenerDispatcher<ItemEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::GameplayUI::GameplayUIContext&> mContext;
    ::ll::TypedStorage<8, 8, ::OreUI::Router&>                 mRouter;
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>               mOptions;
    ::ll::UntypedStorage<8, 24>                                mSceneStack;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mConnectedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mClientSideCloseSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    GameplayUIClient& operator=(GameplayUIClient const&);
    GameplayUIClient(GameplayUIClient const&);
    GameplayUIClient();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~GameplayUIClient();

    virtual ::EventResult onLocalPlayerDeath(::IClientInstance&, ::LocalPlayer&);

    virtual ::EventResult onLocalPlayerRespawn(::IClientInstance&, ::LocalPlayer&);

    virtual ::EventResult onLocalPlayerOpenInventory(::IClientInstance&, ::LocalPlayer&);

    virtual ::EventResult onLocalPlayerOpenTrading(::IClientInstance&, ::LocalPlayer&, ::ActorUniqueID const&, bool);

    virtual ::EventResult onPlayerCreated(::LocalPlayer&, ::persona::ProfileType, std::string const&, bool, ::NetworkType);

    virtual ::EventResult onEvent(::PlayerNotificationEvent const&);

    virtual ::EventResult onShowDataDrivenScreen(::LocalPlayer&, std::string const&, uint, std::optional<uint>);

    virtual ::EventResult onCloseDataDrivenScreen(::LocalPlayer&, uint);

    virtual ::EventResult onCloseAllDataDrivenScreens(::LocalPlayer&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameplayUIClient(
        ::GameplayUI::GameplayUIContext&,
        ::OreUI::Router&,
        ::IOptionRegistry&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const ISceneStack>>
    );

    MCNAPI void onJoinWorld(::IClientInstance&);

    MCNAPI void onLeaveWorld();

    MCNAPI void setupGameServerConnectionListener(::GameConnectionConnector const&);

    MCNAPI void update();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::GameplayUI::GameplayUIContext&,
        ::OreUI::Router&,
        ::IOptionRegistry&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const ISceneStack>>
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
    MCNAPI ::EventResult $onLocalPlayerDeath(::IClientInstance&, ::LocalPlayer&);

    MCNAPI ::EventResult $onLocalPlayerRespawn(::IClientInstance&, ::LocalPlayer&);

    MCNAPI ::EventResult $onLocalPlayerOpenInventory(::IClientInstance&, ::LocalPlayer&);

    MCNAPI ::EventResult $onLocalPlayerOpenTrading(::IClientInstance&, ::LocalPlayer&, ::ActorUniqueID const&, bool);

    MCNAPI ::EventResult
    $onPlayerCreated(::LocalPlayer&, ::persona::ProfileType, std::string const&, bool, ::NetworkType);

    MCNAPI ::EventResult $onEvent(::PlayerNotificationEvent const&);

    MCNAPI ::EventResult $onShowDataDrivenScreen(::LocalPlayer&, std::string const&, uint, std::optional<uint>);

    MCNAPI ::EventResult $onCloseDataDrivenScreen(::LocalPlayer&, uint);

    MCNAPI ::EventResult $onCloseAllDataDrivenScreens(::LocalPlayer&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class GameplayUIClient : public ::EventListenerDispatcher<::PlayerEventListener>,
                         public ::EventListenerDispatcher<::ItemEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::GameplayUI::GameplayUIContext&>                    mContext;
    ::ll::TypedStorage<8, 8, ::OreUI::Router&>                                    mRouter;
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>                                  mOptions;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const>> mSceneStack;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                    mConnectedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                    mClientSideCloseSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    GameplayUIClient& operator=(GameplayUIClient const&);
    GameplayUIClient(GameplayUIClient const&);
    GameplayUIClient();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onPlayerCreated(
        ::LocalPlayer& player,
        ::persona::ProfileType,
        ::std::string const&,
        bool,
        ::NetworkType
    ) /*override*/;

    virtual ::EventResult onEvent(::PlayerNotificationEvent const& event) /*override*/;

    virtual ::EventResult onLocalPlayerDeath(::IClientInstance& client, ::LocalPlayer& player) /*override*/;

    virtual ::EventResult onLocalPlayerRespawn(::IClientInstance& client, ::LocalPlayer& player) /*override*/;

    virtual ::EventResult onLocalPlayerOpenInventory(::IClientInstance&, ::LocalPlayer& localPlayer) /*override*/;

    virtual ::EventResult
    onLocalPlayerOpenTrading(::IClientInstance&, ::LocalPlayer&, ::ActorUniqueID const& uniqueID, bool) /*override*/;

    virtual ::EventResult onShowDataDrivenScreen(
        ::LocalPlayer&,
        ::std::string const&  screenId,
        uint                  formId,
        ::std::optional<uint> dataInstanceId
    ) /*override*/;

    virtual ::EventResult onCloseDataDrivenScreen(::LocalPlayer&, uint formId) /*override*/;

    virtual ::EventResult onCloseAllDataDrivenScreens(::LocalPlayer&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void onJoinWorld(::IClientInstance& client);

    MCAPI void setupGameServerConnectionListener(::GameConnectionConnector const& gameConnectionConnector);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult
    $onPlayerCreated(::LocalPlayer& player, ::persona::ProfileType, ::std::string const&, bool, ::NetworkType);

    MCAPI ::EventResult $onEvent(::PlayerNotificationEvent const& event);

    MCAPI ::EventResult $onLocalPlayerDeath(::IClientInstance& client, ::LocalPlayer& player);

    MCAPI ::EventResult $onLocalPlayerRespawn(::IClientInstance& client, ::LocalPlayer& player);

    MCAPI ::EventResult $onLocalPlayerOpenInventory(::IClientInstance&, ::LocalPlayer& localPlayer);

    MCAPI ::EventResult
    $onLocalPlayerOpenTrading(::IClientInstance&, ::LocalPlayer&, ::ActorUniqueID const& uniqueID, bool);

    MCAPI ::EventResult $onShowDataDrivenScreen(
        ::LocalPlayer&,
        ::std::string const&  screenId,
        uint                  formId,
        ::std::optional<uint> dataInstanceId
    );

    MCAPI ::EventResult $onCloseDataDrivenScreen(::LocalPlayer&, uint formId);

    MCAPI ::EventResult $onCloseAllDataDrivenScreens(::LocalPlayer&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEventListenerDispatcherPlayerEventListener();

    MCNAPI static void** $vftableForEventListenerDispatcherItemEventListener();
    // NOLINTEND
};
#else // @header-generator platform
class GameplayUIClient {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GameplayUI
