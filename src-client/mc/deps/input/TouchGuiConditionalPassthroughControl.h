#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/TouchControl.h"
#include "mc/deps/input/enums/ButtonState.h"

// auto generated forward declare list
// clang-format off
class InputEventQueue;
class TouchPointResults;
// clang-format on

class TouchGuiConditionalPassthroughControl : public ::TouchControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint const>               mButtonId;
    ::ll::TypedStorage<1, 1, ::ButtonState>            mButtonState;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>> mCondition;
    ::ll::TypedStorage<1, 1, bool>                     mConsumeInput;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TouchGuiConditionalPassthroughControl() /*override*/;

    virtual void
    tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor);
    // NOLINTEND
};
