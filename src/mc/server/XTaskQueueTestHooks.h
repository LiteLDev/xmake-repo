#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
struct XTaskQueueTestHooks {};
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/XTaskQueuePort.h"

struct XTaskQueueTestHooks {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void NextPendingCallbackScheduled(::XTaskQueuePort, uint64, uint64);
    // NOLINTEND
};
#endif // @header-generator platform
#endif // @header-generator platform
