#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/interface/GameControllerEventData.h"
#include "mc/deps/input/interface/GameControllerEventType.h"

struct GameControllerEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::GameControllerEventType>  type;
    ::ll::TypedStorage<4, 44, ::GameControllerEventData> data;
    ::ll::TypedStorage<4, 4, int>                        controllerId;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/interface/GameControllerEventData.h"
#include "mc/deps/input/interface/GameControllerEventType.h"

struct GameControllerEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::GameControllerEventType>  type;
    ::ll::TypedStorage<4, 44, ::GameControllerEventData> data;
    ::ll::TypedStorage<4, 4, int>                        controllerId;
    // NOLINTEND
};
#else // @header-generator platform
struct GameControllerEvent {};
#endif // @header-generator platform
#endif // @header-generator platform
