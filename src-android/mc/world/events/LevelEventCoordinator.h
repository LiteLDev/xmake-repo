#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/LevelEventListener.h"
#include "mc/world/events/LevelGameplayEvent.h"
#include "mc/world/events/MutableLevelGameplayEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class GameRules;
class IActorManagerConnector;
class IGameplayUserManagerConnector;
class Level;
class LevelGameplayHandler;
struct GameRuleId;
// clang-format on

class LevelEventCoordinator : public ::EventCoordinator<LevelEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<LevelGameplayHandler>> mLevelGameplayHandler;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mGameRuleChangeSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mOnRemoveActorEntityReferencesSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mPostReloadActorAddedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mOnGameplayUserAddedSubscription;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelEventCoordinator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelEventCoordinator();

    MCNAPI void _onGameplayUserAdded(::EntityContext&);

    MCNAPI void _postReloadActorAdded(::Actor&, ::ActorInitializationMethod);

    MCNAPI ::LevelGameplayHandler& getLevelGameplayHandler();

    MCNAPI void registerGameRules(::GameRules&);

    MCNAPI void registerLevelGameplayHandler(std::unique_ptr<LevelGameplayHandler>&&);

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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
