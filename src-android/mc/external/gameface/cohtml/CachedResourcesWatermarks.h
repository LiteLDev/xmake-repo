#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct CachedResourcesWatermarks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> HighWatermarkOrphanedResourcesCount;
    ::ll::TypedStorage<4, 4, uint> HighWatermarkOrphanedResourcesBytes;
    ::ll::TypedStorage<4, 4, uint> LowWatermarkOrphanedResourcesCount;
    ::ll::TypedStorage<4, 4, uint> LowWatermarkOrphanedResourcesBytes;
    // NOLINTEND
};

} // namespace cohtml
