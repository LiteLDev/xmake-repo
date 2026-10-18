#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class TextboxTextUpdateReason : int {
    NoReason             = 0,
    AffirmativeDismissal = 1,
    CancelDismissal      = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class TextboxTextUpdateReason : int {
    NoReason             = 0,
    AffirmativeDismissal = 1,
    CancelDismissal      = 2,
};
#else // @header-generator platform
enum class TextboxTextUpdateReason : int {};
#endif // @header-generator platform
#endif // @header-generator platform
