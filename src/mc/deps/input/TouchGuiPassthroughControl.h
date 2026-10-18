#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/TouchControl.h"
#include "mc/deps/input/enums/ButtonState.h"

// auto generated forward declare list
// clang-format off
class InputEventQueue;
class RectangleArea;
class TouchPointResults;
// clang-format on

class TouchGuiPassthroughControl : public ::TouchControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ButtonState> mButtonState;
    ::ll::UntypedStorage<4, 12>             mButtonId;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchGuiPassthroughControl(TouchGuiPassthroughControl const&);
    TouchGuiPassthroughControl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TouchGuiPassthroughControl() = default;

    virtual void tick(::InputEventQueue&, ::TouchPointResults&, int);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/TouchControl.h"
#include "mc/deps/input/enums/ButtonState.h"

// auto generated forward declare list
// clang-format off
class InputEventQueue;
class TouchPointResults;
// clang-format on

class TouchGuiPassthroughControl : public ::TouchControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ButtonState> mButtonState;
    ::ll::TypedStorage<4, 4, uint const>    mButtonId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TouchGuiPassthroughControl() /*override*/ = default;

    virtual void
    tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor) /*override*/;
    // NOLINTEND
};
#else // @header-generator platform
class TouchGuiPassthroughControl {};
#endif // @header-generator platform
#endif // @header-generator platform
