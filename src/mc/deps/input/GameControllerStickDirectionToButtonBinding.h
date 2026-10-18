#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/enums/DirectionId.h"

struct GameControllerStickDirectionToButtonBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::DirectionId>  directionId;
    ::ll::TypedStorage<8, 32, ::std::string> buttonName;
    // NOLINTEND
};
#else // @header-generator platform
struct GameControllerStickDirectionToButtonBinding {};
#endif // @header-generator platform
#endif // @header-generator platform
