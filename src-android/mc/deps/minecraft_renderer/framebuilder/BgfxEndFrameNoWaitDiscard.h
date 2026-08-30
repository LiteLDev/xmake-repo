#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

class BgfxEndFrameNoWaitDiscard {
public:
    // BgfxEndFrameNoWaitDiscard inner types define
    enum class FrameBuilderEvent : int {
        EndFrameStart                = 0,
        WaitForPreviousFrameStarted  = 1,
        WaitForPreviousFrameFinished = 2,
        EndFrameFinished             = 3,
        FrameDiscarded               = 4,
    };
};

} // namespace mce::framebuilder
