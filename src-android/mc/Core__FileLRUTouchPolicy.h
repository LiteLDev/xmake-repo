#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

enum class FileLRUTouchPolicy : int {
    InsertIfMissing = 0,
    RefreshOnly     = 1,
};

}
