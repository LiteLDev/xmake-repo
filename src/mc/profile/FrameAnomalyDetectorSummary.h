#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FrameAnomalyDetectorSummary {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                                                        spikeCount;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> medianSpikeSize;
    ::ll::TypedStorage<4, 4, uint>                                                        slowdownCount;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> medianSlowdownSize;
    ::ll::TypedStorage<4, 4, uint>                                                        stutterCount;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> medianStutterSize;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk38cdd0;
    ::ll::UntypedStorage<8, 8> mUnk6edb97;
    ::ll::UntypedStorage<4, 4> mUnkbffcb4;
    ::ll::UntypedStorage<8, 8> mUnk1516ee;
    ::ll::UntypedStorage<4, 4> mUnk2b3c6c;
    ::ll::UntypedStorage<8, 8> mUnkf3d790;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FrameAnomalyDetectorSummary& operator=(FrameAnomalyDetectorSummary const&);
    FrameAnomalyDetectorSummary(FrameAnomalyDetectorSummary const&);
    FrameAnomalyDetectorSummary();
#endif // @header-generator platform
};
