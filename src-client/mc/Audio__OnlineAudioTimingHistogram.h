#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

class OnlineAudioTimingHistogram {
public:
    // OnlineAudioTimingHistogram inner types define
    using BucketBoundsMs = std::array<uint, 9>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 36, std::array<uint, 9>>                                        mUpperBoundsMs;
    ::ll::TypedStorage<4, 40, std::array<uint, 10>>                                       mBucketCounts;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mTotalDuration;
    ::ll::TypedStorage<4, 4, uint>                                                        mSampleCount;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineAudioTimingHistogram();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float getAverageMs() const;

    MCNAPI std::string getBucketCountsAsJson(std::string_view) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::array<uint, 9> const& REQUEST_TIMING_BUCKET_BOUNDS_MS();

    MCNAPI static std::array<uint, 9> const& UPDATE_INTERVAL_BUCKET_BOUNDS_MS();
    // NOLINTEND
};

} // namespace Audio
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
