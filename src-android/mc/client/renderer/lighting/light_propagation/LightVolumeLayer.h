#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LightPropagation::Detail {

enum class LightVolumeLayer : uchar {
    Scene            = 0,
    NonTransitioning = 1,
};

}
