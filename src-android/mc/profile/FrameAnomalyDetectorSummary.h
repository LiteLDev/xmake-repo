#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FrameAnomalyDetectorSummary {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                        spikeCount;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> medianSpikeSize;
    ::ll::TypedStorage<4, 4, uint>                                                        slowdownCount;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> medianSlowdownSize;
    ::ll::TypedStorage<4, 4, uint>                                                        stutterCount;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> medianStutterSize;
    // NOLINTEND
};
