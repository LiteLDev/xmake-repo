#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BlockSource;
class LevelChunk;
// clang-format on

class LevelChunkClientUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void updateCachedData(::LevelChunk&, ::BlockSource&);
    // NOLINTEND
};
#else // @header-generator platform
class LevelChunkClientUtils {};
#endif // @header-generator platform
