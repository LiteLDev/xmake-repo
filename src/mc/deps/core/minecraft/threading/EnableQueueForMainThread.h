#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/Async.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/threading/EnableQueueForThread.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
struct TaskStartInfo;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::Threading {

class EnableQueueForMainThread : public ::Bedrock::Threading::EnableQueueForThread {
public:
    // prevent constructor by default
    EnableQueueForMainThread();

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnableQueueForMainThread();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit EnableQueueForMainThread(std::string);

    MCNAPI void flushMainThreadTasks();

    MCNAPI ::Bedrock::Threading::Async<void> queueForMainThread(std::function<void()>&&);

    MCNAPI ::Bedrock::Threading::Async<void> queueForMainThreadAutoRequeue(std::function<bool()>&&);
#else // @header-generator platform
    MCAPI explicit EnableQueueForMainThread(::std::string name);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::std::string name);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Threading
