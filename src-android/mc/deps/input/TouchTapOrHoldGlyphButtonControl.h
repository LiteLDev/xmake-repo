#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/input/TouchControl.h"
#include "mc/deps/input/enums/ButtonState.h"

// auto generated forward declare list
// clang-format off
class InputEventQueue;
class InputRenderContext;
class RectangleArea;
class TouchPointResults;
struct ButtonColors;
// clang-format on

class TouchTapOrHoldGlyphButtonControl : public ::TouchControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>             mCondition;
    ::ll::TypedStorage<4, 4, uint>          mTapButtonId;
    ::ll::TypedStorage<4, 4, uint>          mHoldButtonId;
    ::ll::TypedStorage<1, 1, ::ButtonState> mButtonState;
    ::ll::TypedStorage<4, 16, ::mce::Color> mPressedColor;
    ::ll::TypedStorage<4, 16, ::mce::Color> mReleasedColor;
    ::ll::TypedStorage<4, 4, int>           mUx;
    ::ll::TypedStorage<4, 4, int>           mUv;
    ::ll::TypedStorage<4, 4, int>           mUvWidth;
    ::ll::TypedStorage<4, 4, int>           mUvHeight;
    ::ll::TypedStorage<4, 4, int>           mActivePointerId;
    ::ll::TypedStorage<8, 8, double>        mStartTime;
    ::ll::TypedStorage<1, 1, bool>          mIsHolding;
    ::ll::TypedStorage<4, 4, float>         mGlyphScale;
    ::ll::TypedStorage<8, 24, std::string>  mIconPath;
    ::ll::TypedStorage<8, 24, std::string>  mPressedIconPath;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchTapOrHoldGlyphButtonControl(TouchTapOrHoldGlyphButtonControl const&);
    TouchTapOrHoldGlyphButtonControl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TouchTapOrHoldGlyphButtonControl();

    virtual void render(::InputRenderContext&) const;

    virtual void tick(::InputEventQueue&, ::TouchPointResults&, int);

    virtual void release(::InputEventQueue&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $render(::InputRenderContext&) const;

    MCNAPI void $tick(::InputEventQueue&, ::TouchPointResults&, int);

    MCNAPI void $release(::InputEventQueue&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
