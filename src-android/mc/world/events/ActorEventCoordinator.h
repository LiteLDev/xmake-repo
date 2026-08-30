#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/entity/components/ReplayCorrectionResult.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/ActorGameplayEvent.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutableActorGameplayEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorGameplayHandler;
class EntityContext;
class IActorManagerConnector;
class IGameplayUserManagerConnector;
class Player;
// clang-format on

class ActorEventCoordinator : public ::EventCoordinator<ActorEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorGameplayHandler>> mActorGameplayHandler;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mOnGameplayUserAddedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mPostReloadActorAddedSubscription;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorEventCoordinator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _postReloadActorAdded(::Actor&, ::ActorInitializationMethod);

    MCNAPI ::ActorGameplayHandler& getActorGameplayHandler();

    MCNAPI void registerActorGameplayHandler(std::unique_ptr<ActorGameplayHandler>&&);

    MCNAPI void registerWithActorManagerEvents(::IActorManagerConnector&);

    MCNAPI void registerWithGameplayUserManagerEvents(::IGameplayUserManagerConnector&);

    MCNAPI void sendActorCreationAttemptFailed(::Actor&, std::string_view);

    MCNAPI void sendActorInteractedWithMob(::Actor&, ::MinecraftEventing::InteractionType, ::ActorType);

    MCNAPI void sendActorMovementRewindCorrected(::Actor&, ulong, ::ReplayCorrectionResult);

    MCNAPI void sendActorSneakChanged(::Actor&, bool);

    MCNAPI void sendActorStartRiding(::Actor&, ::Actor&);

    MCNAPI void sendActorStopRiding(::Actor&, bool, bool, bool);

    MCNAPI void sendActorTargetAcquired(::Actor&, ::Actor&);

    MCNAPI void sendActorTeleported(::Actor&);

    MCNAPI void sendActorTick(::Actor&);

    MCNAPI void sendClientPlayerAIStepBegin(::Player&);

    MCNAPI ::CoordinatorResult sendEvent(::EventRef<ActorGameplayEvent<CoordinatorResult>> const&);

    MCNAPI ::CoordinatorResult sendEvent(::EventRef<MutableActorGameplayEvent<CoordinatorResult>>);

    MCNAPI void sendEvent(::EventRef<ActorGameplayEvent<void>> const&);

    MCNAPI void sendEvent(::EventRef<MutableActorGameplayEvent<void>>);

    MCNAPI void sendServerPlayerAuthInputApplied(::Player&);

    MCNAPI void sendServerPlayerAuthInputReceived(::Player&);
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
