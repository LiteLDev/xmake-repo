#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/OSThreadPriority.h"

struct ThreadConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>                      Priority;
    ::ll::TypedStorage<8, 16, std::optional<ulong>> CoreAffinityMask;
    ::ll::TypedStorage<4, 4, int>                   IdealCore;
    // NOLINTEND
};
