#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on
#endif // @header-generator platform

namespace GameLightingChecker {

struct CheckAreaForLightingResults {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BlockPos>> mErrorList;
    ::ll::TypedStorage<8, 8, ulong>                  mNumBlocksChecked;
    ::ll::TypedStorage<1, 1, bool>                   mSuccess;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>> mErrorList;
    ::ll::TypedStorage<8, 8, uint64>                     mNumBlocksChecked;
    ::ll::TypedStorage<1, 1, bool>                       mSuccess;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace GameLightingChecker
