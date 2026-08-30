#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/CompassSpriteCalculator.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/DimensionType.h"

class LodestoneCompassComponentCalculator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::CompassSpriteCalculator> mSpriteCalculator;
    ::ll::TypedStorage<4, 4, float>                      mExpiresAtTime;
    ::ll::TypedStorage<1, 1, bool>                       mTrackOnlyInSameDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos>                mLookFromPos;
    ::ll::TypedStorage<4, 4, ::DimensionType>            mLookFromDimension;
    // NOLINTEND

public:
    // prevent constructor by default
    LodestoneCompassComponentCalculator& operator=(LodestoneCompassComponentCalculator const&);

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float& COOLDOWN_TIME_SECONDS();
    // NOLINTEND
};
