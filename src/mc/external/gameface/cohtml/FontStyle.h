#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::Fonts {

#if defined(LL_PLAT_A) // @header-generator platform
enum FontStyle : uchar {
    FS_Auto    = 0,
    FS_Normal  = 1,
    FS_Italic  = 2,
    FS_Oblique = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class FontStyle : uchar {
    Auto    = 0,
    Normal  = 1,
    Italic  = 2,
    Oblique = 3,
};
#else // @header-generator platform
enum class FontStyle : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
