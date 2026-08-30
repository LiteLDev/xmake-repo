#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class PlayerListState : int {
    Idle       = 0,
    Error      = 1,
    InProgress = 2,
    Done       = 3,
};

}
