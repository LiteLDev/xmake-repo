#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class BlockType;
class ItemInstance;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
// clang-format on

class ComparatorBlock : public ::ActorBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mOn;
    // NOLINTEND

public:
    // prevent constructor by default
    ComparatorBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ComparatorBlock();

    virtual bool isSignalSource() const;

    virtual int getDirectSignal(::BlockSource&, ::BlockPos const&, int) const;

    virtual bool shouldConnectToRedstone(::BlockSource&, ::BlockPos const&, ::Direction::Type) const;

    virtual void setupRedstoneComponent(::BlockSource&, ::BlockPos const&) const;

    virtual bool isPreservingMediumWhenPlaced(::BlockType const*) const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual void triggerEvent(::BlockSource&, ::BlockPos const&, int, int) const;

    virtual int getVariant(::Block const&) const;

    virtual bool canSpawnOn(::Actor*) const;

    virtual bool isInteractiveBlock() const;

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComparatorBlock(std::string const&, int, bool);

    MCNAPI void _installCircuit(::BlockSource&, ::BlockPos const&, bool) const;

    MCNAPI void _onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent&) const;

    MCNAPI void _refreshOutputState(::BlockSource&, ::BlockPos const&, int) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isSignalSource() const;

    MCNAPI int $getDirectSignal(::BlockSource&, ::BlockPos const&, int) const;

    MCNAPI bool $shouldConnectToRedstone(::BlockSource&, ::BlockPos const&, ::Direction::Type) const;

    MCNAPI void $setupRedstoneComponent(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $isPreservingMediumWhenPlaced(::BlockType const*) const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI void $triggerEvent(::BlockSource&, ::BlockPos const&, int, int) const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI bool $canSpawnOn(::Actor*) const;

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
