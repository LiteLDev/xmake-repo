#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials::definition {

enum class InterpolationConstraint : uchar {
    Flat          = 0,
    Smooth        = 1,
    NoPerspective = 2,
    Centroid      = 3,
};

}
