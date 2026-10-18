#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class StorageMigrationState : int {
    Uninitialized       = 0,
    Detecting           = 1,
    Initializing        = 2,
    InsufficientSpace   = 3,
    ReadyToStart        = 4,
    ReadyToResume       = 5,
    InProgress          = 6,
    InProgressWithError = 7,
    HaltedOnError       = 8,
    Complete            = 9,
};
#else // @header-generator platform
enum class StorageMigrationState : int {};
#endif // @header-generator platform
#endif // @header-generator platform
