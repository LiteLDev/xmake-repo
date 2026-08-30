#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ValueProviders {

struct UniformFloat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> minInclusive;
    ::ll::TypedStorage<4, 4, float> maxExclusive;
    // NOLINTEND
};

} // namespace ValueProviders
