#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
struct ITaskQueuePortContext {};
#else // @header-generator platform
// auto generated inclusion list
#include "mc/comprehensive/IApi.h"
#include "mc/deps/core/threading/TaskQueuePortStatus.h"
#include "mc/deps/core/threading/XTaskQueuePort.h"

// auto generated forward declare list
// clang-format off
struct ITaskQueue;
struct ITaskQueuePort;
// clang-format on

struct ITaskQueuePortContext : public ::IApi {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::XTaskQueuePort GetType() = 0;

    virtual ::TaskQueuePortStatus GetStatus() = 0;

    virtual ::ITaskQueue* GetQueue() = 0;

    virtual ::ITaskQueuePort* GetPort() = 0;

    virtual bool TrySetStatus(::TaskQueuePortStatus expectedStatus, ::TaskQueuePortStatus status) = 0;

    virtual void SetStatus(::TaskQueuePortStatus status) = 0;

    virtual void ItemQueued() = 0;

    virtual bool AddSuspend() = 0;

    virtual bool RemoveSuspend() = 0;
    // NOLINTEND
};
#endif // @header-generator platform
#endif // @header-generator platform
