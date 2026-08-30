#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

namespace GameLightingChecker {

struct CheckAreaForLightingResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<BlockPos>> mErrorList;
    ::ll::TypedStorage<8, 8, ulong>                  mNumBlocksChecked;
    ::ll::TypedStorage<1, 1, bool>                   mSuccess;
    // NOLINTEND
};

} // namespace GameLightingChecker
