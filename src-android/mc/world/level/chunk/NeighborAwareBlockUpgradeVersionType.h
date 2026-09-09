#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class NeighborAwareBlockUpgradeVersionType : int {
    None      = 0,
    WallBlock = 1,
    _Count    = 2,
    Latest    = 1,
};
