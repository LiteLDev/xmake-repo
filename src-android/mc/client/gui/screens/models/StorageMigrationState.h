#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StorageMigrationState : int {
    UNINITIALIZED          = 0,
    DETECTING              = 1,
    INITIALIZING           = 2,
    INSUFFICIENT_SPACE     = 3,
    READY_TO_START         = 4,
    READY_TO_RESUME        = 5,
    IN_PROGRESS            = 6,
    IN_PROGRESS_WITH_ERROR = 7,
    HALTED_ON_ERROR        = 8,
    COMPLETE               = 9,
};
