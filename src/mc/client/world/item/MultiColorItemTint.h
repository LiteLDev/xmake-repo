#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

struct MultiColorItemTint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color> mBase;
    ::ll::TypedStorage<4, 16, ::mce::Color> mSecondary;
    // NOLINTEND
};
#else // @header-generator platform
struct MultiColorItemTint {};
#endif // @header-generator platform
