#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class BackendProviderType : int {
    Playfab    = 0,
    Persona    = 1,
    Gatherings = 2,
};
#else // @header-generator platform
enum class BackendProviderType : int {};
#endif // @header-generator platform
