#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/BaseRailBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
// clang-format on

class DetectorRailBlock : public ::BaseRailBlock {
public:
    // prevent constructor by default
    DetectorRailBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DetectorRailBlock();

    virtual bool isSignalSource() const;

    virtual bool shouldConnectToRedstone(::BlockSource&, ::BlockPos const&, ::Direction::Type) const;

    virtual void setupRedstoneComponent(::BlockSource&, ::BlockPos const&) const;

    virtual bool hasComparatorSignal() const;

    virtual int getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    virtual int getVariant(::Block const&) const;

    virtual void entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;

    virtual void tick(::BlockEvents::BlockQueuedTickEvent&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DetectorRailBlock(std::string const&, int);

    MCNAPI void _checkPressed(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void _onRedstoneUpdateDetectorRail(::BlockEvents::BlockRedstoneUpdateEvent&) const;
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

    MCNAPI bool $shouldConnectToRedstone(::BlockSource&, ::BlockPos const&, ::Direction::Type) const;

    MCNAPI void $setupRedstoneComponent(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int $getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI void $entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;

    MCNAPI void $tick(::BlockEvents::BlockQueuedTickEvent&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
