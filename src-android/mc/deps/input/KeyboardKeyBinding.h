#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/enums/FocusImpact.h"

struct KeyboardKeyBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>  buttonName;
    ::ll::TypedStorage<4, 4, int>           keyNum;
    ::ll::TypedStorage<1, 1, ::FocusImpact> focusImpact;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyboardKeyBinding();
};
