#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Memory {

class InternalMemoryTracker {
public:
    // InternalMemoryTracker inner types declare
    // clang-format off
    struct MemoryTrackerPublishedCategoryStats;
    // clang-format on

    // InternalMemoryTracker inner types define
    struct MemoryTrackerPublishedCategoryStats {};
};

} // namespace Memory
#endif // @header-generator platform
