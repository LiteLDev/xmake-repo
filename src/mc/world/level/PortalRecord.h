#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class PortalRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mBaseBlockPos;
    ::ll::TypedStorage<1, 1, schar>       mSpan;
    ::ll::TypedStorage<1, 1, schar>       mXInc;
    ::ll::TypedStorage<1, 1, schar>       mZInc;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PortalRecord();
#else // @header-generator platform
#endif // @header-generator platform
};
