#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct DfnwTelemetryStat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>    numWholeFrames;
    ::ll::TypedStorage<4, 4, int>    numPredictionFailures;
    ::ll::TypedStorage<4, 4, int>    numPenalties;
    ::ll::TypedStorage<8, 8, double> avgGameUpdates;
    ::ll::TypedStorage<8, 8, double> avgRenderedFrameDuration;
    ::ll::TypedStorage<8, 8, double> avgFrameWaitDuration;
    ::ll::TypedStorage<8, 8, double> avgGameUpdateDuration;
    // NOLINTEND
};

} // namespace mce::framebuilder
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
