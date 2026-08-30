#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct MinSizeConstraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mMinSize;
    // NOLINTEND
};

} // namespace cereal::internal
