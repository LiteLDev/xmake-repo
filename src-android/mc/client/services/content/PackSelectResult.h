#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PackSelectResult : int {
    Success             = 0,
    NoStore             = 1,
    DataWarning         = 2,
    AchievementWarning  = 3,
    MissingDependency   = 4,
    RequiredDependency  = 5,
    Upsell              = 6,
    IncompatibleContent = 7,
    Unknown             = 8,
};
