#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class PulseCapacitor;
struct Tick;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class ObserverBlock : public ::BlockType {
public:
    // prevent constructor by default
    ObserverBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ObserverBlock();

    virtual bool isSignalSource() const;

    virtual bool isValidAuxValue(int) const;

    virtual bool shouldConnectToRedstone(::BlockSource&, ::BlockPos const&, ::Direction::Type) const;

    virtual void movedByPiston(::BlockSource&, ::BlockPos const&) const;

    virtual void setupRedstoneComponent(::BlockSource&, ::BlockPos const&) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual int getVariant(::Block const&) const;

    virtual ::Block const& getRenderBlock() const;

    virtual uchar getMappedFace(uchar, ::Block const&) const;

    virtual ::Flip getFaceFlip(uchar, ::Block const&) const;

    virtual void onRemove(::BlockSource&, ::BlockPos const&) const;

    virtual bool allowStateMismatchOnPlacement(::Block const&, ::Block const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ObserverBlock(std::string const&, int);

    MCNAPI void _installCircuit(::BlockSource&, ::BlockPos const&, bool, bool) const;

    MCNAPI void _updateState(::BlockSource&, ::BlockPos const&, ::PulseCapacitor&, bool) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Tick const& MAX_TICK_DELAY();
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
    MCNAPI bool $isSignalSource() const;

    MCNAPI bool $isValidAuxValue(int) const;

    MCNAPI bool $shouldConnectToRedstone(::BlockSource&, ::BlockPos const&, ::Direction::Type) const;

    MCNAPI void $movedByPiston(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $setupRedstoneComponent(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI ::Block const& $getRenderBlock() const;

    MCNAPI uchar $getMappedFace(uchar, ::Block const&) const;

    MCNAPI ::Flip $getFaceFlip(uchar, ::Block const&) const;

    MCNAPI void $onRemove(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $allowStateMismatchOnPlacement(::Block const&, ::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
