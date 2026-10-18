#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/ButtonState.h"

// auto generated forward declare list
// clang-format off
class UIPropertyBag;
// clang-format on

struct ButtonScreenEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>             id;
    ::ll::TypedStorage<4, 4, uint>             fromButtonId;
    ::ll::TypedStorage<1, 1, ::ButtonState>    previousState;
    ::ll::TypedStorage<1, 1, ::ButtonState>    state;
    ::ll::TypedStorage<1, 1, bool>             handleDeselection;
    ::ll::TypedStorage<1, 1, bool>             handleSelection;
    ::ll::TypedStorage<8, 8, ::UIPropertyBag*> properties;
    ::ll::TypedStorage<4, 8, float[2]>         cursorPosition;
    ::ll::TypedStorage<1, 1, bool>             isInteracted;
    ::ll::TypedStorage<4, 4, ::InputMode>      inputMode;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/ButtonState.h"

// auto generated forward declare list
// clang-format off
class UIPropertyBag;
// clang-format on

struct ButtonScreenEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>             id;
    ::ll::TypedStorage<4, 4, uint>             fromButtonId;
    ::ll::TypedStorage<1, 1, ::ButtonState>    previousState;
    ::ll::TypedStorage<1, 1, ::ButtonState>    state;
    ::ll::TypedStorage<1, 1, bool>             handleDeselection;
    ::ll::TypedStorage<1, 1, bool>             handleSelection;
    ::ll::TypedStorage<8, 8, ::UIPropertyBag*> properties;
    ::ll::TypedStorage<4, 8, float[2]>         cursorPosition;
    ::ll::TypedStorage<1, 1, bool>             isInteracted;
    ::ll::TypedStorage<4, 4, ::InputMode>      inputMode;
    // NOLINTEND
};
#else // @header-generator platform
struct ButtonScreenEventData {};
#endif // @header-generator platform
#endif // @header-generator platform
