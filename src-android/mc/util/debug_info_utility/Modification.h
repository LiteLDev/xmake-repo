#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DebugInfoUtility {

enum class Modification : int {
    UNCHANGED = 0,
    ADDITION  = 1,
    EDIT      = 2,
    MIXED     = 3,
};

}
