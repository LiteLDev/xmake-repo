#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::atlas {

#if defined(LL_PLAT_A) // @header-generator platform
struct AtlasTileDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mWidth;
    ::ll::TypedStorage<4, 4, uint> mHeight;
    // NOLINTEND
};
#else // @header-generator platform
struct AtlasTileDescription {};
#endif // @header-generator platform

} // namespace dragon::atlas
