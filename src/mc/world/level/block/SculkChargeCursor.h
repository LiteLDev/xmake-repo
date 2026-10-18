#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
class CompoundTag;
class DefaultSculkBehavior;
#if defined(LL_PLAT_A) // @header-generator platform
class IBlockWorldGenAPI;
class Random;
class SculkBehavior;
#else // @header-generator platform
#endif // @header-generator platform
class SculkBlockBehavior;
#if defined(LL_PLAT_A) // @header-generator platform
class SculkSpreader;
#else // @header-generator platform
#endif // @header-generator platform
class SculkVeinBlockBehavior;
// clang-format on

class SculkChargeCursor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mPos;
    ::ll::TypedStorage<4, 4, int>         mCharge;
    ::ll::TypedStorage<4, 4, int>         mUpdateDelay;
    ::ll::TypedStorage<4, 4, int>         mDecayDelay;
    ::ll::TypedStorage<4, 4, int>         mFacingData;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    SculkChargeCursor();
#else // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCAPI void load(::CompoundTag const& tag);

    MCAPI void save(::CompoundTag& tag) const;
    // NOLINTEND
#endif // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::DefaultSculkBehavior const& sDefaultSculkBehavior();
#else // @header-generator platform
    MCAPI static ::DefaultSculkBehavior const& sDefaultSculkBehavior();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SculkBlockBehavior const& sSculkBlockBehavior();
#else // @header-generator platform
    MCAPI static ::SculkBlockBehavior const& sSculkBlockBehavior();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SculkVeinBlockBehavior const& sSculkVeinBlockBehavior();
#else // @header-generator platform
    MCAPI static ::SculkVeinBlockBehavior const& sSculkVeinBlockBehavior();
#endif // @header-generator platform
    // NOLINTEND
};
