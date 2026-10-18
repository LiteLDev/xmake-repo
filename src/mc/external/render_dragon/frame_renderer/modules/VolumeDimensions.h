#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules {

#if defined(LL_PLAT_A) // @header-generator platform
struct VolumeDimensions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mWidth;
    ::ll::TypedStorage<4, 4, int> mHeight;
    ::ll::TypedStorage<4, 4, int> mDepth;
    // NOLINTEND
};
#else // @header-generator platform
struct VolumeDimensions {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::modules
