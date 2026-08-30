#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ClientGameSetupResult : int {
    Success          = 0,
    Cancelled        = 1,
    Failed           = 2,
    NoValidAuth      = 3,
    NotAuthenticated = 4,
};
