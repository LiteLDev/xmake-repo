#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/resource_processing/ResourceIoCacheState.h"
#include "mc/deps/resource_processing/ResourceLoadPhase.h"
#include "mc/deps/resource_processing/ResourceLoadResult.h"
#include "mc/deps/resource_processing/ResourceLoadSessionData.h"

// auto generated forward declare list
// clang-format off
class IResourceLoadEventing;
class PackInstance;
namespace Bedrock::Resources { struct ResourceLoadCacheState; }
// clang-format on

namespace Bedrock::Resources {

class ResourceLoadSession {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 392, ::Bedrock::Resources::ResourceLoadSessionData> mData;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mSessionStart;
    ::ll::TypedStorage<8, 24, std::array<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>, 3>> mPhaseStart;
    ::ll::TypedStorage<1, 1, bool> mActive;
    ::ll::TypedStorage<8, 8, ulong> mIoBaselineBytes;
    ::ll::TypedStorage<8, 8, ulong> mIoBaselineOps;
    ::ll::TypedStorage<4, 4, uint> mHandleHighWater;
    ::ll::TypedStorage<8, 24, std::array<ulong, 3>> mPhaseStartBytes;
    ::ll::TypedStorage<1, 1, bool> mMemoryTrackingActive;
    ::ll::TypedStorage<1, 1, bool> mProcessBaselineSet;
    ::ll::TypedStorage<8, 8, ulong> mProcessBaselineInB;
    ::ll::TypedStorage<8, 8, ulong> mProcessPeakInB;
    ::ll::TypedStorage<8, 8, ulong> mLastProcessUsedInB;
    ::ll::TypedStorage<8, 40, std::array<ulong, 5>> mCategoryBaselineBytes;
    ::ll::TypedStorage<8, 40, std::array<ulong, 5>> mCategoryPeakBytes;
    ::ll::TypedStorage<8, 40, std::array<ulong, 5>> mCategoryBaselineAllocCount;
    ::ll::TypedStorage<8, 40, std::array<ulong, 5>> mCategoryBaselineLiveCount;
    ::ll::TypedStorage<1, 1, bool> mRateSampleSet;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastRateSampleTime;
    ::ll::TypedStorage<8, 8, ulong> mLastTotalAllocCount;
    ::ll::TypedStorage<8, 8, double> mPeakAllocRatePerS;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void begin(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

    MCNAPI ::Bedrock::Resources::ResourceLoadSessionData const&
    finishAndFire(::IResourceLoadEventing&, ::Bedrock::Resources::ResourceLoadResult);

    MCNAPI void recordPack(::PackInstance const&);
    // NOLINTEND
};

} // namespace Bedrock::Resources
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
