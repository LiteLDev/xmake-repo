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
    virtual ~TouchGuiConditionalPassthroughControl() /*override*/ = default;

    virtual void
    tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor);
    // NOLINTEND
};
#else // @header-generator platform
class TouchGuiConditionalPassthroughControl {};
#endif // @header-generator platform
#endif // @header-generator platform
