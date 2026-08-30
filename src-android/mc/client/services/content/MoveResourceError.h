#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MoveResourceError : int {
    NoError                 = 0,
    NullItem                = 1,
    ContentTierIncompatible = 2,
    DataWarning             = 3,
    AddDependenciesError    = 4,
    PackSelectError         = 5,
    NeedsDownload           = 6,
};
