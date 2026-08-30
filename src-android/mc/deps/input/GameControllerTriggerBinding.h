#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
