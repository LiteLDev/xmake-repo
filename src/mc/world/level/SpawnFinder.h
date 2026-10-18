#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

class SpawnFinder {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<BlockPos> findStandupPosition(::BlockPos const&, ::BlockSource const&);
#else // @header-generator platform
    MCNAPI static ::std::optional<::BlockPos>
    findStandupPosition(::BlockPos const& requestedPosition, ::BlockSource const& region);
#endif // @header-generator platform
    // NOLINTEND
};
