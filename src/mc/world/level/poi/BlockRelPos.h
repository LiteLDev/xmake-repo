#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Poi {

struct BlockRelPos {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint> mValue;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk6cb247;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BlockRelPos& operator=(BlockRelPos const&);
    BlockRelPos(BlockRelPos const&);
    BlockRelPos();
#endif // @header-generator platform
};

} // namespace Poi
