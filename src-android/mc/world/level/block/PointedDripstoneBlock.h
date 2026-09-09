#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"
#include "mc/world/level/block/SpeleothemBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockEntityFallOnEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class PointedDripstoneBlock : public ::SpeleothemBlock {
public:
    // prevent constructor by default
    PointedDripstoneBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PointedDripstoneBlock();

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    virtual bool canGrow(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual void randomTick(::BlockEvents::BlockRandomTickEvent&) const;

    virtual bool _canGrow(::Block const&, ::Block const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PointedDripstoneBlock(std::string const&, int);

    MCNAPI void fillCauldron(::BlockSource&, ::BlockPos const&) const;

    MCNAPI std::optional<SharedTypes::v1_26_20::MaterialType>
           getCauldronFillLiquidType(::BlockSource&, ::BlockPos const&) const;

    MCNAPI std::optional<BlockPos> getStalactiteTipBelowFillSource(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _canDrip(::BlockSource&, ::BlockPos const&);

    MCNAPI static bool _canFillCauldron(::Block const&);

    MCNAPI static std::optional<BlockPos> _findFillableCauldronBelowStalactiteTip(
        ::BlockSource&,
        ::BlockPos const&,
        ::SharedTypes::v1_26_20::MaterialType const
    );

    MCNAPI static void addDripParticle(::BlockSource&, ::BlockPos const&, ::ParticleType const);

    MCNAPI static std::optional<BlockPos> findStalactiteTipAboveCauldron(::BlockSource&, ::BlockPos const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& MAX_HORIZONTAL_OFFSET();
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
    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;

    MCNAPI bool $canGrow(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI void $randomTick(::BlockEvents::BlockRandomTickEvent&) const;

    MCNAPI bool $_canGrow(::Block const&, ::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
