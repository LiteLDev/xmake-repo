#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class MobSpawnRules;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class SpawnConditions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>        isOnSurface;
    ::ll::TypedStorage<1, 1, bool>        isInWater;
    ::ll::TypedStorage<1, 1, bool>        isInBubble;
    ::ll::TypedStorage<1, 1, bool>        isInLava;
    ::ll::TypedStorage<1, 1, bool>        isUnderground;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>       delayEndWorldAge;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>      delayEndWorldAge;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>         rawBrightness;
    ::ll::TypedStorage<4, 12, ::BlockPos> pos;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SpawnConditions
    createSpawnConditionsWithSpawnRules(::SpawnConditions const&, ::MobSpawnRules const&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
