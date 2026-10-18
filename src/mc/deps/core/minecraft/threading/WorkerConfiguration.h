#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/minecraft/threading/ThreadConfiguration.h"

struct WorkerConfiguration : public ::ThreadConfiguration {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint> NumWorkers;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk651861;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    WorkerConfiguration& operator=(WorkerConfiguration const&);
    WorkerConfiguration(WorkerConfiguration const&);
    WorkerConfiguration();
#endif // @header-generator platform
};
