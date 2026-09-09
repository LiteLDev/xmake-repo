#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class RolesAndPermissionsState : int {
    Idle      = 0,
    Fetching  = 1,
    Posting   = 2,
    Error     = 3,
    PostError = 4,
};

}
