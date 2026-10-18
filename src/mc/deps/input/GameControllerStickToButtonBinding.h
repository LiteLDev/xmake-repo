#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/enums/DirectionId.h"

struct GameControllerStickToButtonBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::DirectionId> directionId;
    ::ll::TypedStorage<4, 4, int>           stickId;
    ::ll::TypedStorage<8, 24, std::string>  buttonName;
    ::ll::TypedStorage<1, 1, bool>          exclusive;
    // NOLINTEND

public:
    // prevent constructor by default
    GameControllerStickToButtonBinding();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/enums/DirectionId.h"

struct GameControllerStickToButtonBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::DirectionId>  directionId;
    ::ll::TypedStorage<4, 4, int>            stickId;
    ::ll::TypedStorage<8, 32, ::std::string> buttonName;
    ::ll::TypedStorage<1, 1, bool>           exclusive;
    // NOLINTEND
};
#else // @header-generator platform
struct GameControllerStickToButtonBinding {};
#endif // @header-generator platform
#endif // @header-generator platform
