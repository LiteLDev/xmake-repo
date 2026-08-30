#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct OnlineStreamConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> maxBufferedBytes;
    ::ll::TypedStorage<8, 8, ulong> fetchRequestSizeBytes;
    ::ll::TypedStorage<4, 4, float> prefetchMultiplier;
    // NOLINTEND
};

} // namespace Audio
