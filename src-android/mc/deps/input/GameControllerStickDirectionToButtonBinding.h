#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/enums/DirectionId.h"

struct GameControllerStickDirectionToButtonBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::DirectionId> directionId;
    ::ll::TypedStorage<8, 24, std::string>  buttonName;
    // NOLINTEND

public:
    // prevent constructor by default
    GameControllerStickDirectionToButtonBinding();
};
