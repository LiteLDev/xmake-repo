#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

struct RegistryStatistics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mSize;
    ::ll::TypedStorage<4, 4, uint> mCapacity;
    ::ll::TypedStorage<4, 4, uint> mThreadLocalCount;
    // NOLINTEND
};

} // namespace dragon::platform
