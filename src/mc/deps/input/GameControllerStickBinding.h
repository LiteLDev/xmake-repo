#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/enums/DirectionId.h"

struct GameControllerStickBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::DirectionId> directionId;
    bool                                    invertX : 1;
    bool                                    invertY : 1;
    ::ll::TypedStorage<4, 4, int>           stickId;
    // NOLINTEND

public:
    // prevent constructor by default
    GameControllerStickBinding();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/enums/DirectionId.h"

struct GameControllerStickBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::DirectionId> directionId;
    bool                                    invertX : 1;
    bool                                    invertY : 1;
    ::ll::TypedStorage<4, 4, int>           stickId;
    // NOLINTEND
};
#else // @header-generator platform
struct GameControllerStickBinding {};
#endif // @header-generator platform
#endif // @header-generator platform
