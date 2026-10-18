#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/IBackgroundTaskOwner.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/threading/TaskGroupState.h"
#endif // @header-generator platform
#include "mc/platform/brstd/move_only_function.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/resources/TaskGroupState.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BackgroundTaskBase;
class TaskResult;
struct TaskStartInfo;
// clang-format on

class InternalTaskGroup : public ::IBackgroundTaskOwner {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~InternalTaskGroup();
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> queue_DEPRECATED(
        ::TaskStartInfo const&,
        ::brstd::move_only_function<::TaskResult()>&&,
        ::std::function<void()>&&
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> queue_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<TaskResult ()>&&, std::function<void ()>&&);
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<void>
    queueSync_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<::TaskResult()>&&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> queueSync_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<TaskResult ()>&&);
#else // @header-generator platform
    virtual void taskRegister(::std::shared_ptr<::BackgroundTaskBase>) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void taskRegister(std::shared_ptr<BackgroundTaskBase>);
#else // @header-generator platform
    virtual void requeueTask(::std::shared_ptr<::BackgroundTaskBase>, bool) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void requeueTask(std::shared_ptr<BackgroundTaskBase>, bool);
#else // @header-generator platform
    virtual ::TaskGroupState getState() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::TaskGroupState getState() const;
#else // @header-generator platform
    virtual void processCoroutines() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void processCoroutines();

    virtual void taskComplete(::gsl::not_null<BackgroundTaskBase*>);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void taskComplete(::gsl::not_null<::BackgroundTaskBase*>) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<void>
#if defined(LL_PLAT_A) // @header-generator platform
    $queue_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<TaskResult()>&&, std::function<void()>&&);
#else // @header-generator platform
    $queue_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<::TaskResult()>&&, ::std::function<void()>&&);
#endif // @header-generator platform

    MCNAPI ::Bedrock::Threading::Async<void>
#if defined(LL_PLAT_A) // @header-generator platform
    $queueSync_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<TaskResult()>&&);
#else // @header-generator platform
    $queueSync_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<::TaskResult()>&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $taskRegister(std::shared_ptr<BackgroundTaskBase>);
#else // @header-generator platform
    MCNAPI void $taskRegister(::std::shared_ptr<::BackgroundTaskBase>);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $requeueTask(std::shared_ptr<BackgroundTaskBase>, bool);
#else // @header-generator platform
    MCNAPI void $requeueTask(::std::shared_ptr<::BackgroundTaskBase>, bool);
#endif // @header-generator platform

    MCNAPI ::TaskGroupState $getState() const;

    MCNAPI void $processCoroutines();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $taskComplete(::gsl::not_null<BackgroundTaskBase*>);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void $taskComplete(::gsl::not_null<::BackgroundTaskBase*>);
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
