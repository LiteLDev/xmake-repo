#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TouchConditionalGuiPassthroughBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>         areaBindingName;
    ::ll::TypedStorage<8, 24, std::string> buttonName;
    ::ll::TypedStorage<4, 4, uint>         conditionBindingName;
    ::ll::TypedStorage<1, 1, bool>         consumeInput;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchConditionalGuiPassthroughBinding();
};
