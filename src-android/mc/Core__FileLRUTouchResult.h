#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

enum class FileLRUTouchResult : int {
    Missing   = 0,
    Inserted  = 1,
    Refreshed = 2,
};

}
