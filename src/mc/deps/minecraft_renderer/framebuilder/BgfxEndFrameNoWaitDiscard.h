#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

class BgfxEndFrameNoWaitDiscard {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // BgfxEndFrameNoWaitDiscard inner types declare
    // clang-format off
    struct DfnwTelemetryAccumulator;
    // clang-format on

#endif // @header-generator platform
    // BgfxEndFrameNoWaitDiscard inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class FrameBuilderEvent : int {
        EndFrameStart                = 0,
        WaitForPreviousFrameStarted  = 1,
        WaitForPreviousFrameFinished = 2,
        EndFrameFinished             = 3,
        FrameDiscarded               = 4,
    };
#else // @header-generator platform
    enum class FrameBuilderEvent : int {};

    struct DfnwTelemetryAccumulator {};
#endif // @header-generator platform
};

} // namespace mce::framebuilder
