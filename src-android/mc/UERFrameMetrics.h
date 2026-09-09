#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UERFrameMetrics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mSubmittedCount;
    ::ll::TypedStorage<4, 4, uint> mRenderedCount;
    // NOLINTEND
};
