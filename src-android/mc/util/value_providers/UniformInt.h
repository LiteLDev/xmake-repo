#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ValueProviders {

struct UniformInt {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> minInclusive;
    ::ll::TypedStorage<4, 4, int> maxInclusive;
    // NOLINTEND
};

} // namespace ValueProviders
