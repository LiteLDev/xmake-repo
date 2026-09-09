#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonUtil::details {

struct ChanceInfoIntermediate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mNumerator;
    ::ll::TypedStorage<4, 4, int> mDenominator;
    // NOLINTEND
};

} // namespace JsonUtil::details
