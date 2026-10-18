#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/DimensionType.h"

struct PreviousDimensionTypeComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<DimensionType>> mLastDimensionType;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::optional<::DimensionType>> mLastDimensionType;
#endif // @header-generator platform
    // NOLINTEND
};
