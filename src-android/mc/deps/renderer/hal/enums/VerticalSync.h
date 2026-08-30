#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

enum class VerticalSync : uchar {
    NoVerticalSync       = 0,
    VerticalSync         = 1,
    AdaptiveVerticalSync = 2,
};

}
