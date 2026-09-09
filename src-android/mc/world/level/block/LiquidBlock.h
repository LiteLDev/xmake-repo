#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/LiquidBlockBase.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Material;
class Random;
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class LiquidBlock : public ::LiquidBlockBase {
public:
    // prevent constructor by default
    LiquidBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LiquidBlock();

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual void entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LiquidBlock(std::string const&, int, ::Material const&);

    MCNAPI int _getSlopeDistance(::BlockSource&, ::BlockPos const&, int, int) const;

    MCNAPI int _getStartingPass(::BlockSource const&, ::BlockPos const&) const;

    MCNAPI bool _isLiquidBlocking(::BlockSource&, ::BlockPos const&, ::BlockPos const&, uchar) const;

    MCNAPI bool _tick(::BlockSource&, ::BlockPos const&, ::Random&, bool) const;

    MCNAPI void _trySpreadTo(::BlockSource&, ::BlockPos const&, int, ::BlockPos const&, uchar) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent&) const;

    MCNAPI bool shouldBecomeStatic(::BlockSource&, ::BlockPos const&, ::Random&) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::Material const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI void $entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
