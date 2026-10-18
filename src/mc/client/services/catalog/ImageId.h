#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace catalog {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ImageId : ushort {
    // bitfield representation
    NONE        = 0,
    KEYART      = 1 << 0,
    THUMBNAIL   = 1 << 1,
    SCREENSHOT  = 1 << 2,
    PANORAMA    = 1 << 3,
    PACKICON    = 1 << 4,
    PERSONAICON = 1 << 5,
    COINICON    = 1 << 6,
    SLOTICON    = 1 << 7,
    LOCALICON   = 1 << 8,
};
#else // @header-generator platform
enum class ImageId : ushort {};
#endif // @header-generator platform

}
