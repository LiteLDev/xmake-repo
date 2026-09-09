#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/IBackgroundTaskOwner.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/platform/brstd/promise.h"
#include "mc/platform/threading/UniqueLock.h"
#include "mc/resources/TaskGroupState.h"

// auto generated forward declare list
// clang-format off
class BackgroundTaskBase;
class Scheduler;
class TaskResult;
class WorkerPool;
struct TaskStartInfo;
// clang-format on

class TaskGroup : public ::IBackgroundTaskOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                    mScheduler;
    ::ll::UntypedStorage<8, 24>                                    mWorkers;
    ::ll::TypedStorage<8, 24, std::string>                         mName;
    ::ll::TypedStorage<1, 1, bool>                                 mCheckOwnerThread;
    ::ll::TypedStorage<4, 40, std::mutex>                          mLock;
    ::ll::TypedStorage<4, 4, std::atomic<TaskGroupState>>          mState;
    ::ll::TypedStorage<8, 16, std::shared_ptr<BackgroundTaskBase>> mTasks;
    ::ll::TypedStorage<8, 8, ulong>                                mTaskCount;
    ::ll::TypedStorage<8, 16, std::shared_ptr<BackgroundTaskBase>> mEnumCurr;
    ::ll::TypedStorage<8, 16, std::shared_ptr<BackgroundTaskBase>> mEnumNext;
    ::ll::UntypedStorage<8, 16>                                    mResumeTaskHandle;
    ::ll::TypedStorage<4, 40, std::mutex>                          mResumeTaskMutex;
    // NOLINTEND

public:
    // prevent constructor by default
    TaskGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~TaskGroup();

    virtual ::Bedrock::Threading::Async<void> queue_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<TaskResult ()>&&, std::function<void ()>&&);

    virtual ::Bedrock::Threading::Async<void> queueSync_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<TaskResult ()>&&);

    virtual void taskRegister(std::shared_ptr<BackgroundTaskBase>);

    virtual void requeueTask(std::shared_ptr<BackgroundTaskBase>, bool);

    virtual ::TaskGroupState getState() const;

    virtual void processCoroutines();

    virtual void taskComplete(::gsl::not_null<BackgroundTaskBase*>);

    virtual bool _workerPoolIsAsync() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TaskGroup(::WorkerPool&, ::Scheduler&, std::string);

    MCNAPI void _doWorkUntil(::Bedrock::Threading::SharedAsync<void>, ::brstd::promise<void>*);

    MCNAPI void _forAllTasks(
        ::Bedrock::Threading::UniqueLock<std::mutex>&,
        std::function<void(const std::shared_ptr<BackgroundTaskBase>&)>
    );

    MCNAPI void _queueInternal(std::shared_ptr<BackgroundTaskBase>);

    MCNAPI ulong count() const;

    MCNAPI void disableOwnerThreadChecks();

    MCNAPI void flush(std::function<void()>);

    MCNAPI ulong getMaxConcurrency() const;

    MCNAPI std::string_view getName() const;

    MCNAPI std::__thread_id getOwnerThreadID() const;

    MCNAPI ::Scheduler& getScheduler();

    MCNAPI bool isEmpty() const;

    MCNAPI void kick(uint);

    MCNAPI void pause();

    MCNAPI void resume();

    MCNAPI void sync_DEPRECATED_ASK_TOMMO(std::function<void()>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Threading::Async<void>
    queueChildSync_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<TaskResult()>&&);

    MCNAPI static ::Bedrock::Threading::Async<void>
    queueChild_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<TaskResult()>&&, std::function<void()>&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WorkerPool&, ::Scheduler&, std::string);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<void>
    $queue_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<TaskResult()>&&, std::function<void()>&&);

    MCNAPI ::Bedrock::Threading::Async<void>
    $queueSync_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<TaskResult()>&&);

    MCNAPI void $taskRegister(std::shared_ptr<BackgroundTaskBase>);

    MCNAPI void $requeueTask(std::shared_ptr<BackgroundTaskBase>, bool);

    MCNAPI ::TaskGroupState $getState() const;

    MCNAPI void $processCoroutines();

    MCNAPI void $taskComplete(::gsl::not_null<BackgroundTaskBase*>);

    MCNAPI bool $_workerPoolIsAsync() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
