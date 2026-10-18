#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

#if defined(LL_PLAT_A) // @header-generator platform
struct ColorWriteMask {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> mWriteMask;
    // NOLINTEND

public:
    // prevent constructor by default
    ColorWriteMask(ColorWriteMask const&);
    ColorWriteMask();
};
#else // @header-generator platform
struct ColorWriteMask {};
#endif // @header-generator platform

} // namespace dragon::rendering
