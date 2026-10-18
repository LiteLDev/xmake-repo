#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/util/random/XoroshiroRandom.h"
#include "mc/world/actor/player/PlayerRespawnBlockRadiusRandomizer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/GeneratorType.h"
#else // @header-generator platform
#endif // @header-generator platform

class PlayerRespawnRandomizer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::XoroshiroRandom>                    mRandom;
    ::ll::TypedStorage<4, 4, uint>                                  mSpawnRadius;
    ::ll::TypedStorage<4, 4, uint>                                  mSquaredRadius;
    ::ll::TypedStorage<4, 24, ::PlayerRespawnBlockRadiusRandomizer> mSecondaryRandomizer;
    ::ll::TypedStorage<4, 24, ::PlayerRespawnBlockRadiusRandomizer> mPrimaryRandomizer;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mSpawnCenter;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mPrimaryOffset;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mPrimaryScale;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerRespawnRandomizer();
#else // @header-generator platform
#endif // @header-generator platform
};
