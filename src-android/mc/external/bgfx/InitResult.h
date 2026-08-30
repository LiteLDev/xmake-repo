#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

enum class InitResult : int {
    Successful           = 0,
    Partial_SyncOptional = 1,
    Partial_SyncRequired = 2,
    Failed               = 3,
};

}
