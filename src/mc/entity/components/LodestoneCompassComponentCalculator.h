#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/item/CompassSpriteCalculator.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/DimensionType.h"
#else // @header-generator platform
#endif // @header-generator platform

class LodestoneCompassComponentCalculator {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::CompassSpriteCalculator> mSpriteCalculator;
    ::ll::TypedStorage<4, 4, float>                      mExpiresAtTime;
    ::ll::TypedStorage<1, 1, bool>                       mTrackOnlyInSameDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos>                mLookFromPos;
    ::ll::TypedStorage<4, 4, ::DimensionType>            mLookFromDimension;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk8303a4;
    ::ll::UntypedStorage<4, 4>  mUnk1caf70;
    ::ll::UntypedStorage<1, 1>  mUnkb51bea;
    ::ll::UntypedStorage<4, 12> mUnk2c37c3;
    ::ll::UntypedStorage<4, 4>  mUnk6d0b1e;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LodestoneCompassComponentCalculator& operator=(LodestoneCompassComponentCalculator const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LodestoneCompassComponentCalculator(LodestoneCompassComponentCalculator const&);
    LodestoneCompassComponentCalculator();
#endif // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float& COOLDOWN_TIME_SECONDS();
#else // @header-generator platform
    MCAPI static float& COOLDOWN_TIME_SECONDS();
#endif // @header-generator platform
    // NOLINTEND
};
