#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PurchaseResult : int {
    Success           = 0,
    Fail              = 1,
    PlatformStoreFail = 2,
    InProgress        = 3,
    Cancel            = 4,
};
