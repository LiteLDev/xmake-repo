#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FrameAnomalyDetectionConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> captureWindowSize;
    ::ll::TypedStorage<4, 4, float>  relativeSpikeMagnitude;
    ::ll::TypedStorage<4, 4, float>  relativeFrameVarianceMagnitude;
    ::ll::TypedStorage<4, 4, float>  stutteredFrameCountThreshold;
    ::ll::TypedStorage<1, 1, bool>   forceEnable;
    // NOLINTEND
};
