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
#if defined(LL_PLAT_A) // @header-generator platform
    // BackgroundTaskQueue inner types define
    using TaskPipe = ::SPSCQueue<std::shared_ptr<BackgroundTaskBase>, 512>;

    using SortingJobQueue =
        ::MovePriorityQueue<std::shared_ptr<BackgroundTaskBase>, BackgroundTaskBase::PriorityComparer>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 40, std::mutex>        mIngressLock;
    ::ll::TypedStorage<4, 40, std::mutex>        mEgressLock;
    ::ll::UntypedStorage<8, 80>                  mTasks;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mQueuedTasksCount;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>  mResortQueue;
    ::ll::TypedStorage<4, 40, std::mutex>        mQueueLock;
    ::ll::UntypedStorage<8, 24>                  mLocalPriorityQueue;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80> mUnk17700f;
    ::ll::UntypedStorage<8, 80> mUnka2b5ae;
    ::ll::UntypedStorage<8, 80> mUnka498a2;
    ::ll::UntypedStorage<8, 8>  mUnkf87f35;
    ::ll::UntypedStorage<1, 1>  mUnk681617;
    ::ll::UntypedStorage<8, 80> mUnk1cc761;
    ::ll::UntypedStorage<8, 24> mUnkcae1da;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BackgroundTaskQueue& operator=(BackgroundTaskQueue const&);
    BackgroundTaskQueue(BackgroundTaskQueue const&);
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI BackgroundTaskQueue();

#endif // @header-generator platform
    MCNAPI bool _fetchAllAvailableTasks();

    MCNAPI void flush();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getApproximateTaskCount() const;
#else // @header-generator platform
    MCNAPI void queue(::std::shared_ptr<::BackgroundTaskBase> task, bool queueImmediate);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void queue(std::shared_ptr<BackgroundTaskBase>, bool);

    MCNAPI void resortPriorityQueue();

    MCNAPI std::shared_ptr<BackgroundTaskBase> tryPop(int);

    MCNAPI ~BackgroundTaskQueue();
#else // @header-generator platform
    MCNAPI ::std::shared_ptr<::BackgroundTaskBase> tryPop(int minPriority);
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND
};
