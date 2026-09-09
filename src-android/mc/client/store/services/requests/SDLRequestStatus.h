#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SDLRequestStatus : int {
    UNKNOWN       = 0,
    SUCCESS       = 1,
    REQUIRE_RETRY = 2,
    FAILURE       = 3,
    OFFLINE       = 4,
};
