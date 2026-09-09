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
    // clang-format off
    virtual ~ActorEventListener();

    virtual ::EventResult onEvent(::ActorNotificationEvent const&);

    virtual ::EventResult onActorDefinitionEvent(::Actor&, std::string const&, std::vector<ActorDefinitionModifier>&);

    virtual ::EventResult onActorTick(::Actor&);

    virtual ::EventResult onActorSneakChanged(::Actor&, bool);

    virtual ::EventResult onActorStartRiding(::Actor&, ::Actor&);

    virtual ::EventResult onActorStopRiding(::Actor&, bool, bool, bool);

    virtual ::EventResult onActorCreated(::Actor&, ::ActorInitializationMethod);

    virtual ::EventResult onActorCreationAttemptFailed(::Actor&, std::string_view);

    virtual ::EventResult onActorTeleported(::Actor&);

    virtual ::EventResult onActorAttackedActor(::Actor&, ::Actor&);

    virtual ::EventResult onActorMobInteraction(::Actor&, ::MinecraftEventing::InteractionType, ::ActorType);

    virtual ::EventResult onActorTargetAcquired(::Actor&, ::Actor&);

    virtual ::EventResult onPlayerAuthInputReceived(::Player&);

    virtual ::EventResult onPlayerAuthInputApplied(::Player&);

    virtual ::EventResult onPlayerAIStepBegin(::Player&);

    virtual ::EventResult onPlayerAIStepEnd(::Player&);

    virtual ::EventResult onActorMovementRewindCorrected(::Actor&, ulong, ::ReplayCorrectionResult);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::ActorNotificationEvent const&);

    MCNAPI ::EventResult $onActorDefinitionEvent(::Actor&, std::string const&, std::vector<ActorDefinitionModifier>&);

    MCNAPI ::EventResult $onActorTick(::Actor&);

    MCNAPI ::EventResult $onActorSneakChanged(::Actor&, bool);

    MCNAPI ::EventResult $onActorStartRiding(::Actor&, ::Actor&);

    MCNAPI ::EventResult $onActorStopRiding(::Actor&, bool, bool, bool);

    MCNAPI ::EventResult $onActorCreated(::Actor&, ::ActorInitializationMethod);

    MCNAPI ::EventResult $onActorCreationAttemptFailed(::Actor&, std::string_view);

    MCNAPI ::EventResult $onActorTeleported(::Actor&);

    MCNAPI ::EventResult $onActorAttackedActor(::Actor&, ::Actor&);

    MCNAPI ::EventResult $onActorMobInteraction(::Actor&, ::MinecraftEventing::InteractionType, ::ActorType);

    MCNAPI ::EventResult $onActorTargetAcquired(::Actor&, ::Actor&);

    MCNAPI ::EventResult $onPlayerAuthInputReceived(::Player&);

    MCNAPI ::EventResult $onPlayerAuthInputApplied(::Player&);

    MCNAPI ::EventResult $onPlayerAIStepBegin(::Player&);

    MCNAPI ::EventResult $onPlayerAIStepEnd(::Player&);

    MCNAPI ::EventResult $onActorMovementRewindCorrected(::Actor&, ulong, ::ReplayCorrectionResult);
    // NOLINTEND
};
