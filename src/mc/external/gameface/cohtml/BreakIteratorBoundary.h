#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::i18n {

#if defined(LL_PLAT_A) // @header-generator platform
enum class BreakIteratorBoundary : int {
    Character = 0,
    Word      = 1,
    Line      = 2,
    Count     = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class BreakIteratorBoundary : int {
    Character = 0,
    Word      = 1,
    Line      = 2,
    Count     = 3,
};
#else // @header-generator platform
enum class BreakIteratorBoundary : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
