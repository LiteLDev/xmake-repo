#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class ManageMembersStatus : int {
    Idle       = 0,
    InProgress = 1,
    Success    = 2,
    Fail       = 3,
};

}
