#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/interface/GameControllerStickState.h"

struct GameControllerStickEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                        id;
    ::ll::TypedStorage<4, 4, ::GameControllerStickState> state;
    ::ll::TypedStorage<4, 4, float>                      x;
    ::ll::TypedStorage<4, 4, float>                      y;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/interface/GameControllerStickState.h"

struct GameControllerStickEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                        id;
    ::ll::TypedStorage<4, 4, ::GameControllerStickState> state;
    ::ll::TypedStorage<4, 4, float>                      x;
    ::ll::TypedStorage<4, 4, float>                      y;
    // NOLINTEND
};
#else // @header-generator platform
struct GameControllerStickEvent {};
#endif // @header-generator platform
#endif // @header-generator platform
