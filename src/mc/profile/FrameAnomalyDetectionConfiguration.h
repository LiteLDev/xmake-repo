#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FrameAnomalyDetectionConfiguration {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<2, 2, ushort> captureWindowSize;
    ::ll::TypedStorage<4, 4, float>  relativeSpikeMagnitude;
    ::ll::TypedStorage<4, 4, float>  relativeFrameVarianceMagnitude;
    ::ll::TypedStorage<4, 4, float>  stutteredFrameCountThreshold;
    ::ll::TypedStorage<1, 1, bool>   forceEnable;
#else // @header-generator platform
    ::ll::UntypedStorage<2, 2> mUnk654d10;
    ::ll::UntypedStorage<4, 4> mUnk22b57c;
    ::ll::UntypedStorage<4, 4> mUnk750041;
    ::ll::UntypedStorage<4, 4> mUnkf2a450;
    ::ll::UntypedStorage<1, 1> mUnk4323c6;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FrameAnomalyDetectionConfiguration& operator=(FrameAnomalyDetectionConfiguration const&);
    FrameAnomalyDetectionConfiguration(FrameAnomalyDetectionConfiguration const&);
    FrameAnomalyDetectionConfiguration();
#endif // @header-generator platform
};
