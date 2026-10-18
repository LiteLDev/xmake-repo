#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct BlockDestructInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> destructRate;
    ::ll::TypedStorage<4, 4, float> destructProgress;
    // NOLINTEND
};
#else // @header-generator platform
struct BlockDestructInfo {};
#endif // @header-generator platform
