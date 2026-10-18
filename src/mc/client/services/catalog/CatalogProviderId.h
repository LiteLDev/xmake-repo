#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class CatalogProviderId : int {
    PlayFab        = 1,
    PersonaService = 2,
    Gatherings     = 3,
};
#else // @header-generator platform
enum class CatalogProviderId : int {};
#endif // @header-generator platform
