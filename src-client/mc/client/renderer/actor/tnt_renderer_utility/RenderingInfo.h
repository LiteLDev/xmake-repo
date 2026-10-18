#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

namespace TntRendererUtility {

struct RenderingInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>         mScale;
    ::ll::TypedStorage<4, 16, ::mce::Color> mCurrentShaderColor;
    ::ll::TypedStorage<1, 1, bool>          mIsBlinking;
    // NOLINTEND
};

} // namespace TntRendererUtility
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
