#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerTickSystemImpl {

struct PlayerTickResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long> mTicksToDequeue;
    ::ll::TypedStorage<1, 1, bool> mProcessTop;
    // NOLINTEND
};

} // namespace PlayerTickSystemImpl
