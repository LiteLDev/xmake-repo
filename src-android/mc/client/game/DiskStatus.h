#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DiskStatus : uchar {
    Initialized       = 0,
    LowDiskSpace      = 1,
    OutOfDiskSpace    = 2,
    CriticalDiskError = 3,
};
