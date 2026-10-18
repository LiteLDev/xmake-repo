#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

#if defined(LL_PLAT_A) // @header-generator platform
enum class FMODPCMStreamError : int {
    NullContext               = 1,
    SoundCreationFailed       = 2,
    FrameBufferCreationFailed = 3,
    TotalSamplesUnknown       = 4,
};
#else // @header-generator platform
enum class FMODPCMStreamError : int {};
#endif // @header-generator platform

}
