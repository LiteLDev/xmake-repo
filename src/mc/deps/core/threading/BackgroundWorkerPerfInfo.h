#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class BackgroundWorker;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class BackgroundWorkerPerfInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, ::BackgroundWorker const*> mUpdaterWorker;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mTotalRunTasks;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mTotalRunTasksTicks;
    ::ll::TypedStorage<4, 4, std::atomic<uint>> mTotalWakeUps;
    ::ll::TypedStorage<8, 8, std::atomic<double>> mAverageTaskDuration;
    ::ll::TypedStorage<4, 4, std::atomic<uint>> mWakeUpsPerSecond;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastPerfInfoUpdate;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNextPerfInfoUpdate;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk921ae2;
    ::ll::UntypedStorage<8, 8> mUnke7bde7;
    ::ll::UntypedStorage<8, 8> mUnkec2b8a;
    ::ll::UntypedStorage<4, 4> mUnk3d19ce;
    ::ll::UntypedStorage<8, 8> mUnkd8acfb;
    ::ll::UntypedStorage<4, 4> mUnkc7af32;
    ::ll::UntypedStorage<8, 8> mUnk5399d8;
    ::ll::UntypedStorage<8, 8> mUnkf7c2c4;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BackgroundWorkerPerfInfo& operator=(BackgroundWorkerPerfInfo const&);
    BackgroundWorkerPerfInfo(BackgroundWorkerPerfInfo const&);
    BackgroundWorkerPerfInfo();
#endif // @header-generator platform
};
