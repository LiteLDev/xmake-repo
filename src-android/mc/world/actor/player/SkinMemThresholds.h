#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SkinMemThresholds {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long> lowMemMb;
    ::ll::TypedStorage<8, 8, long> criticalMemMb;
    ::ll::TypedStorage<8, 8, long> skinCutoffSizeKb;
    // NOLINTEND
};
