#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/enums/DirectionId.h"

struct ControllerDirectionEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::DirectionId> directionId;
    ::ll::TypedStorage<4, 8, float[2]>      deltaPosition;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/enums/DirectionId.h"

struct ControllerDirectionEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::DirectionId> directionId;
    ::ll::TypedStorage<4, 8, float[2]>      deltaPosition;
    // NOLINTEND
};
#else // @header-generator platform
struct ControllerDirectionEventData {};
#endif // @header-generator platform
#endif // @header-generator platform
