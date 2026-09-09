#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskStartInfo.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class TaskGroup;
class TaskResult;
class WorkerPool;
// clang-format on

class WatchdogTimer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                                        mTaskGroup;
    ::ll::TypedStorage<8, 48, ::TaskStartInfo>                                                  mTaskStartInfo;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>> const> mTimeout;
    ::ll::UntypedStorage<8, 48>                                                                 mTimeoutCallback;
    ::ll::UntypedStorage<8, 16>                                                                 mCurrentTaskHandle;
    ::ll::TypedStorage<4, 40, std::mutex>                                                       mLock;
    ::ll::TypedStorage<1, 1, bool>                                                              mHasBeenTerminated;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>> const> mDeadline;
    ::ll::TypedStorage<1, 1, bool>                                                              mAssertAfterDeadline;
    ::ll::UntypedStorage<8, 16>                                                                 mLastQueueTime;
    // NOLINTEND

public:
    // prevent constructor by default
    WatchdogTimer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WatchdogTimer(
        ::WorkerPool&,
        ::Scheduler&,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        bool,
        std::function<std::chrono::time_point<
            std::chrono::steady_clock,
            std::chrono::duration<long long, std::ratio<1, 1000000000>>>()>,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        bool
    );

    MCNAPI ::TaskResult _watchdogTimerThreadRoutine();

    MCNAPI void terminateWatchdogTimer();

    MCNAPI ~WatchdogTimer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::WorkerPool&,
        ::Scheduler&,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        bool,
        std::function<std::chrono::time_point<
            std::chrono::steady_clock,
            std::chrono::duration<long long, std::ratio<1, 1000000000>>>()>,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        bool
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
