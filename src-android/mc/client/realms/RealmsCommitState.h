#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class RealmsCommitState : int {
    Idle                 = 0,
    FetchingRealmsConfig = 1,
    FetchError           = 2,
    SelectingCommit      = 3,
    SelectError          = 4,
};

}
