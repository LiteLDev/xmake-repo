#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Poi {

struct RegionId {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint> mValue;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkf6ecc9;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RegionId& operator=(RegionId const&);
    RegionId(RegionId const&);
    RegionId();
#endif // @header-generator platform
};

} // namespace Poi
