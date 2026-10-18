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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    PointedDripstoneBlock();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PointedDripstoneBlock();
#else // @header-generator platform
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
#else // @header-generator platform
    virtual void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canGrow(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool canGrow(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& stalactiteTipPos) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void randomTick(::BlockEvents::BlockRandomTickEvent&) const;

    virtual bool _canGrow(::Block const&, ::Block const&) const;
#else // @header-generator platform
    virtual bool _canGrow(::Block const& rootBlock, ::Block const& aboveRootLiquidBlock) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PointedDripstoneBlock(std::string const&, int);
#else // @header-generator platform
    MCAPI void fillCauldron(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fillCauldron(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::std::optional<::SharedTypes::v1_26_20::MaterialType>
    getCauldronFillLiquidType(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<SharedTypes::v1_26_20::MaterialType>
           getCauldronFillLiquidType(::BlockSource&, ::BlockPos const&) const;

    MCNAPI std::optional<BlockPos> getStalactiteTipBelowFillSource(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent&) const;
#else // @header-generator platform
    MCAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent& eventData) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool _canDrip(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI static bool _canDrip(::BlockSource& region, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool _canFillCauldron(::Block const&);
#else // @header-generator platform
    MCAPI static bool _canFillCauldron(::Block const& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<BlockPos> _findFillableCauldronBelowStalactiteTip(
        ::BlockSource&,
        ::BlockPos const&,
        ::SharedTypes::v1_26_20::MaterialType const
#else // @header-generator platform
    MCAPI static ::std::optional<::BlockPos> _findFillableCauldronBelowStalactiteTip(
        ::BlockSource&                        region,
        ::BlockPos const&                     stalactiteTipPos,
        ::SharedTypes::v1_26_20::MaterialType liquidType
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void addDripParticle(::BlockSource&, ::BlockPos const&, ::ParticleType const);
#else // @header-generator platform
    MCAPI static void addDripParticle(::BlockSource& region, ::BlockPos const& pos, ::ParticleType particleType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::std::optional<::BlockPos>
    findStalactiteTipAboveCauldron(::BlockSource& region, ::BlockPos const& cauldronPos);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
#else // @header-generator platform
    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canGrow(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI void $randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $randomTick(::BlockEvents::BlockRandomTickEvent&) const;
#else // @header-generator platform
    MCAPI bool $canGrow(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& stalactiteTipPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_canGrow(::Block const&, ::Block const&) const;
#else // @header-generator platform
    MCAPI bool $_canGrow(::Block const& rootBlock, ::Block const& aboveRootLiquidBlock) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
