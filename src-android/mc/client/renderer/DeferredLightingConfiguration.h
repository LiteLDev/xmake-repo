#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/DeferredLightingUpscaleParameters.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct DeferredLightingConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::framebuilder::DeferredLightingUpscaleParameters> mLightingUpscaleParameters;
    ::ll::TypedStorage<1, 1, bool>                                                    mLocalExposureEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                    mBiomeBlendingEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                    mOptimizeGammaCorrection;
    ::ll::TypedStorage<4, 4, float>                                                   mWaterExtinctionDistanceShift;
    // NOLINTEND
};
