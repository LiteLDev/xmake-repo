#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/MovePriorityQueue.h"
#include "mc/deps/core/threading/BackgroundTaskBase.h"
#include "mc/deps/core/threading/SPSCQueue.h"

// auto generated forward declare list
// clang-format off
class BackgroundTaskBase;
// clang-format on

class BackgroundTaskQueue {
public:
    // BackgroundTaskQueue inner types define
    using TaskPipe = ::SPSCQueue<std::shared_ptr<BackgroundTaskBase>, 512>;

    using SortingJobQueue =
        ::MovePriorityQueue<std::shared_ptr<BackgroundTaskBase>, BackgroundTaskBase::PriorityComparer>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::mutex>        mIngressLock;
    ::ll::TypedStorage<4, 40, std::mutex>        mEgressLock;
    ::ll::UntypedStorage<8, 80>                  mTasks;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mQueuedTasksCount;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>  mResortQueue;
    ::ll::TypedStorage<4, 40, std::mutex>        mQueueLock;
    ::ll::UntypedStorage<8, 24>                  mLocalPriorityQueue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _fetchAllAvailableTasks();

    MCNAPI void flush();

    MCNAPI ulong getApproximateTaskCount() const;

    MCNAPI void queue(std::shared_ptr<BackgroundTaskBase>, bool);

    MCNAPI void resortPriorityQueue();

    MCNAPI std::shared_ptr<BackgroundTaskBase> tryPop(int);

    MCNAPI ~BackgroundTaskQueue();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
