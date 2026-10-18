#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/threading/OSThreadPriority.h"
#else // @header-generator platform
#endif // @header-generator platform

struct WorkerPoolConfig {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                 threadCount;
    ::ll::UntypedStorage<4, 8>                      priority;
    ::ll::TypedStorage<8, 16, std::optional<ulong>> coreAffinityMask;
    ::ll::TypedStorage<4, 8, std::optional<int>>    idealCore;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkb40ef3;
    ::ll::UntypedStorage<4, 4>  mUnk36a3d0;
    ::ll::UntypedStorage<8, 16> mUnk8952ba;
    ::ll::UntypedStorage<4, 8>  mUnkd55de7;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    WorkerPoolConfig& operator=(WorkerPoolConfig const&);
    WorkerPoolConfig(WorkerPoolConfig const&);
    WorkerPoolConfig();
#endif // @header-generator platform
};
