#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/enums/DirectionId.h"

struct DirectionEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::DirectionId> id;
    ::ll::TypedStorage<4, 4, float>         x;
    ::ll::TypedStorage<4, 4, float>         y;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/enums/DirectionId.h"

struct DirectionEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::DirectionId> id;
    ::ll::TypedStorage<4, 4, float>         x;
    ::ll::TypedStorage<4, 4, float>         y;
    // NOLINTEND
};
#else // @header-generator platform
struct DirectionEventData {};
#endif // @header-generator platform
#endif // @header-generator platform
