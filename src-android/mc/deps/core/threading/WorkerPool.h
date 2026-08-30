#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/MovePriorityQueue.h"
#include "mc/deps/core/threading/BackgroundTaskBase.h"
#include "mc/deps/core/threading/BackgroundTaskQueue.h"
#include "mc/deps/core/threading/BackgroundWorkerPerfInfo.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/profiler/ThreadFrameType.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/platform/threading/OSThreadPriority.h"
#include "mc/platform/threading/SpinLockImpl.h"

// auto generated forward declare list
// clang-format off
class BackgroundTaskBase;
class BackgroundWorker;
class Scheduler;
struct WorkerPoolConfig;
// clang-format on

class WorkerPool : public ::Bedrock::EnableNonOwnerReferences {
public:
    // WorkerPool inner types define
    using PendingJobQueue =
        ::MovePriorityQueue<std::shared_ptr<BackgroundTaskBase>, BackgroundTaskBase::PendingComparer>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool const> mAsync;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<BackgroundWorker>>> mWorkers;
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 64, ::BackgroundWorkerPerfInfo> mPerfInfo;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastPerfInfoUpdate;
    ::ll::TypedStorage<8, 8, ::Scheduler*> mOwnerScheduler;
    ::ll::TypedStorage<4, 40, std::mutex> mSuspendLock;
    ::ll::TypedStorage<4, 4, ::Bedrock::Threading::OSThreadPriority> mPoolPriority;
    ::ll::TypedStorage<4, 4, float> mMinBacklogDurationSeconds;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl> mPendingWorkQueueLock;
    ::ll::UntypedStorage<8, 24> mPendingWorkQueue;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNextPendingWorkTime;
    ::ll::TypedStorage<8, 240, ::BackgroundTaskQueue> mTaskQueue;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    WorkerPool();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorkerPool();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorkerPool(std::string_view, ::Scheduler&);

    MCNAPI bool _checkPendingWork();

    MCNAPI std::vector<std::__thread_id> getThreadIds() const;

    MCNAPI void queue(std::shared_ptr<BackgroundTaskBase>, bool);

    MCNAPI ulong size() const;

    MCNAPI std::shared_ptr<BackgroundTaskBase> tryPop(int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::brstd::flat_set<WorkerPool*, std::less<WorkerPool*>, std::vector<WorkerPool*>>& sAllPools();

    MCNAPI static std::mutex& sAllPoolsMutex();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string_view, ::Scheduler&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
