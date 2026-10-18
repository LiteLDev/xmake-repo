#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class DisplayLoggedErrorType : uint {
    MARKETPLACE_ERROR = 0,
    SDL_PARSE         = 1,
    UI_LAYOUT         = 2,
    CDN               = 3,
    PERSONA           = 4,
    UNKNOWN           = 5,
};
#else // @header-generator platform
enum class DisplayLoggedErrorType : uint {};
#endif // @header-generator platform
