#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MSGraph::Models {

enum class ConflictBehavior : int {
    Replace = 0,
    Rename  = 1,
    Fail    = 2,
};

}
