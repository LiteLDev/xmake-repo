#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/SculkChargeCursor.h"
#else // @header-generator platform
#include "mc/world/level/block/Block.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
#endif // @header-generator platform
class BlockPos;
class BlockSource;
class CompoundTag;
class IBlockWorldGenAPI;
class Random;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class SculkChargeCursor;
#endif // @header-generator platform
// clang-format on

class SculkSpreader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                            mIsWorldGen;
    ::ll::TypedStorage<4, 4, int>                             mGrowthSpawnCost;
    ::ll::TypedStorage<4, 4, int>                             mNoGrowthRadius;
    ::ll::TypedStorage<4, 4, int>                             mChargeDecayRate;
    ::ll::TypedStorage<4, 4, int>                             mAdditionalDecayRate;
    ::ll::TypedStorage<8, 24, std::vector<SculkChargeCursor>> mCursors;
    ::ll::TypedStorage<8, 24, std::set<const Block*>>         mSculkReplaceableBlocks;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                mIsWorldGen;
    ::ll::TypedStorage<4, 4, int>                                 mGrowthSpawnCost;
    ::ll::TypedStorage<4, 4, int>                                 mNoGrowthRadius;
    ::ll::TypedStorage<4, 4, int>                                 mChargeDecayRate;
    ::ll::TypedStorage<4, 4, int>                                 mAdditionalDecayRate;
    ::ll::TypedStorage<8, 24, ::std::vector<::SculkChargeCursor>> mCursors;
    ::ll::TypedStorage<8, 16, ::std::set<::Block const*>>         mSculkReplaceableBlocks;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SculkSpreader();
#else // @header-generator platform
    MCAPI SculkSpreader();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SculkSpreader(bool const, int const, int const, int const, int const);
#else // @header-generator platform
    MCAPI SculkSpreader(
        bool isWorldGen,
        int  growthSpawnCost,
        int  noGrowthRadius,
        int  chargeDecayRate,
        int  additionalDecayRate
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addCursors(::BlockPos const&, int);
#else // @header-generator platform
    MCAPI void load(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearCursors();
#else // @header-generator platform
    MCAPI void save(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos getCursorPosition(int) const;

    MCNAPI int getMaxCharge() const;

    MCNAPI int getNumberOfCursors() const;

    MCNAPI int getTotalCharge() const;

    MCNAPI void load(::CompoundTag const&);

    MCNAPI void save(::CompoundTag&) const;

    MCNAPI void updateCursors(::IBlockWorldGenAPI&, ::BlockSource*, ::BlockPos const&, ::Random&, bool const);
#else // @header-generator platform
    MCAPI void updateCursors(
        ::IBlockWorldGenAPI& target,
        ::BlockSource*       region,
        ::BlockPos const&    originPos,
        ::Random&            random,
        bool                 spreadVeins
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(bool const, int const, int const, int const, int const);
#else // @header-generator platform
    MCAPI void*
    $ctor(bool isWorldGen, int growthSpawnCost, int noGrowthRadius, int chargeDecayRate, int additionalDecayRate);
#endif // @header-generator platform
    // NOLINTEND
};
