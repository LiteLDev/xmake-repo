#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class IRandom;
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class NyliumBlock : public ::BlockType {
public:
    // NyliumBlock inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct WarpedNyliumBlockVegetationProbabilities;
#else // @header-generator platform
#endif // @header-generator platform
    struct CrimsonNyliumBlockVegetationProbabilities;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct WarpedNyliumBlockVegetationProbabilities;
#endif // @header-generator platform
    // clang-format on

    // NyliumBlock inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct WarpedNyliumBlockVegetationProbabilities {};

#else // @header-generator platform
#endif // @header-generator platform
    struct CrimsonNyliumBlockVegetationProbabilities {};

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    NyliumBlock();
#else // @header-generator platform
    struct WarpedNyliumBlockVegetationProbabilities {};
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~NyliumBlock();
#else // @header-generator platform
    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;

    virtual bool canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* entity, ::FertilizerType fType) const
        /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI NyliumBlock(std::string const&, int);

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent&) const;
#else // @header-generator platform
    MCAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool canBeNylium(::BlockSource const&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI static bool _isGrowthBlockingHalfSlabBlock(::Block const& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Block const& crimsonBlockProvider(::IRandom&);
#else // @header-generator platform
    MCAPI static bool _isGrowthBlockingStairBlock(::Block const& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Block const& netherSproutBlockProvider(::IRandom&);
#else // @header-generator platform
    MCAPI static ::Block const& crimsonBlockProvider(::IRandom& random);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Block const& warpedBlockProvider(::IRandom&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI static ::Block const& netherSproutBlockProvider(::IRandom& random);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
    MCAPI static ::Block const& warpedBlockProvider(::IRandom& random);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;
#else // @header-generator platform
    MCFOLD bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    MCAPI bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* entity, ::FertilizerType fType) const;


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
