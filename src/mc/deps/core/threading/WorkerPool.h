#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/MovePriorityQueue.h"
#include "mc/deps/core/threading/BackgroundTaskBase.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/BackgroundTaskQueue.h"
#include "mc/deps/core/threading/BackgroundWorkerPerfInfo.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/profiler/ThreadFrameType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/flat_set.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/threading/OSThreadPriority.h"
#include "mc/platform/threading/SpinLockImpl.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BackgroundTaskBase;
#if defined(LL_PLAT_A) // @header-generator platform
class BackgroundWorker;
class Scheduler;
struct WorkerPoolConfig;
#else // @header-generator platform
namespace Bedrock::Threading { class Mutex; }
#endif // @header-generator platform
// clang-format on

class WorkerPool : public ::Bedrock::EnableNonOwnerReferences {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // WorkerPool inner types define
    using PendingJobQueue =
        ::MovePriorityQueue<std::shared_ptr<BackgroundTaskBase>, BackgroundTaskBase::PendingComparer>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>   mUnkc24dea;
    ::ll::UntypedStorage<8, 24>  mUnkd8a69f;
    ::ll::UntypedStorage<8, 32>  mUnk7789a2;
    ::ll::UntypedStorage<8, 64>  mUnk66023e;
    ::ll::UntypedStorage<8, 8>   mUnk462341;
    ::ll::UntypedStorage<8, 8>   mUnk5991a5;
    ::ll::UntypedStorage<8, 80>  mUnk7be3ee;
    ::ll::UntypedStorage<4, 4>   mUnkda7062;
    ::ll::UntypedStorage<4, 4>   mUnk853032;
    ::ll::UntypedStorage<8, 24>  mUnkceb84a;
    ::ll::UntypedStorage<8, 24>  mUnk6b6c7b;
    ::ll::UntypedStorage<8, 8>   mUnk5695b7;
    ::ll::UntypedStorage<8, 360> mUnk40c061;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    WorkerPool& operator=(WorkerPool const&);
    WorkerPool(WorkerPool const&);
#endif // @header-generator platform
    WorkerPool();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~WorkerPool();
#else // @header-generator platform
    virtual ~WorkerPool() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI WorkerPool(std::string_view, ::Scheduler&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::std::vector<::std::thread::id> getThreadIds() const;

    MCNAPI void kick(uint64 count);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _checkPendingWork();
#else // @header-generator platform
    MCNAPI void queue(::std::shared_ptr<::BackgroundTaskBase> task, bool queueImmediate);
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::__thread_id> getThreadIds() const;

    MCNAPI void queue(std::shared_ptr<BackgroundTaskBase>, bool);

    MCNAPI ulong size() const;

    MCNAPI std::shared_ptr<BackgroundTaskBase> tryPop(int);
#else // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _registerPool(::WorkerPool& pool);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::brstd::flat_set<WorkerPool*, std::less<WorkerPool*>, std::vector<WorkerPool*>>& sAllPools();
#else // @header-generator platform
    MCNAPI static ::brstd::flat_set<::WorkerPool*, ::std::less<::WorkerPool*>, ::std::vector<::WorkerPool*>>&
    sAllPools();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI static ::Bedrock::Threading::Mutex& sAllPoolsMutex();
#endif // @header-generator platform
    // NOLINTEND
};
