#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules::rtxpostfx {

struct ToneMappingParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> intensity;
    ::ll::TypedStorage<1, 1, bool>  colorGradingEnabled;
    ::ll::TypedStorage<4, 4, float> colorTemperature;
    ::ll::TypedStorage<4, 4, float> colorTint;
    ::ll::TypedStorage<4, 4, float> shadowContrast;
    ::ll::TypedStorage<4, 4, float> shadowContrastEnd;
    ::ll::TypedStorage<4, 4, float> curveShift;
    ::ll::TypedStorage<4, 4, float> dynamicRange;
    ::ll::TypedStorage<4, 4, float> shadowMinSlope;
    ::ll::TypedStorage<4, 4, float> maxExposureIncrease;
    ::ll::TypedStorage<4, 4, float> filmicSaturationCorrection;
    ::ll::TypedStorage<1, 1, bool>  debugMode;
    // NOLINTEND
};

} // namespace dragon::framerenderer::modules::rtxpostfx
