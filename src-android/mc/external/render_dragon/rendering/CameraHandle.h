#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

struct CameraHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mID;
    // NOLINTEND
};

} // namespace dragon::rendering
