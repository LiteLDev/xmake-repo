#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Gameface::RenderUtils {

struct BackendRenderConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mPreferCPUWorkload;
    ::ll::TypedStorage<1, 1, bool> mIsR8TexturesSupported;
    // NOLINTEND
};

} // namespace Gameface::RenderUtils
