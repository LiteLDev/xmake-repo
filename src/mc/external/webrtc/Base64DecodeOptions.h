#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class Base64DecodeOptions : uchar {
    KStrict    = 0,
    KForgiving = 1,
};

}
#endif // @header-generator platform
