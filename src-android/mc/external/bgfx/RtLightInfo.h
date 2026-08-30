#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct RtLightInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, float[3]> mWorldSpacePosition;
    ::ll::TypedStorage<4, 4, uint>      packedData;
    // NOLINTEND
};

} // namespace bgfx
