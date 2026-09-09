#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BackgroundWorker;
// clang-format on

class BackgroundWorkerPerfInfo {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};
