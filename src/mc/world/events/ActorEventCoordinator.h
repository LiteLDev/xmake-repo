#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components/ReplayCorrectionResult.h"
#include "mc/events/MinecraftEventing.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/gameplayhandlers/CoordinatorResult.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/events/ActorEventListener.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/events/ActorGameplayEvent.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutableActorGameplayEvent.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
class ActorEventListener;
#endif // @header-generator platform
class ActorGameplayHandler;
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
#else // @header-generator platform
#endif // @header-generator platform
class IActorManagerConnector;
class IGameplayUserManagerConnector;
#if defined(LL_PLAT_A) // @header-generator platform
class Player;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class ActorEventCoordinator : public ::EventCoordinator<ActorEventListener> {
#else // @header-generator platform
class ActorEventCoordinator : public ::EventCoordinator<::ActorEventListener> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorGameplayHandler>> mActorGameplayHandler;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mOnGameplayUserAddedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mPostReloadActorAddedSubscription;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorEventCoordinator();
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorGameplayHandler>> mActorGameplayHandler;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mOnGameplayUserAddedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mPostReloadActorAddedSubscription;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _postReloadActorAdded(::Actor&, ::ActorInitializationMethod);
#else // @header-generator platform
    MCAPI void registerWithActorManagerEvents(::IActorManagerConnector& actorManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorGameplayHandler& getActorGameplayHandler();
#else // @header-generator platform
    MCAPI void registerWithGameplayUserManagerEvents(::IGameplayUserManagerConnector& gameplayUserManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerActorGameplayHandler(std::unique_ptr<ActorGameplayHandler>&&);
#else // @header-generator platform
    MCAPI ::CoordinatorResult sendEvent(::EventRef<::MutableActorGameplayEvent<::CoordinatorResult>> event);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void sendEvent(::EventRef<::ActorGameplayEvent<void>> const& event);
#endif // @header-generator platform
    // NOLINTEND
};
