#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class RealmsBackupsState : uchar {
    Idle      = 0,
    Fetching  = 1,
    Error     = 2,
    Available = 3,
};

}
