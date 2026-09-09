#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

struct FramePacingStatistics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long> mFlipCompletionTime;
    ::ll::TypedStorage<8, 8, long> mCpuFlipRequestTime;
    ::ll::TypedStorage<8, 8, long> mGpuFlipRequestTime;
    // NOLINTEND
};

} // namespace dragon::platform
