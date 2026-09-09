#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class Fulfillment : int {
    Unfulfilled = 0,
    Fulfilled   = 1,
    _Unknown    = 2,
};
