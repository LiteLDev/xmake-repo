#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

class FloatConstraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mMinValue;
    ::ll::TypedStorage<4, 4, float> mMaxValue;
    // NOLINTEND

public:
    // prevent constructor by default
    FloatConstraint();
};

} // namespace EAS
