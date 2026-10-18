#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum CreditsType : int {
    END_POEM     = 0,
    CREDITS_ONLY = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class CreditsType : int {
    EndPoem     = 0,
    CreditsOnly = 1,
};
#else // @header-generator platform
enum class CreditsType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
