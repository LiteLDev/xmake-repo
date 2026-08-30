#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/BackgroundTaskQueue.h"
#include "mc/deps/core/threading/ITaskExecutionContext.h"
#include "mc/deps/core/threading/ResetEventObj.h"
#include "mc/deps/core/threading/RunTaskContext.h"
#include "mc/deps/core/threading/TaskRunResult.h"
#include "mc/deps/profiler/ThreadFrameType.h"
#include "mc/platform/threading/OSThreadPriority.h"

// auto generated forward declare list
// clang-format off
class BackgroundTaskBase;
class WorkerPool;
struct RunTaskOptions;
// clang-format on

class BackgroundWorker : public ::ITaskExecutionContext {
public:
    // BackgroundWorker inner types define
    enum class State : int {
        Initializing = 0,
        Off          = 1,
        Running      = 2,
    };

    enum class RunOneResult : int {
        NoTasks      = 0,
        TaskExecuted = 1,
        Retry        = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool const> mAsync;
    ::ll::UntypedStorage<4, 0> mPriority;
    ::ll::TypedStorage<8, 16, std::optional<ulong>> mCoreAffinity;
    ::ll::TypedStorage<4, 8, std::optional<int>> mIdealCore;
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<1, 1, ::Core::Profile::ThreadFrameType> mFrameType;
    ::ll::TypedStorage<8, 8, std::thread> mThread;
    ::ll::UntypedStorage<8, 8> mWorkerThreadID;
    ::ll::UntypedStorage<4, 8> mState;
    ::ll::UntypedStorage<4, 96> mResetEvent;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mIdle;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mIdleSinceTime;
    ::ll::TypedStorage<8, 16, std::shared_ptr<BackgroundTaskBase>> mCurrentTask;
    ::ll::TypedStorage<8, 8, ::WorkerPool&> mWorkerPool;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mMaxSpinlockDuration;
    ::ll::TypedStorage<8, 240, ::BackgroundTaskQueue> mTaskQueue;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    BackgroundWorker();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BackgroundWorker();

    virtual bool isAsync() const;

    virtual bool canTaskRunAgain() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BackgroundWorker(
        std::string_view,
        ::Core::Profile::ThreadFrameType,
        bool,
        ::Bedrock::Threading::OSThreadPriority const&,
        std::optional<ulong> const,
        std::optional<int> const,
        ::WorkerPool&
    );

    MCNAPI bool _processNextTask(::RunTaskOptions const&);

    MCNAPI ::BackgroundWorker::RunOneResult _runOneTask(::RunTaskOptions const&);

    MCNAPI ulong getApproximateTaskCount() const;

    MCNAPI ::RunTaskOptions getRunOptions();

    MCNAPI std::__thread_id getThreadId() const;

    MCNAPI bool isIdle() const;

    MCNAPI bool processTaskSync(::RunTaskOptions const&);

    MCNAPI void queue(std::shared_ptr<BackgroundTaskBase>);

    MCNAPI void requestStop(bool);

    MCNAPI void resortPriorityQueue();

    MCNAPI void start();

    MCNAPI void wake();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BackgroundWorker* getLocal();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BackgroundWorker*& gLocalWorkerMappingSingleton();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::string_view,
        ::Core::Profile::ThreadFrameType,
        bool,
        ::Bedrock::Threading::OSThreadPriority const&,
        std::optional<ulong> const,
        std::optional<int> const,
        ::WorkerPool&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isAsync() const;

    MCNAPI bool $canTaskRunAgain() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
