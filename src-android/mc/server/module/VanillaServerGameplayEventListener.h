#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/BlockEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Player;
struct ActorHurtEvent;
struct PlayerDamageEvent;
struct PlayerOpenContainerEvent;
// clang-format on

class VanillaServerGameplayEventListener : public ::EventListenerDispatcher<ActorEventListener>,
                                           public ::EventListenerDispatcher<BlockEventListener>,
                                           public ::EventListenerDispatcher<PlayerEventListener>,
                                           public ::EventListenerDispatcher<LevelEventListener> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VanillaServerGameplayEventListener();

    virtual ::EventResult onActorCreated(::Actor&, ::ActorInitializationMethod);

    virtual ::EventResult onActorCreationAttemptFailed(::Actor&, std::string_view);

    virtual ::EventResult onEvent(::ActorHurtEvent const&);

    virtual ::EventResult onBlockInteractedWith(::Player&, ::BlockPos const&);

    virtual ::EventResult onBlockPlacedByPlayer(::Player&, ::Block const&, ::BlockPos const&, bool);

    virtual ::EventResult onEvent(::PlayerOpenContainerEvent const&);

    virtual ::EventResult onEvent(::PlayerDamageEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onActorCreated(::Actor&, ::ActorInitializationMethod);

    MCNAPI ::EventResult $onActorCreationAttemptFailed(::Actor&, std::string_view);

    MCNAPI ::EventResult $onEvent(::ActorHurtEvent const&);

    MCNAPI ::EventResult $onBlockInteractedWith(::Player&, ::BlockPos const&);

    MCNAPI ::EventResult $onBlockPlacedByPlayer(::Player&, ::Block const&, ::BlockPos const&, bool);

    MCNAPI ::EventResult $onEvent(::PlayerOpenContainerEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerDamageEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
