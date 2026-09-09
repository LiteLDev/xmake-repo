#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

struct GLTextureWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mGLName;
    // NOLINTEND
};

} // namespace dragon::platform
