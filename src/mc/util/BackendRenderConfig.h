#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Gameface::RenderUtils {

#if defined(LL_PLAT_A) // @header-generator platform
struct BackendRenderConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mPreferCPUWorkload;
    ::ll::TypedStorage<1, 1, bool> mIsR8TexturesSupported;
    // NOLINTEND
};
#else // @header-generator platform
struct BackendRenderConfig {};
#endif // @header-generator platform

} // namespace Gameface::RenderUtils
