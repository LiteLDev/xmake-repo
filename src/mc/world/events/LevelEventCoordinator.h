#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/gameplayhandlers/CoordinatorResult.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/events/EventCoordinator.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/events/EventRef.h"
#include "mc/world/events/LevelEventListener.h"
#include "mc/world/events/LevelGameplayEvent.h"
#include "mc/world/events/MutableLevelGameplayEvent.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class GameRules;
class IActorManagerConnector;
class IGameplayUserManagerConnector;
#if defined(LL_PLAT_A) // @header-generator platform
class Level;
#else // @header-generator platform
class LevelEventListener;
#endif // @header-generator platform
class LevelGameplayHandler;
#if defined(LL_PLAT_A) // @header-generator platform
struct GameRuleId;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class LevelEventCoordinator : public ::EventCoordinator<LevelEventListener> {
#else // @header-generator platform
class LevelEventCoordinator : public ::EventCoordinator<::LevelEventListener> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<LevelGameplayHandler>> mLevelGameplayHandler;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mGameRuleChangeSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mOnRemoveActorEntityReferencesSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mPostReloadActorAddedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mOnGameplayUserAddedSubscription;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LevelGameplayHandler>> mLevelGameplayHandler;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mGameRuleChangeSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mOnRemoveActorEntityReferencesSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mPostReloadActorAddedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mOnGameplayUserAddedSubscription;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LevelEventCoordinator();
#else // @header-generator platform
    virtual ~LevelEventCoordinator() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LevelEventCoordinator();
#else // @header-generator platform
    MCAPI void _onGameplayUserAdded(::EntityContext& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onGameplayUserAdded(::EntityContext&);
#else // @header-generator platform
    MCAPI void _postReloadActorAdded(::Actor& actor, ::ActorInitializationMethod);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _postReloadActorAdded(::Actor&, ::ActorInitializationMethod);
#else // @header-generator platform
    MCAPI void registerGameRules(::GameRules& gameRules);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LevelGameplayHandler& getLevelGameplayHandler();
#else // @header-generator platform
    MCAPI void registerWithActorManagerEvents(::IActorManagerConnector& actorManagerConnector, bool isClientSide);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerGameRules(::GameRules&);
#else // @header-generator platform
    MCAPI void registerWithGameplayUserManagerEvents(::IGameplayUserManagerConnector& gameplayUserManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerLevelGameplayHandler(std::unique_ptr<LevelGameplayHandler>&&);
#else // @header-generator platform
    MCAPI void sendLevelRemovedActor(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerWithActorManagerEvents(::IActorManagerConnector&, bool);

    MCNAPI void registerWithGameplayUserManagerEvents(::IGameplayUserManagerConnector&);

    MCNAPI ::CoordinatorResult sendEvent(::EventRef<MutableLevelGameplayEvent<CoordinatorResult>>);

    MCNAPI void sendEvent(::EventRef<LevelGameplayEvent<void>> const&);

    MCNAPI void sendLevelInitialized(::Level&);

    MCNAPI void sendLevelRemovedActor(::Actor&);

    MCNAPI void sendLevelTick(::Level&);

    MCNAPI void sendLevelTickEnd(::Level&);

    MCNAPI void sendLevelTickStart(::Level&);

    MCNAPI void sendLevelWeatherChanged(std::string const&, bool, bool, bool, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void sendLevelWeatherChanged(
        ::std::string const& dimension,
        bool                 wasRaining,
        bool                 wasLightning,
        bool                 isRaining,
        bool                 isLightning
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
