#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::ImageUtils {

enum class LoadError : int {
    DecompressionFailure = 0,
    SplitFailure         = 1,
    StbiFailure          = 2,
};

}
