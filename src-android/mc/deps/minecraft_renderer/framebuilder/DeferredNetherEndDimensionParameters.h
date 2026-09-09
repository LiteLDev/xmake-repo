#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct DeferredNetherEndDimensionParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mNetherDimensionColorMultiplier;
    ::ll::TypedStorage<4, 4, float> mNetherDimensionAmbientIntensityMultiplier;
    ::ll::TypedStorage<4, 4, float> mEndChaosMinFlashDuration;
    ::ll::TypedStorage<4, 4, float> mEndChaosMaxFlashDuration;
    ::ll::TypedStorage<4, 4, float> mEndChaosMinFlashCooldown;
    ::ll::TypedStorage<4, 4, float> mEndChaosMaxFlashCooldown;
    ::ll::TypedStorage<4, 4, float> mEndSkyMinimumLuminance;
    // NOLINTEND
};

} // namespace mce::framebuilder
