#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class ServerPreference : int {
    AUTOMATIC_FIRST_JOIN = 0,
    AUTOMATIC_OWNER      = 1,
    MANUAL               = 2,
};

}
