#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::i18n {

#if defined(LL_PLAT_A) // @header-generator platform
enum class TextDirection : int {
    LTR     = 0,
    RTL     = 1,
    Mixed   = 2,
    Neutral = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class TextDirection : int {
    Ltr     = 0,
    Rtl     = 1,
    Mixed   = 2,
    Neutral = 3,
};
#else // @header-generator platform
enum class TextDirection : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
