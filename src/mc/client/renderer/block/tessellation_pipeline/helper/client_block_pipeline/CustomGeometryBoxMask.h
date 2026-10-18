#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct CustomGeometryBoxMask {
public:
    // member variables
    // NOLINTBEGIN
    uchar faceMask         : 7;
    bool  applyRotationFix : 1;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CustomGeometryBoxMask {
public:
    // member variables
    // NOLINTBEGIN
    uchar faceMask         : 7;
    bool  applyRotationFix : 1;
    // NOLINTEND
};
#else // @header-generator platform
struct CustomGeometryBoxMask {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
