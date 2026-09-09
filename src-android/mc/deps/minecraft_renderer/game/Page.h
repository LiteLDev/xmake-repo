#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::detail {

struct Page {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::byte>> mMemory;
    ::ll::TypedStorage<8, 24, std::vector<bool>>      mOccupancy;
    ::ll::TypedStorage<8, 8, ulong>                   mOccupiedCount;
    ::ll::TypedStorage<8, 8, ulong>                   mVolumesPerPage;
    ::ll::TypedStorage<1, 1, bool>                    mInPool;
    // NOLINTEND
};

} // namespace mce::detail
