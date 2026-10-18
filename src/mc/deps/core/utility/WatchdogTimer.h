#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskStartInfo.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class Scheduler;
#if defined(LL_PLAT_A) // @header-generator platform
class TaskGroup;
#else // @header-generator platform
#endif // @header-generator platform
class TaskResult;
class WorkerPool;
// clang-format on

class WatchdogTimer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk9fc17e;
    ::ll::UntypedStorage<8, 40> mUnk29d8f5;
    ::ll::UntypedStorage<8, 8>  mUnk9981f4;
    ::ll::UntypedStorage<8, 64> mUnk52bf64;
    ::ll::UntypedStorage<8, 16> mUnk70ca0a;
    ::ll::UntypedStorage<8, 80> mUnk646dac;
    ::ll::UntypedStorage<1, 1>  mUnk3d77c6;
    ::ll::UntypedStorage<8, 8>  mUnkae7778;
    ::ll::UntypedStorage<1, 1>  mUnk296058;
    ::ll::UntypedStorage<8, 8>  mUnk39e2bf;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    WatchdogTimer& operator=(WatchdogTimer const&);
    WatchdogTimer(WatchdogTimer const&);
#endif // @header-generator platform
    WatchdogTimer();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI WatchdogTimer(
        ::WorkerPool&                                              workerPool,
        ::Scheduler&                                               scheduler,
        ::std::chrono::nanoseconds                                 timeout,
        bool                                                       startPaused,
        ::std::function<::std::chrono::steady_clock::time_point()> timeoutCallback,
        ::std::chrono::nanoseconds                                 deadline,
        bool                                                       assertOnDeadline
    );

    MCNAPI ::TaskResult _watchdogTimerThreadRoutine();

    MCNAPI void terminateWatchdogTimer();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::WorkerPool&                                              workerPool,
        ::Scheduler&                                               scheduler,
        ::std::chrono::nanoseconds                                 timeout,
        bool                                                       startPaused,
        ::std::function<::std::chrono::steady_clock::time_point()> timeoutCallback,
        ::std::chrono::nanoseconds                                 deadline,
        bool                                                       assertOnDeadline
    );
#endif
#endif // @header-generator platform
    // NOLINTEND
};
