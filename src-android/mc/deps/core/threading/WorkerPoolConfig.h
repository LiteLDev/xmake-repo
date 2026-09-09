#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/OSThreadPriority.h"

struct WorkerPoolConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                 threadCount;
    ::ll::UntypedStorage<4, 8>                      priority;
    ::ll::TypedStorage<8, 16, std::optional<ulong>> coreAffinityMask;
    ::ll::TypedStorage<4, 8, std::optional<int>>    idealCore;
    // NOLINTEND
};
