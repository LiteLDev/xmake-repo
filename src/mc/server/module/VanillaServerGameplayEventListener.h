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
#if defined(LL_PLAT_A) // @header-generator platform
class AABB;
#else // @header-generator platform
#endif // @header-generator platform
class Actor;
class Block;
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
struct ActorHurtEvent;
struct PlayerDamageEvent;
struct PlayerOpenContainerEvent;
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class VanillaServerGameplayEventListener : public ::EventListenerDispatcher<ActorEventListener>,
                                           public ::EventListenerDispatcher<BlockEventListener>,
                                           public ::EventListenerDispatcher<PlayerEventListener>,
                                           public ::EventListenerDispatcher<LevelEventListener> {
#else // @header-generator platform
class VanillaServerGameplayEventListener : public ::EventListenerDispatcher<::ActorEventListener>,
                                           public ::EventListenerDispatcher<::BlockEventListener>,
                                           public ::EventListenerDispatcher<::PlayerEventListener>,
                                           public ::EventListenerDispatcher<::LevelEventListener> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~VanillaServerGameplayEventListener();
#else // @header-generator platform
    virtual ::EventResult onEvent(::ActorHurtEvent const& actorHurtEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onActorCreated(::Actor&, ::ActorInitializationMethod);
#else // @header-generator platform
    virtual ::EventResult onEvent(::PlayerDamageEvent const& playerDamageEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onActorCreationAttemptFailed(::Actor&, std::string_view);
#else // @header-generator platform
    virtual ::EventResult onEvent(::PlayerOpenContainerEvent const& playerOpenContainerEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ActorHurtEvent const&);
#else // @header-generator platform
    virtual ::EventResult onActorCreationAttemptFailed(::Actor& actor, ::std::string_view message) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onBlockInteractedWith(::Player&, ::BlockPos const&);
#else // @header-generator platform
    virtual ::EventResult onActorCreated(::Actor& actor, ::ActorInitializationMethod initializationMethod) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onBlockPlacedByPlayer(::Player&, ::Block const&, ::BlockPos const&, bool);
#else // @header-generator platform
    virtual ::EventResult onBlockInteractedWith(::Player& player, ::BlockPos const& blockPos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::PlayerOpenContainerEvent const&);

    virtual ::EventResult onEvent(::PlayerDamageEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::EventResult onBlockPlacedByPlayer(
        ::Player&         player,
        ::Block const&    placedBlock,
        ::BlockPos const& pos,
        bool              isUnderwater
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onActorCreated(::Actor&, ::ActorInitializationMethod);
#else // @header-generator platform
    MCFOLD ::EventResult $onEvent(::ActorHurtEvent const& actorHurtEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onActorCreationAttemptFailed(::Actor&, std::string_view);
#else // @header-generator platform
    MCFOLD ::EventResult $onEvent(::PlayerDamageEvent const& playerDamageEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ActorHurtEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::PlayerOpenContainerEvent const& playerOpenContainerEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onBlockInteractedWith(::Player&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI ::EventResult $onActorCreationAttemptFailed(::Actor& actor, ::std::string_view message);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onBlockPlacedByPlayer(::Player&, ::Block const&, ::BlockPos const&, bool);
#else // @header-generator platform
    MCAPI ::EventResult $onActorCreated(::Actor& actor, ::ActorInitializationMethod initializationMethod);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::PlayerOpenContainerEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult $onBlockInteractedWith(::Player& player, ::BlockPos const& blockPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::PlayerDamageEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult
    $onBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool isUnderwater);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI static void** $vftableForEventListenerDispatcherLevelEventListener();

    MCNAPI static void** $vftableForEventListenerDispatcherActorEventListener();

    MCNAPI static void** $vftableForEventListenerDispatcherBlockEventListener();

    MCNAPI static void** $vftableForEventListenerDispatcherPlayerEventListener();
#endif // @header-generator platform
    // NOLINTEND
};
