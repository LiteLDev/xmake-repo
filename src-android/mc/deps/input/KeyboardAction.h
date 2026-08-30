#pragma once

#include "mc/_HeaderOutputPredefine.h"

class KeyboardAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   state;
    ::ll::TypedStorage<1, 1, uchar> key;
    ::ll::TypedStorage<4, 4, int>   controllerId;
    ::ll::TypedStorage<4, 4, int>   lshiftState;
    ::ll::TypedStorage<4, 4, int>   controlState;
    ::ll::TypedStorage<4, 4, int>   menuState;
    ::ll::TypedStorage<1, 1, bool>  isRepeatedEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyboardAction();
};
