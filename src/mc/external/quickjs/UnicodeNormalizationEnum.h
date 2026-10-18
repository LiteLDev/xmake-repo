#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class UnicodeNormalizationEnum : int {
    Nfc  = 0,
    Nfd  = 1,
    Nfkc = 2,
    Nfkd = 3,
};
#endif // @header-generator platform
