#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/SculkChargeCursor.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class CompoundTag;
class IBlockWorldGenAPI;
class Random;
// clang-format on

class SculkSpreader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                            mIsWorldGen;
    ::ll::TypedStorage<4, 4, int>                             mGrowthSpawnCost;
    ::ll::TypedStorage<4, 4, int>                             mNoGrowthRadius;
    ::ll::TypedStorage<4, 4, int>                             mChargeDecayRate;
    ::ll::TypedStorage<4, 4, int>                             mAdditionalDecayRate;
    ::ll::TypedStorage<8, 24, std::vector<SculkChargeCursor>> mCursors;
    ::ll::TypedStorage<8, 24, std::set<const Block*>>         mSculkReplaceableBlocks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SculkSpreader();

    MCNAPI SculkSpreader(bool const, int const, int const, int const, int const);

    MCNAPI void addCursors(::BlockPos const&, int);

    MCNAPI void clearCursors();

    MCNAPI ::BlockPos getCursorPosition(int) const;

    MCNAPI int getMaxCharge() const;

    MCNAPI int getNumberOfCursors() const;

    MCNAPI int getTotalCharge() const;

    MCNAPI void load(::CompoundTag const&);

    MCNAPI void save(::CompoundTag&) const;

    MCNAPI void updateCursors(::IBlockWorldGenAPI&, ::BlockSource*, ::BlockPos const&, ::Random&, bool const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(bool const, int const, int const, int const, int const);
    // NOLINTEND
};
