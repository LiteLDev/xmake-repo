#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobBodyRotationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mYBodyRot;
    ::ll::TypedStorage<4, 4, float> mYBodyRotO;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    MobBodyRotationComponent();
#else // @header-generator platform
#endif // @header-generator platform
};
