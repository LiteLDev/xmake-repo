#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/threading/OSThreadPriority.h"
#else // @header-generator platform
#endif // @header-generator platform

struct ThreadConfiguration {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 8>                      Priority;
    ::ll::TypedStorage<8, 16, std::optional<ulong>> CoreAffinityMask;
    ::ll::TypedStorage<4, 4, int>                   IdealCore;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnke26f23;
    ::ll::UntypedStorage<8, 16> mUnk1038f2;
    ::ll::UntypedStorage<4, 4>  mUnk992e78;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ThreadConfiguration& operator=(ThreadConfiguration const&);
    ThreadConfiguration(ThreadConfiguration const&);
    ThreadConfiguration();
#endif // @header-generator platform
};
