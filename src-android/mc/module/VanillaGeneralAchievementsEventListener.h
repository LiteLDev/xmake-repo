#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/MinecraftEventing.h"
#include "mc/module/IAchievementsListener.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class BlockType;
class IAchievementEventDispatcher;
class ItemDescriptor;
class ItemInstance;
class Player;
struct ActorAcquiredItemEvent;
struct ActorDiedEvent;
struct ActorUniqueID;
struct DealKineticDamageComponent;
// clang-format on

class VanillaGeneralAchievementsEventListener : public ::IAchievementsListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<IAchievementEventDispatcher>> mDispatcher;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~VanillaGeneralAchievementsEventListener();

    virtual ::EventResult onBlockPlacedByPlayer(::Player&, ::Block const&, ::BlockPos const&, bool);

    virtual ::EventResult onPlayerKineticDamageDealt(::Player&, ::ActorUniqueID const&, ::DealKineticDamageComponent const&);

    virtual ::EventResult onPlayerCraftedItem(::Player&, ::ItemInstance const&, bool, bool, bool, int, int, int, bool, bool, std::vector<short> const&);

    virtual ::EventResult onItemSmelted(::Player&, ::ItemDescriptor const&, ::ItemDescriptor const&);

    virtual ::EventResult onActorMobInteraction(::Actor&, ::MinecraftEventing::InteractionType, ::ActorType);

    virtual ::EventResult onEvent(::ActorDiedEvent const&);

    virtual ::EventResult onEvent(::ActorAcquiredItemEvent const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _handlePickedUpAchievements(::Player&, ::ItemInstance const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onBlockPlacedByPlayer(::Player&, ::Block const&, ::BlockPos const&, bool);

    MCNAPI ::EventResult
    $onPlayerKineticDamageDealt(::Player&, ::ActorUniqueID const&, ::DealKineticDamageComponent const&);

    MCNAPI ::EventResult $onPlayerCraftedItem(
        ::Player&,
        ::ItemInstance const&,
        bool,
        bool,
        bool,
        int,
        int,
        int,
        bool,
        bool,
        std::vector<short> const&
    );

    MCNAPI ::EventResult $onItemSmelted(::Player&, ::ItemDescriptor const&, ::ItemDescriptor const&);

    MCNAPI ::EventResult $onActorMobInteraction(::Actor&, ::MinecraftEventing::InteractionType, ::ActorType);

    MCNAPI ::EventResult $onEvent(::ActorDiedEvent const&);

    MCNAPI ::EventResult $onEvent(::ActorAcquiredItemEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
