#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/ResourceDropsCause.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockActor;
#else // @header-generator platform
#endif // @header-generator platform
class IBlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class ILevel;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStack;
#if defined(LL_PLAT_A) // @header-generator platform
class Random;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct ResourceDropsContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ResourceDropsCause>  mCause;
    ::ll::TypedStorage<4, 4, float>                 mExplosionRadius;
    ::ll::TypedStorage<8, 8, ::ItemStack const&>    mUsedItem;
    ::ll::TypedStorage<4, 12, ::BlockPos const>     mBlockPos;
    ::ll::TypedStorage<4, 4, ::DimensionType const> mDimensionType;
    ::ll::TypedStorage<8, 8, ::IBlockSource const&> mBlockSource;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ResourceDropsContext& operator=(ResourceDropsContext const&);
    ResourceDropsContext(ResourceDropsContext const&);
    ResourceDropsContext();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockActor const* getBlockActor() const;
#else // @header-generator platform
    MCAPI int getMiningLootBonusLevel() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ILevel& getLevel() const;

    MCNAPI int getMiningLootBonusLevel() const;

    MCNAPI ::Random& getRandom() const;

    MCNAPI bool isUsingSilkTouch() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ResourceDropsContext fromExplosion(::IBlockSource const&, float, ::BlockPos const&);

    MCNAPI static ::ResourceDropsContext fromLootResolver(::IBlockSource const&, ::BlockPos const&, ::ItemStack const&);

    MCNAPI static ::ResourceDropsContext fromOtherCause(::IBlockSource const&, ::BlockPos const&);

    MCNAPI static ::ResourceDropsContext fromPlayerMining(::IBlockSource const&, ::BlockPos const&, ::ItemStack const&);

    MCNAPI static ::ResourceDropsContext fromProjectileHit(::IBlockSource const&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI bool isUsingSilkTouch() const;
#endif // @header-generator platform
    // NOLINTEND
};
