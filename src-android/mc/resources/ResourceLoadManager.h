#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/profiler/PredeclaredAnnotation.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/resources/ResourceLoadType.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class TaskGroup;
class TaskResult;
class WorkerPool;
struct ResourceLoadManagerOptions;
// clang-format on

class ResourceLoadManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ResourceLoadManager inner types declare
    // clang-format off
    class TaskGroupState;
    class ResourceLoadTaskGroup;
    struct LoadOrder;
    // clang-format on

    // ResourceLoadManager inner types define
    class TaskGroupState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>  mRunning;
        ::ll::TypedStorage<8, 8, ulong> mPaused;
        // NOLINTEND
    };

    class ResourceLoadTaskGroup {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Bedrock::Profiler::details::PredeclaredAnnotation> mProfileAnnotation;
        ::ll::TypedStorage<4, 4, ::ResourceLoadType>                                  mLoadType;
        ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                          mTaskGroup;
        ::ll::TypedStorage<8, 24, std::vector<ResourceLoadType>>                      mDependencies;
        ::ll::TypedStorage<8, 16, ::ResourceLoadManager::TaskGroupState>              mTaskGroupState;
        ::ll::TypedStorage<1, 1, bool>                                                mTaskGroupPaused;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResourceLoadTaskGroup();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::Bedrock::Threading::Async<void>
            queue(::brstd::move_only_function<TaskResult()>, std::function<void()>, uint);

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
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, int> mRepeatedHitcountHACK;
    ::ll::TypedStorage<8, 8, ::Scheduler&> mScheduler;
    ::ll::TypedStorage<8, 8, ::WorkerPool&> mWorkerPool;
    ::ll::TypedStorage<8, 24, std::map<ResourceLoadType, std::unique_ptr<ResourceLoadManager::ResourceLoadTaskGroup>>> mResourceLoadTaskGroups;
    ::ll::TypedStorage<8, 8, ulong> mAppSuspended;
    ::ll::UntypedStorage<1, 8> mSupportsCancel;
    ::ll::UntypedStorage<1, 24> mLoggingPath;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceLoadManager& operator=(ResourceLoadManager const&);
    ResourceLoadManager(ResourceLoadManager const&);
    ResourceLoadManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourceLoadManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ResourceLoadManager(::ResourceLoadManagerOptions&&);

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
    );

    MCNAPI void setAppSuspended(bool const);

    MCNAPI void setCannotBeCanceled();

    MCNAPI bool softCancel();

    MCNAPI bool softCancel(::ResourceLoadType);

    MCNAPI void sync(::ResourceLoadType);

    MCNAPI void update();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::function<void()>
    _wrapMainThreadCallback(::ResourceLoadManager::ResourceLoadTaskGroup&, std::function<void()>&&);

    MCNAPI static void queueChild(::brstd::move_only_function<TaskResult()>, std::function<void()>, uint);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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
    // NOLINTEND
};
