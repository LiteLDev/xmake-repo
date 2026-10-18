#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer {

#if defined(LL_PLAT_A) // @header-generator platform
struct OrderSortKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mIndex;
    // NOLINTEND
};
#else // @header-generator platform
struct OrderSortKey {};
#endif // @header-generator platform

} // namespace dragon::framerenderer
