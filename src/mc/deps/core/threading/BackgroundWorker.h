#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/BackgroundTaskQueue.h"
#else // @header-generator platform
#include "mc/deps/core/container/MovePriorityQueue.h"
#include "mc/deps/core/threading/BackgroundTaskBase.h"
#endif // @header-generator platform
#include "mc/deps/core/threading/ITaskExecutionContext.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/ResetEventObj.h"
#include "mc/deps/core/threading/RunTaskContext.h"
#include "mc/deps/core/threading/TaskRunResult.h"
#else // @header-generator platform
#include "mc/deps/core/threading/SPSCQueue.h"
#endif // @header-generator platform
#include "mc/deps/profiler/ThreadFrameType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/threading/OSThreadPriority.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BackgroundTaskBase;
class WorkerPool;
struct RunTaskOptions;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::Threading { class OSThreadPriority; }
#endif // @header-generator platform
// clang-format on

class BackgroundWorker : public ::ITaskExecutionContext {
public:
    // BackgroundWorker inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class State : int {
        Initializing = 0,
        Off          = 1,
        Running      = 2,
    };

#else // @header-generator platform
#endif // @header-generator platform
    enum class RunOneResult : int {
        NoTasks      = 0,
        TaskExecuted = 1,
        Retry        = 2,
    };

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class State : int {
        Initializing = 0,
        Off          = 1,
        Running      = 2,
    };

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>   mUnk588fa6;
    ::ll::UntypedStorage<4, 4>   mUnk710ade;
    ::ll::UntypedStorage<8, 16>  mUnk13d7dc;
    ::ll::UntypedStorage<4, 8>   mUnka1b2fe;
    ::ll::UntypedStorage<8, 32>  mUnk3a56b0;
    ::ll::UntypedStorage<1, 1>   mUnk4f46c0;
    ::ll::UntypedStorage<8, 16>  mUnkd929e4;
    ::ll::UntypedStorage<4, 4>   mUnka494ab;
    ::ll::UntypedStorage<4, 4>   mUnke7131f;
    ::ll::UntypedStorage<8, 160> mUnk340fb7;
    ::ll::UntypedStorage<1, 1>   mUnkd41591;
    ::ll::UntypedStorage<8, 8>   mUnkb6dab1;
    ::ll::UntypedStorage<8, 16>  mUnk923ee5;
    ::ll::UntypedStorage<8, 8>   mUnkf38404;
    ::ll::UntypedStorage<8, 8>   mUnkaffb93;
    ::ll::UntypedStorage<8, 360> mUnk649664;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    BackgroundWorker& operator=(BackgroundWorker const&);
    BackgroundWorker(BackgroundWorker const&);
#endif // @header-generator platform
    BackgroundWorker();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BackgroundWorker();
#else // @header-generator platform
    virtual ~BackgroundWorker() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isAsync() const;
#else // @header-generator platform
    virtual bool isAsync() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canTaskRunAgain() const;
#else // @header-generator platform
    virtual bool canTaskRunAgain() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BackgroundWorker(
#if defined(LL_PLAT_A) // @header-generator platform
        std::string_view,
        ::Core::Profile::ThreadFrameType,
        bool,
        ::Bedrock::Threading::OSThreadPriority const&,
        std::optional<ulong> const,
        std::optional<int> const,
        ::WorkerPool&
#else // @header-generator platform
        ::std::string_view                            name,
        ::Core::Profile::ThreadFrameType              frameType,
        bool                                          async,
        ::Bedrock::Threading::OSThreadPriority const& priority,
        ::std::optional<uint64> const                 coreAffinity,
        ::std::optional<int> const                    idealCore,
        ::WorkerPool&                                 workerPool
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _processNextTask(::RunTaskOptions const&);
#else // @header-generator platform
    MCNAPI bool _processNextTask(::RunTaskOptions const& options);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BackgroundWorker::RunOneResult _runOneTask(::RunTaskOptions const&);
#else // @header-generator platform
    MCNAPI void queue(::std::shared_ptr<::BackgroundTaskBase> task);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getApproximateTaskCount() const;

    MCNAPI ::RunTaskOptions getRunOptions();

    MCNAPI std::__thread_id getThreadId() const;

    MCNAPI bool isIdle() const;

    MCNAPI bool processTaskSync(::RunTaskOptions const&);

    MCNAPI void queue(std::shared_ptr<BackgroundTaskBase>);

    MCNAPI void requestStop(bool);

    MCNAPI void resortPriorityQueue();
#else // @header-generator platform
    MCNAPI void requestStop(bool wait);
#endif // @header-generator platform

    MCNAPI void start();
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI void wake();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BackgroundWorker* getLocal();
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        std::string_view,
        ::Core::Profile::ThreadFrameType,
        bool,
        ::Bedrock::Threading::OSThreadPriority const&,
        std::optional<ulong> const,
        std::optional<int> const,
        ::WorkerPool&
#else // @header-generator platform
        ::std::string_view                            name,
        ::Core::Profile::ThreadFrameType              frameType,
        bool                                          async,
        ::Bedrock::Threading::OSThreadPriority const& priority,
        ::std::optional<uint64> const                 coreAffinity,
        ::std::optional<int> const                    idealCore,
        ::WorkerPool&                                 workerPool
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isAsync() const;

    MCNAPI bool $canTaskRunAgain() const;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
