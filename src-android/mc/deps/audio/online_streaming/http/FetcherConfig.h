#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct FetcherConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                                                 requestSizeBytes;
    ::ll::TypedStorage<4, 4, float>                                                 prefetchMultiplier;
    ::ll::TypedStorage<4, 4, uint>                                                  maxAttempts;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>>    thinBufferTimeout;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>>    healthyBufferTimeout;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> retryBackoffBaseTime;
    // NOLINTEND
};

} // namespace Audio
