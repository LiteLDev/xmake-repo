#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LightOcclusion {

#if defined(LL_PLAT_A) // @header-generator platform
class OctantBits {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mOctantBits;
    // NOLINTEND
};
#else // @header-generator platform
class OctantBits {};
#endif // @header-generator platform

} // namespace LightOcclusion
