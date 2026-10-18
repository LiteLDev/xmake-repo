#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LightPropagation {

#if defined(LL_PLAT_A) // @header-generator platform
struct AccumulatedColor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> r;
    ::ll::TypedStorage<2, 2, ushort> g;
    ::ll::TypedStorage<2, 2, ushort> b;
    ushort                           maxIntensity : 4;
    ushort                           count        : 12;
    // NOLINTEND
};
#else // @header-generator platform
struct AccumulatedColor {};
#endif // @header-generator platform

} // namespace LightPropagation
