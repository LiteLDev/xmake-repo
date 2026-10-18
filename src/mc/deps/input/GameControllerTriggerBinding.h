#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct GameControllerTriggerBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> buttonName;
    ::ll::TypedStorage<4, 4, int>          triggerId;
    ::ll::TypedStorage<4, 4, float>        triggerThreshold;
    // NOLINTEND

public:
    // prevent constructor by default
    GameControllerTriggerBinding();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct GameControllerTriggerBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> buttonName;
    ::ll::TypedStorage<4, 4, int>            triggerId;
    ::ll::TypedStorage<4, 4, float>          triggerThreshold;
    // NOLINTEND
};
#else // @header-generator platform
struct GameControllerTriggerBinding {};
#endif // @header-generator platform
#endif // @header-generator platform
