#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Container;
class ItemStack;
class Player;
class Vec3;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
// clang-format on

class DispenserBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    DispenserBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DispenserBlock();

    virtual bool isContainerBlock() const;

    virtual ::Block const& getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    virtual bool hasComparatorSignal() const;

    virtual int getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    virtual int getVariant(::Block const&) const;

    virtual uchar getMappedFace(uchar, ::Block const&) const;

    virtual void onRemove(::BlockSource&, ::BlockPos const&) const;

    virtual bool isInteractiveBlock() const;

    virtual bool allowStateMismatchOnPlacement(::Block const&, ::Block const&) const;

    virtual int getTickDelay() const;

    virtual void dispenseFrom(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DispenserBlock(std::string const&, int);

    MCNAPI void _onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent&) const;

    MCNAPI void ejectItem(::BlockSource&, ::Vec3 const&, uchar, ::ItemStack const&, ::Container&, int, int) const;

    MCNAPI ::Vec3 getDispensePosition(::BlockSource&, ::Vec3 const&) const;

    MCNAPI uchar getFacing(::Block const&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void dropAllItemsFromContainer(::BlockSource&, ::BlockPos const&);

    MCNAPI static void ejectItem(::BlockSource&, ::Vec3 const&, uchar, ::ItemStack const&, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isContainerBlock() const;

    MCNAPI ::Block const& $getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int $getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI uchar $getMappedFace(uchar, ::Block const&) const;

    MCNAPI void $onRemove(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI bool $allowStateMismatchOnPlacement(::Block const&, ::Block const&) const;

    MCNAPI int $getTickDelay() const;

    MCNAPI void $dispenseFrom(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
