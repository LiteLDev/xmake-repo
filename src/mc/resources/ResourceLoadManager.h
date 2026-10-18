#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/Path.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/profiler/PredeclaredAnnotation.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/move_only_function.h"
#include "mc/resources/ResourceLoadType.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Scheduler;
class TaskGroup;
#else // @header-generator platform
#endif // @header-generator platform
class TaskResult;
#if defined(LL_PLAT_A) // @header-generator platform
class WorkerPool;
#else // @header-generator platform
#endif // @header-generator platform
struct ResourceLoadManagerOptions;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::Profiler::details { struct PredeclaredAnnotation; }
#endif // @header-generator platform
// clang-format on

class ResourceLoadManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ResourceLoadManager inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct LoadOrder;
#endif // @header-generator platform
    class TaskGroupState;
    class ResourceLoadTaskGroup;
#if defined(LL_PLAT_A) // @header-generator platform
    struct LoadOrder;
#else // @header-generator platform
#endif // @header-generator platform
    // clang-format on

    // ResourceLoadManager inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct LoadOrder {};

#endif // @header-generator platform
    class TaskGroupState {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>  mRunning;
        ::ll::TypedStorage<8, 8, ulong> mPaused;
#else // @header-generator platform
        ::ll::UntypedStorage<1, 1> mUnkfc3423;
        ::ll::UntypedStorage<8, 8> mUnkeadda9;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        TaskGroupState& operator=(TaskGroupState const&);
        TaskGroupState(TaskGroupState const&);
        TaskGroupState();
#endif // @header-generator platform
    };

    class ResourceLoadTaskGroup {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::Bedrock::Profiler::details::PredeclaredAnnotation> mProfileAnnotation;
        ::ll::TypedStorage<4, 4, ::ResourceLoadType>                                  mLoadType;
        ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                          mTaskGroup;
        ::ll::TypedStorage<8, 24, std::vector<ResourceLoadType>>                      mDependencies;
        ::ll::TypedStorage<8, 16, ::ResourceLoadManager::TaskGroupState>              mTaskGroupState;
        ::ll::TypedStorage<1, 1, bool>                                                mTaskGroupPaused;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8>  mUnk448294;
        ::ll::UntypedStorage<4, 4>  mUnkfb510f;
        ::ll::UntypedStorage<8, 8>  mUnk6c2afd;
        ::ll::UntypedStorage<8, 24> mUnk43122d;
        ::ll::UntypedStorage<8, 16> mUnkac15ed;
        ::ll::UntypedStorage<1, 1>  mUnkd78565;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        ResourceLoadTaskGroup& operator=(ResourceLoadTaskGroup const&);
        ResourceLoadTaskGroup(ResourceLoadTaskGroup const&);
#endif // @header-generator platform
        ResourceLoadTaskGroup();

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::Bedrock::Threading::Async<void>
            queue(::brstd::move_only_function<TaskResult()>, std::function<void()>, uint);
#else // @header-generator platform
        MCNAPI ::Bedrock::Threading::Async<void> queue(
            ::brstd::move_only_function<::TaskResult()> threadedCallback,
            ::std::function<void()>                     mainThreadCallback,
            uint                                        taskPriority
        );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~ResourceLoadTaskGroup();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct LoadOrder {
    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static uint const& UITexture_Load();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCNAPI ::Bedrock::Threading::Async<void>
        queueAsync(::brstd::move_only_function<::TaskResult()> callback, uint taskPriority);

        MCNAPI ::Bedrock::Threading::Async<void>
        queueSync(::brstd::move_only_function<::TaskResult()> callback, uint taskPriority);
#endif
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 4, int> mRepeatedHitcountHACK;
    ::ll::TypedStorage<8, 8, ::Scheduler&> mScheduler;
    ::ll::TypedStorage<8, 8, ::WorkerPool&> mWorkerPool;
    ::ll::TypedStorage<8, 24, std::map<ResourceLoadType, std::unique_ptr<ResourceLoadManager::ResourceLoadTaskGroup>>> mResourceLoadTaskGroups;
    ::ll::TypedStorage<8, 8, ulong> mAppSuspended;
    ::ll::UntypedStorage<1, 8> mSupportsCancel;
    ::ll::UntypedStorage<1, 24> mLoggingPath;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk641f6f;
    ::ll::UntypedStorage<8, 8>  mUnkbc3f4e;
    ::ll::UntypedStorage<8, 8>  mUnk833b4d;
    ::ll::UntypedStorage<8, 16> mUnk2466a3;
    ::ll::UntypedStorage<8, 8>  mUnkb77267;
    ::ll::UntypedStorage<1, 1>  mUnk8953d0;
    ::ll::UntypedStorage<8, 32> mUnkc455ca;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceLoadManager& operator=(ResourceLoadManager const&);
    ResourceLoadManager(ResourceLoadManager const&);
    ResourceLoadManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ResourceLoadManager();
#else // @header-generator platform
    virtual ~ResourceLoadManager() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ResourceLoadManager(::ResourceLoadManagerOptions&&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI explicit ResourceLoadManager(::ResourceLoadManagerOptions&& ops);

    MCNAPI bool areDependenciesLoaded(::ResourceLoadType resourceLoadType) const;

    MCNAPI bool isComplete() const;

    MCNAPI bool isComplete(::ResourceLoadType resourceLoadType) const;

    MCNAPI void printRunningTasks();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _cancel();

    MCNAPI void _initializeResourceLoadTaskGroups();

    MCNAPI bool areDependenciesLoaded(::ResourceLoadType) const;

    MCNAPI void hardCancel();

    MCNAPI bool isComplete() const;

    MCNAPI bool isComplete(::ResourceLoadType) const;

    MCNAPI bool isSuspended();

    MCNAPI void printRunningTasks();

    MCNAPI ::Bedrock::Threading::Async<void>
        queue(::ResourceLoadType, ::brstd::move_only_function<TaskResult()>, std::function<void()>, uint);

    MCNAPI ::Bedrock::Threading::Async<void>
        queueAsync(::ResourceLoadType, ::brstd::move_only_function<TaskResult()>, uint);

    MCNAPI ::Bedrock::Threading::Async<void>
        queueSync(::ResourceLoadType, ::brstd::move_only_function<TaskResult()>, uint);

    MCNAPI void registerResourceLoadTaskGroup(
        std::string_view,
        ::Bedrock::Profiler::details::PredeclaredAnnotation&&,
        ::ResourceLoadType,
        std::vector<ResourceLoadType>
#else // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<void> queue(
        ::ResourceLoadType                          resourceLoadType,
        ::brstd::move_only_function<::TaskResult()> threadedCallback,
        ::std::function<void()>                     mainThreadCallback,
        uint                                        taskPriority
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setAppSuspended(bool const);

    MCNAPI void setCannotBeCanceled();

    MCNAPI bool softCancel();

    MCNAPI bool softCancel(::ResourceLoadType);

    MCNAPI void sync(::ResourceLoadType);

    MCNAPI void update();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Threading::Async<void> queueAsync(
        ::ResourceLoadType                          resourceLoadType,
        ::brstd::move_only_function<::TaskResult()> callback,
        uint                                        taskPriority
    );

    MCNAPI ::Bedrock::Threading::Async<void> queueSync(
        ::ResourceLoadType                          resourceLoadType,
        ::brstd::move_only_function<::TaskResult()> callback,
        uint                                        taskPriority
    );

    MCNAPI void registerResourceLoadTaskGroup(
        ::std::string_view                                    groupName,
        ::Bedrock::Profiler::details::PredeclaredAnnotation&& annotation,
        ::ResourceLoadType                                    resourceLoadType,
        ::std::vector<::ResourceLoadType>                     dependencies
    );

    MCNAPI void setAppSuspended(bool suspended);

    MCNAPI bool softCancel();

    MCNAPI void sync(::ResourceLoadType resourceLoadType);

    MCNAPI void update();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::function<void()>
    _wrapMainThreadCallback(::ResourceLoadManager::ResourceLoadTaskGroup&, std::function<void()>&&);
#else // @header-generator platform
    MCNAPI static ::std::function<void()> _wrapMainThreadCallback(
        ::ResourceLoadManager::ResourceLoadTaskGroup& resourceLoadTaskGroup,
        ::std::function<void()>&&                     mainThreadCallback
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void queueChild(::brstd::move_only_function<TaskResult()>, std::function<void()>, uint);
#else // @header-generator platform
    MCNAPI static void queueChild(
        ::brstd::move_only_function<::TaskResult()> threadedCallback,
        ::std::function<void()>                     mainThreadCallback,
        uint                                        taskPriority
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ResourceLoadManagerOptions&&);
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
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::ResourceLoadManagerOptions&& ops);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
