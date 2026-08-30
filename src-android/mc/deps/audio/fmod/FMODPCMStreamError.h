#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

enum class FMODPCMStreamError : int {
    NullContext               = 1,
    SoundCreationFailed       = 2,
    FrameBufferCreationFailed = 3,
    TotalSamplesUnknown       = 4,
};

}
