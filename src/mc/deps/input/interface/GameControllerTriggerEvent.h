#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct GameControllerTriggerEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   id;
    ::ll::TypedStorage<4, 4, float> magnitude;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct GameControllerTriggerEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   id;
    ::ll::TypedStorage<4, 4, float> magnitude;
    // NOLINTEND
};
#else // @header-generator platform
struct GameControllerTriggerEvent {};
#endif // @header-generator platform
#endif // @header-generator platform
