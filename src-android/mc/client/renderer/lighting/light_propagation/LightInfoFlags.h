#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LightPropagation {

enum class LightInfoFlags : uchar {
    None                     = 0,
    GroupingIgnoresIntensity = 1,
    ALL_FLAGS                = 255,
};

}
