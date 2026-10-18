#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct WaterMovementComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mDragFactor;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initFromDefinition(::Actor&);
#else // @header-generator platform
    MCAPI void initFromDefinition(::Actor& owner);
#endif // @header-generator platform
    // NOLINTEND
};
