#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/RotatedPillarBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Player;
namespace BlockEvents { class ActorEvent; }
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class CreakingHeartBlock : public ::ActorBlockBase<RotatedPillarBlock> {
public:
    // prevent constructor by default
    CreakingHeartBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CreakingHeartBlock();

    virtual void onFillBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual ::Block const* playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;

    virtual bool hasComparatorSignal() const;

    virtual int getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    virtual int getVariant(::Block const&) const;

    virtual void onExploded(::BlockSource&, ::BlockPos const&, ::Actor*) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CreakingHeartBlock(std::string const&, int);

    MCNAPI void _onPlace(::BlockEvents::BlockPlaceEvent&) const;

    MCNAPI bool isInPaleOakPillar(::BlockSource const&, ::BlockPos const&) const;

    MCNAPI void onEvent(::BlockEvents::ActorEvent&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;
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
    MCNAPI void $onFillBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI ::Block const* $playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;

    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int $getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI void $onExploded(::BlockSource&, ::BlockPos const&, ::Actor*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
