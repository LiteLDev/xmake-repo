#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::Font {

#if defined(LL_PLAT_A) // @header-generator platform
enum class Type : int {
    Bitmap       = 0,
    BitmapSmooth = 1,
    TrueType     = 2,
    MSDF         = 3,
};
#else // @header-generator platform
enum class Type : int {};
#endif // @header-generator platform

}
