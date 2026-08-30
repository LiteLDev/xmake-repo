#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class RealmsListState : int {
    Unknown = 0,
    Loading = 1,
    Idle    = 2,
    Error   = 3,
};

}
