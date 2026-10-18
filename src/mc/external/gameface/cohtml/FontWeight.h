#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::Fonts {

#if defined(LL_PLAT_A) // @header-generator platform
enum FontWeight : uchar {
    FW_Auto       = 0,
    FW_Thin       = 1,
    FW_ExtraLight = 2,
    FW_Light      = 3,
    FW_SemiLight  = 4,
    FW_Book       = 5,
    FW_Normal     = 6,
    FW_Medium     = 7,
    FW_SemiBold   = 8,
    FW_Bold       = 9,
    FW_ExtraBold  = 10,
    FW_Black      = 11,
    FW_ExtraBlack = 12,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class FontWeight : uchar {
    Auto       = 0,
    Thin       = 1,
    ExtraLight = 2,
    Light      = 3,
    SemiLight  = 4,
    Book       = 5,
    Normal     = 6,
    Medium     = 7,
    SemiBold   = 8,
    Bold       = 9,
    ExtraBold  = 10,
    Black      = 11,
    ExtraBlack = 12,
};
#else // @header-generator platform
enum class FontWeight : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
