#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class TaskGroup;
class WorkerPool;
#if defined(LL_PLAT_A) // @header-generator platform
struct TaskStartInfo;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Bedrock::Threading {

class EnableQueueForThread {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mQueueForThreadTaskGroup;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>> mQueueForThreadTaskGroup;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EnableQueueForThread();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnableQueueForThread();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI EnableQueueForThread(::WorkerPool&, ::Scheduler&, std::string);
#else // @header-generator platform
    MCAPI EnableQueueForThread(::WorkerPool& workerPool, ::Scheduler& scheduler, ::std::string name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void flushThreadTasks();
#else // @header-generator platform
    MCAPI ::Bedrock::Threading::Async<void> queue(::std::function<void()>&& callback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<void> queue(std::function<void()>&&);

    MCNAPI ::Bedrock::Threading::Async<void> queueAutoRequeue(std::function<bool()>&&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::Bedrock::Threading::Async<void> queueAutoRequeue(::std::function<bool()>&& callback);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::WorkerPool&, ::Scheduler&, std::string);
#else // @header-generator platform
    MCAPI void* $ctor(::WorkerPool& workerPool, ::Scheduler& scheduler, ::std::string name);
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Threading
