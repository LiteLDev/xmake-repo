#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
