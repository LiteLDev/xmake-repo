#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DisplayLoggedErrorType : uint {
    MARKETPLACE_ERROR = 0,
    SDL_PARSE         = 1,
    UI_LAYOUT         = 2,
    CDN               = 3,
    PERSONA           = 4,
    UNKNOWN           = 5,
};
