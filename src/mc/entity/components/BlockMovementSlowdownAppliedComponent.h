#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct BlockMovementSlowdownAppliedComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mWasZero;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BlockMovementSlowdownAppliedComponent();
#else // @header-generator platform
#endif // @header-generator platform
};
