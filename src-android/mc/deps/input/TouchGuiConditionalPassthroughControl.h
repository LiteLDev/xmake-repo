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

class TouchGuiConditionalPassthroughControl : public ::TouchControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint const> mButtonId;
    ::ll::UntypedStorage<1, 12>          mButtonState;
    ::ll::UntypedStorage<8, 48>          mCondition;
    ::ll::UntypedStorage<1, 16>          mConsumeInput;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchGuiConditionalPassthroughControl(TouchGuiConditionalPassthroughControl const&);
    TouchGuiConditionalPassthroughControl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TouchGuiConditionalPassthroughControl();

    virtual void tick(::InputEventQueue&, ::TouchPointResults&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::InputEventQueue&, ::TouchPointResults&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
