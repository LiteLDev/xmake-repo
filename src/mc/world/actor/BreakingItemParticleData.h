#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"

struct BreakingItemParticleData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ParticleType> mType;
    ::ll::TypedStorage<4, 4, uint>           mNumParticles;
    ::ll::TypedStorage<4, 4, float>          mSize;
    ::ll::TypedStorage<4, 4, float>          mSpeedModifier;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BreakingItemParticleData();
#else // @header-generator platform
#endif // @header-generator platform
};
