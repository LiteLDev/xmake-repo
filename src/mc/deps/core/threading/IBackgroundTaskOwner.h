#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
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

class IBackgroundTaskOwner {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~IBackgroundTaskOwner();
#else // @header-generator platform
    virtual ~IBackgroundTaskOwner() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> queue_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<TaskResult ()>&&, std::function<void ()>&&) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> queue_DEPRECATED(
        ::TaskStartInfo const&                        startInfo,
        ::brstd::move_only_function<::TaskResult()>&& task,
        ::std::function<void()>&&                     callback
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> queueSync_DEPRECATED(::TaskStartInfo const&, ::brstd::move_only_function<TaskResult ()>&&) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<void>
    queueSync_DEPRECATED(::TaskStartInfo const& startInfo, ::brstd::move_only_function<::TaskResult()>&& task) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void taskRegister(std::shared_ptr<BackgroundTaskBase>) = 0;
#else // @header-generator platform
    virtual void taskRegister(::std::shared_ptr<::BackgroundTaskBase> task) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void requeueTask(std::shared_ptr<BackgroundTaskBase>, bool) = 0;
#else // @header-generator platform
    virtual void requeueTask(::std::shared_ptr<::BackgroundTaskBase> task, bool queueImmediate) = 0;
#endif // @header-generator platform

    virtual ::TaskGroupState getState() const = 0;

    virtual void processCoroutines() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void taskComplete(::gsl::not_null<BackgroundTaskBase*>) = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void taskComplete(::gsl::not_null<::BackgroundTaskBase*> task) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
