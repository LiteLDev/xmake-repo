#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

#if defined(LL_PLAT_A) // @header-generator platform
struct GLTextureWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mGLName;
    // NOLINTEND
};
#else // @header-generator platform
struct GLTextureWrapper {};
#endif // @header-generator platform

} // namespace dragon::platform
