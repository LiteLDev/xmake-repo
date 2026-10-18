#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::frameobject::components {

#if defined(LL_PLAT_A) // @header-generator platform
struct SortIndex {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mIndex;
    // NOLINTEND
};
#else // @header-generator platform
struct SortIndex {};
#endif // @header-generator platform

} // namespace dragon::frameobject::components
