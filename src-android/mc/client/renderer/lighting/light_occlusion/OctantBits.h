#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LightOcclusion {

class OctantBits {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mOctantBits;
    // NOLINTEND
};

} // namespace LightOcclusion
