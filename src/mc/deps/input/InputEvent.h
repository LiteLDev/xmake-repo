#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/InputEventData.h"
#include "mc/deps/input/enums/FocusImpact.h"
#include "mc/deps/input/enums/InputEventType.h"

struct InputEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::InputEventType>  type;
    ::ll::TypedStorage<1, 1, ::FocusImpact>     focusImpact;
    ::ll::TypedStorage<4, 44, ::InputEventData> data;
    ::ll::TypedStorage<4, 4, int>               controllerId;
    ::ll::TypedStorage<1, 1, bool>              inputClearingEvent;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/InputEventData.h"
#include "mc/deps/input/enums/FocusImpact.h"
#include "mc/deps/input/enums/InputEventType.h"

struct InputEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::InputEventType>  type;
    ::ll::TypedStorage<1, 1, ::FocusImpact>     focusImpact;
    ::ll::TypedStorage<4, 44, ::InputEventData> data;
    ::ll::TypedStorage<4, 4, int>               controllerId;
    ::ll::TypedStorage<1, 1, bool>              inputClearingEvent;
    // NOLINTEND
};
#else // @header-generator platform
struct InputEvent {};
#endif // @header-generator platform
#endif // @header-generator platform
