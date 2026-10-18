#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Poi {

struct ChunkRelPos {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<2, 2, ushort> mValue;
#else // @header-generator platform
    ::ll::UntypedStorage<2, 2> mUnkaf6c8c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ChunkRelPos& operator=(ChunkRelPos const&);
    ChunkRelPos(ChunkRelPos const&);
    ChunkRelPos();
#endif // @header-generator platform
};

} // namespace Poi
