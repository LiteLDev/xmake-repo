#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::Threading {

#if defined(LL_PLAT_A) // @header-generator platform
class EnableFIFOQueueForMainThread : public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // EnableFIFOQueueForMainThread inner types define
    using Task = std::function<void()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, std::deque<std::function<void()>>> mQueue;
    ::ll::TypedStorage<4, 40, std::mutex>                        mQueueMutex;
    // NOLINTEND

public:
    // prevent constructor by default
    EnableFIFOQueueForMainThread();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnableFIFOQueueForMainThread();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EnableFIFOQueueForMainThread(std::string);

    MCNAPI void queueForMainThreadFIFO(std::function<void()>&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string);
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
#else // @header-generator platform
class EnableFIFOQueueForMainThread {};
#endif // @header-generator platform

} // namespace Bedrock::Threading
