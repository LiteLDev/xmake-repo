#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/events/NetworkType.h"
#include "mc/world/actor/player/persona/ProfileType.h"
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/BlockEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ItemEventListener.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class ItemDescriptor;
class ItemEnchants;
class ItemInstance;
class ItemStack;
class Level;
class LocalPlayer;
class Player;
struct ActorAcquiredItemEvent;
struct ActorDroppedItemEvent;
struct ActorUseItemEvent;
struct NewBlockID;
// clang-format on

class VanillaTelemetryEventListener : public ::EventListenerDispatcher<BlockEventListener>,
                                      public ::EventListenerDispatcher<ItemEventListener>,
                                      public ::EventListenerDispatcher<PlayerEventListener>,
                                      public ::EventListenerDispatcher<ActorEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mLastPosition;
    ::ll::TypedStorage<4, 4, float>   mDistanceSinceTravelledEvent;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~VanillaTelemetryEventListener();

    virtual ::EventResult onBlockPlacedByPlayer(::Player&, ::Block const&, ::BlockPos const&, bool);

    virtual ::EventResult onUnknownBlockReceived(::Level&, ::NewBlockID const&, ushort);

    virtual ::EventResult onPlayerMove(::Player&);

    virtual ::EventResult onPlayerCreated(::LocalPlayer&, ::persona::ProfileType const, std::string const&, bool, ::NetworkType);

    virtual ::EventResult onPlayerEquippedArmor(::Player&, ::ItemDescriptor const&);

    virtual ::EventResult onPlayerNamedItem(::Player&, ::ItemDescriptor const&);

    virtual ::EventResult onPlayerItemUseInteraction(::Player&, ::ItemInstance const&);

    virtual ::EventResult onPlayerItemPlaceInteraction(::Player&, ::ItemInstance const&);

    virtual ::EventResult onPlayerItemEquipped(::Player&, ::ItemInstance const&, int);

    virtual ::EventResult onPlayerCraftedItem(::Player&, ::ItemInstance const&, bool, bool, bool, int, int, int, bool, bool, std::vector<short> const&);

    virtual ::EventResult onEvent(::ActorDroppedItemEvent const&);

    virtual ::EventResult onEvent(::ActorAcquiredItemEvent const&);

    virtual ::EventResult onEvent(::ActorUseItemEvent const&);

    virtual ::EventResult onItemSmelted(::Player&, ::ItemDescriptor const&, ::ItemDescriptor const&);

    virtual ::EventResult onPlayerEnchantedItem(::Player&, ::ItemStack const&, ::ItemEnchants const&);
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
    MCNAPI ::EventResult $onBlockPlacedByPlayer(::Player&, ::Block const&, ::BlockPos const&, bool);

    MCNAPI ::EventResult $onUnknownBlockReceived(::Level&, ::NewBlockID const&, ushort);

    MCNAPI ::EventResult $onPlayerMove(::Player&);

    MCNAPI ::EventResult
    $onPlayerCreated(::LocalPlayer&, ::persona::ProfileType const, std::string const&, bool, ::NetworkType);

    MCNAPI ::EventResult $onPlayerEquippedArmor(::Player&, ::ItemDescriptor const&);

    MCNAPI ::EventResult $onPlayerNamedItem(::Player&, ::ItemDescriptor const&);

    MCNAPI ::EventResult $onPlayerItemUseInteraction(::Player&, ::ItemInstance const&);

    MCNAPI ::EventResult $onPlayerItemPlaceInteraction(::Player&, ::ItemInstance const&);

    MCNAPI ::EventResult $onPlayerItemEquipped(::Player&, ::ItemInstance const&, int);

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

    MCNAPI ::EventResult $onEvent(::ActorDroppedItemEvent const&);

    MCNAPI ::EventResult $onEvent(::ActorAcquiredItemEvent const&);

    MCNAPI ::EventResult $onEvent(::ActorUseItemEvent const&);

    MCNAPI ::EventResult $onItemSmelted(::Player&, ::ItemDescriptor const&, ::ItemDescriptor const&);

    MCNAPI ::EventResult $onPlayerEnchantedItem(::Player&, ::ItemStack const&, ::ItemEnchants const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
