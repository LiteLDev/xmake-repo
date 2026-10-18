#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ReplayCorrectionResult.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
struct ActorDefinitionModifier;
struct ActorNotificationEvent;
// clang-format on

class ActorEventListener {
public:
    // ActorEventListener inner types define
    using EventType = ::ActorNotificationEvent;

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ActorEventListener();
#else // @header-generator platform
    virtual ~ActorEventListener() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ActorNotificationEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::ActorNotificationEvent const& event);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onActorDefinitionEvent(::Actor&, std::string const&, std::vector<ActorDefinitionModifier>&);
#else // @header-generator platform
    virtual ::EventResult onActorDefinitionEvent(
        ::Actor&                                  actor,
        ::std::string const&                      event,
        ::std::vector<::ActorDefinitionModifier>& modifiers
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onActorTick(::Actor&);
#else // @header-generator platform
    virtual ::EventResult onActorTick(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onActorSneakChanged(::Actor&, bool);
#else // @header-generator platform
    virtual ::EventResult onActorSneakChanged(::Actor& actor, bool isSneaking);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onActorStartRiding(::Actor&, ::Actor&);
#else // @header-generator platform
    virtual ::EventResult onActorStartRiding(::Actor& actor, ::Actor& vehicle);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onActorStopRiding(::Actor&, bool, bool, bool);
#else // @header-generator platform
    virtual ::EventResult
    onActorStopRiding(::Actor& actor, bool exitFromPassenger, bool actorIsBeingDestroyed, bool switchingVehicles);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onActorCreated(::Actor&, ::ActorInitializationMethod);
#else // @header-generator platform
    virtual ::EventResult onActorCreated(::Actor& actor, ::ActorInitializationMethod initializationMethod);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onActorCreationAttemptFailed(::Actor&, std::string_view);
#else // @header-generator platform
    virtual ::EventResult onActorCreationAttemptFailed(::Actor& actor, ::std::string_view message);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onActorTeleported(::Actor&);
#else // @header-generator platform
    virtual ::EventResult onActorTeleported(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onActorAttackedActor(::Actor&, ::Actor&);
#else // @header-generator platform
    virtual ::EventResult onActorAttackedActor(::Actor& actor, ::Actor& target);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onActorMobInteraction(::Actor&, ::MinecraftEventing::InteractionType, ::ActorType);
#else // @header-generator platform
    virtual ::EventResult onActorMobInteraction(
        ::Actor&                             actor,
        ::MinecraftEventing::InteractionType interactionType,
        ::ActorType                          interactedActorType
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onActorTargetAcquired(::Actor&, ::Actor&);
#else // @header-generator platform
    virtual ::EventResult onActorTargetAcquired(::Actor& actor, ::Actor& target);
#endif // @header-generator platform

    virtual ::EventResult onPlayerAuthInputReceived(::Player&);

    virtual ::EventResult onPlayerAuthInputApplied(::Player&);

    virtual ::EventResult onPlayerAIStepBegin(::Player&);

    virtual ::EventResult onPlayerAIStepEnd(::Player&);

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onActorMovementRewindCorrected(::Actor&, ulong, ::ReplayCorrectionResult);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::EventResult onActorMovementRewindCorrected(::Actor&, uint64, ::ReplayCorrectionResult);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ActorNotificationEvent const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onActorDefinitionEvent(
        ::Actor&                                  actor,
        ::std::string const&                      event,
        ::std::vector<::ActorDefinitionModifier>& modifiers
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onActorDefinitionEvent(::Actor&, std::string const&, std::vector<ActorDefinitionModifier>&);
#else // @header-generator platform
    MCFOLD ::EventResult $onActorTick(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onActorTick(::Actor&);
#else // @header-generator platform
    MCFOLD ::EventResult $onActorSneakChanged(::Actor& actor, bool isSneaking);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onActorSneakChanged(::Actor&, bool);
#else // @header-generator platform
    MCFOLD ::EventResult $onActorStartRiding(::Actor& actor, ::Actor& vehicle);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onActorStartRiding(::Actor&, ::Actor&);
#else // @header-generator platform
    MCFOLD ::EventResult
    $onActorStopRiding(::Actor& actor, bool exitFromPassenger, bool actorIsBeingDestroyed, bool switchingVehicles);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onActorStopRiding(::Actor&, bool, bool, bool);
#else // @header-generator platform
    MCFOLD ::EventResult $onActorCreated(::Actor& actor, ::ActorInitializationMethod initializationMethod);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onActorCreated(::Actor&, ::ActorInitializationMethod);
#else // @header-generator platform
    MCFOLD ::EventResult $onActorCreationAttemptFailed(::Actor& actor, ::std::string_view message);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onActorCreationAttemptFailed(::Actor&, std::string_view);
#else // @header-generator platform
    MCFOLD ::EventResult $onActorTeleported(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onActorTeleported(::Actor&);
#else // @header-generator platform
    MCFOLD ::EventResult $onActorAttackedActor(::Actor& actor, ::Actor& target);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onActorAttackedActor(::Actor&, ::Actor&);
#else // @header-generator platform
    MCFOLD ::EventResult $onActorMobInteraction(
        ::Actor&                             actor,
        ::MinecraftEventing::InteractionType interactionType,
        ::ActorType                          interactedActorType
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onActorMobInteraction(::Actor&, ::MinecraftEventing::InteractionType, ::ActorType);
#else // @header-generator platform
    MCFOLD ::EventResult $onActorTargetAcquired(::Actor& actor, ::Actor& target);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onActorTargetAcquired(::Actor&, ::Actor&);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerAuthInputReceived(::Player&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerAuthInputReceived(::Player&);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerAuthInputApplied(::Player&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerAuthInputApplied(::Player&);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerAIStepBegin(::Player&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerAIStepBegin(::Player&);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerAIStepEnd(::Player&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerAIStepEnd(::Player&);
#else // @header-generator platform
    MCFOLD ::EventResult $onActorMovementRewindCorrected(::Actor&, uint64, ::ReplayCorrectionResult);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onActorMovementRewindCorrected(::Actor&, ulong, ::ReplayCorrectionResult);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCFOLD ::EventResult $onEvent(::ActorNotificationEvent const& event);
#endif


#endif // @header-generator platform
    // NOLINTEND
};
