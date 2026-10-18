#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#endif // @header-generator platform
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/IBackgroundTaskOwner.h"
#include "mc/deps/core/threading/SharedAsync.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/threading/TaskGroupState.h"
#endif // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/editor/services/playtest/SessionResult.h"
#include "mc/network/services/signaling/ISignalingServiceConfigProvider.h"
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/Result.h"
#include "mc/platform/brstd/copyable_function.h"
#endif // @header-generator platform
#include "mc/platform/brstd/move_only_function.h"
#include "mc/platform/brstd/promise.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform
#include "mc/platform/threading/UniqueLock.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/resources/TaskGroupState.h"
#else // @header-generator platform
#include "mc/server/commands/edu/make_code_fileio/MakeCodeFileResult.h"
#include "mc/world/level/FileArchiver.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BackgroundTaskBase;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class Pack;
class ResourcePack;
#endif // @header-generator platform
class Scheduler;
class TaskResult;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class WebKey;
#endif // @header-generator platform
class WorkerPool;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class WorldPacksHistoryFile;
struct AsyncJoinAllow;
struct AsyncJoinDeny;
struct MinecraftServiceKeyInfo;
struct MinecraftServiceKeysMetadata;
struct PackSourceLoadResult;
struct SignalingClientConfiguration;
#endif // @header-generator platform
struct TaskStartInfo;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http { struct Url; }
namespace Bedrock::Services { struct AzureGetTokenHttpResponse; }
namespace Bedrock::Services { struct EnvironmentQueryResponse; }
namespace Bedrock::Threading { struct CachedAsyncRetry; }
namespace Json { class Value; }
namespace JsonRpc { class JsonRpcError; }
namespace JsonRpc { class TurnConfigResult; }
namespace MakeCodeFileIO { struct MakeCodeFileIOReadResult; }
namespace PackCommand { struct PackCommandResult; }
namespace RepositoryLoading { struct PackModifications; }
namespace Safety { struct TextFilterResult; }
namespace DedicatedServerInitialization { struct DedicatedServerInitResult; }
namespace DedicatedServerInitialization { struct NetworkSystemDep; }
namespace DedicatedServerInitialization { struct ServerInstanceDep; }
#endif // @header-generator platform
// clang-format on

class TaskGroup : public ::IBackgroundTaskOwner {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // TaskGroup inner types declare
    // clang-format off
    template<typename T0> class ThenableBase;
    // clang-format on

    // TaskGroup inner types define
    template <typename T0>
    class ThenableBase {};

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Scheduler>>  mScheduler;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::WorkerPool>> mWorkers;
    ::ll::TypedStorage<8, 32, ::std::string>                            mName;
    ::ll::TypedStorage<1, 1, bool>                                      mCheckOwnerThread;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>              mLock;
    ::ll::TypedStorage<4, 4, ::std::atomic<::TaskGroupState>>           mState;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BackgroundTaskBase>>  mTasks;
    ::ll::TypedStorage<8, 8, uint64>                                    mTaskCount;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BackgroundTaskBase>>  mEnumCurr;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BackgroundTaskBase>>  mEnumNext;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>>        mResumeTaskHandle;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>              mResumeTaskMutex;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    TaskGroup();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~TaskGroup();
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> queue_DEPRECATED(
        ::TaskStartInfo const&                        startInfo,
        ::brstd::move_only_function<::TaskResult()>&& task,
        ::std::function<void()>&&                     callback
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> queue_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<TaskResult ()>&&, std::function<void ()>&&);
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> queueSync_DEPRECATED(
        ::TaskStartInfo const&                        startInfo,
        ::brstd::move_only_function<::TaskResult()>&& task
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> queueSync_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<TaskResult ()>&&);
#else // @header-generator platform
    virtual ~TaskGroup() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void taskRegister(std::shared_ptr<BackgroundTaskBase>);
#else // @header-generator platform
    virtual void taskRegister(::std::shared_ptr<::BackgroundTaskBase> task) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void requeueTask(std::shared_ptr<BackgroundTaskBase>, bool);
#else // @header-generator platform
    virtual void requeueTask(::std::shared_ptr<::BackgroundTaskBase> task, bool queueImmediate) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::TaskGroupState getState() const;
#else // @header-generator platform
    virtual ::TaskGroupState getState() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void processCoroutines();
#else // @header-generator platform
    virtual void processCoroutines() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void taskComplete(::gsl::not_null<BackgroundTaskBase*>);
#else // @header-generator platform
    virtual void taskComplete(::gsl::not_null<::BackgroundTaskBase*> task) /*override*/;
#endif // @header-generator platform

    virtual bool _workerPoolIsAsync() const;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TaskGroup(::WorkerPool&, ::Scheduler&, std::string);
#else // @header-generator platform
    MCAPI TaskGroup(::WorkerPool& workers, ::Scheduler& context, ::std::string name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _doWorkUntil(::Bedrock::Threading::SharedAsync<void>, ::brstd::promise<void>*);
#else // @header-generator platform
    MCAPI void _doWorkUntil(::Bedrock::Threading::SharedAsync<void> task, ::brstd::promise<void>* workStarted);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _forAllTasks(
        ::Bedrock::Threading::UniqueLock<std::mutex>&,
        std::function<void(const std::shared_ptr<BackgroundTaskBase>&)>
#else // @header-generator platform
    MCAPI void _forAllTasks(
        ::Bedrock::Threading::UniqueLock<::Bedrock::Threading::Mutex>&        lock,
        ::std::function<void(::std::shared_ptr<::BackgroundTaskBase> const&)> callback
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _queueInternal(std::shared_ptr<BackgroundTaskBase>);
#else // @header-generator platform
    MCAPI void _queueInternal(::std::shared_ptr<::BackgroundTaskBase> bgtask);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong count() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI uint64 count() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void disableOwnerThreadChecks();
#else // @header-generator platform
    MCAPI void flush(::std::function<void()> waitFn);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void flush(std::function<void()>);
#else // @header-generator platform
    MCAPI bool isEmpty() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getMaxConcurrency() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void resume();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string_view getName() const;

    MCNAPI std::__thread_id getOwnerThreadID() const;

    MCNAPI ::Scheduler& getScheduler();

    MCNAPI bool isEmpty() const;

    MCNAPI void kick(uint);

    MCNAPI void pause();

    MCNAPI void resume();

    MCNAPI void sync_DEPRECATED_ASK_TOMMO(std::function<void()>);
#else // @header-generator platform
    MCAPI void sync_DEPRECATED_ASK_TOMMO(::std::function<void()> waitFn);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Threading::Async<void>
    queueChildSync_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<TaskResult()>&&);
#else // @header-generator platform
    MCAPI static ::Bedrock::Threading::Async<void>
    queueChildSync_DEPRECATED(::TaskStartInfo const& startInfo, ::brstd::move_only_function<::TaskResult()>&& task);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Threading::Async<void>
    queueChild_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<TaskResult()>&&, std::function<void()>&&);
#else // @header-generator platform
    MCAPI static ::Bedrock::Threading::Async<void> queueChild_DEPRECATED(
        ::TaskStartInfo const&                        startInfo,
        ::brstd::move_only_function<::TaskResult()>&& task,
        ::std::function<void()>&&                     callback
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::WorkerPool&, ::Scheduler&, std::string);
#else // @header-generator platform
    MCAPI void* $ctor(::WorkerPool& workers, ::Scheduler& context, ::std::string name);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<void>
    $queue_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<TaskResult()>&&, std::function<void()>&&);
#else // @header-generator platform
    MCAPI ::Bedrock::Threading::Async<void> $queue_DEPRECATED(
        ::TaskStartInfo const&                        startInfo,
        ::brstd::move_only_function<::TaskResult()>&& task,
        ::std::function<void()>&&                     callback
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<void>
    $queueSync_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<TaskResult()>&&);
#else // @header-generator platform
    MCAPI ::Bedrock::Threading::Async<void>
    $queueSync_DEPRECATED(::TaskStartInfo const& startInfo, ::brstd::move_only_function<::TaskResult()>&& task);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $taskRegister(std::shared_ptr<BackgroundTaskBase>);
#else // @header-generator platform
    MCAPI void $taskRegister(::std::shared_ptr<::BackgroundTaskBase> task);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $requeueTask(std::shared_ptr<BackgroundTaskBase>, bool);
#else // @header-generator platform
    MCAPI void $requeueTask(::std::shared_ptr<::BackgroundTaskBase> task, bool queueImmediate);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TaskGroupState $getState() const;
#else // @header-generator platform
    MCFOLD ::TaskGroupState $getState() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $processCoroutines();
#else // @header-generator platform
    MCAPI void $processCoroutines();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $taskComplete(::gsl::not_null<BackgroundTaskBase*>);
#else // @header-generator platform
    MCAPI void $taskComplete(::gsl::not_null<::BackgroundTaskBase*> task);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_workerPoolIsAsync() const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI bool $_workerPoolIsAsync() const;
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
