#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct InputConstraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mMaxLength;
    ::ll::TypedStorage<8, 8, ulong> mMinLength;
    // NOLINTEND
};

} // namespace cereal::internal
