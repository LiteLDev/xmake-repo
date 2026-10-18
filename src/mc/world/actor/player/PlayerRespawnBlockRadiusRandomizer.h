#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
class XoroshiroRandom;
// clang-format on

class PlayerRespawnBlockRadiusRandomizer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mSpawnRadius;
    ::ll::TypedStorage<4, 4, uint> mPossibleOrigins;
    ::ll::TypedStorage<4, 4, uint> mLargestPrime;
    ::ll::TypedStorage<4, 4, uint> mStartOrigin;
    ::ll::TypedStorage<4, 4, uint> mCurrentOrigin;
    ::ll::TypedStorage<4, 4, uint> mIterationCount;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerRespawnBlockRadiusRandomizer();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PlayerRespawnBlockRadiusRandomizer(uint, ::XoroshiroRandom&);
#else // @header-generator platform
    MCAPI PlayerRespawnBlockRadiusRandomizer(uint spawnRadius, ::XoroshiroRandom& random);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(uint, ::XoroshiroRandom&);
#else // @header-generator platform
    MCAPI void* $ctor(uint spawnRadius, ::XoroshiroRandom& random);
#endif // @header-generator platform
    // NOLINTEND
};
