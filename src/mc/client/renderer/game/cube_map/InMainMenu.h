#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CubeMap {

#if defined(LL_PLAT_A) // @header-generator platform
struct InMainMenu {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsHDRCubemap;
    // NOLINTEND
};
#else // @header-generator platform
struct InMainMenu {};
#endif // @header-generator platform

} // namespace CubeMap
