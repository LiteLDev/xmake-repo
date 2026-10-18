#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
struct BlockBlockEntityDescription;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct BlockBlockEntityComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mDynamicProperties;
    // NOLINTEND
};
