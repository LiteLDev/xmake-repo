#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class VideoCodecType : int {
    KVideoCodecGeneric = 0,
    KVideoCodecVP8     = 1,
    KVideoCodecVP9     = 2,
    KVideoCodecAV1     = 3,
    KVideoCodecH264    = 4,
    KVideoCodecH265    = 5,
};

}
#endif // @header-generator platform
