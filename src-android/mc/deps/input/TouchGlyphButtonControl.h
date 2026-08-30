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

class TouchGlyphButtonControl : public ::TouchControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>             mCondition;
    ::ll::UntypedStorage<8, 48>             mOpacity;
    ::ll::TypedStorage<4, 4, uint>          mButtonId;
    ::ll::TypedStorage<1, 1, ::ButtonState> mButtonState;
    ::ll::TypedStorage<4, 16, ::mce::Color> mPressedColor;
    ::ll::TypedStorage<4, 16, ::mce::Color> mReleasedColor;
    ::ll::TypedStorage<4, 4, int>           mUx;
    ::ll::TypedStorage<4, 4, int>           mUv;
    ::ll::TypedStorage<4, 4, int>           mUvWidth;
    ::ll::TypedStorage<4, 4, int>           mUvHeight;
    ::ll::TypedStorage<4, 4, float>         mInnerPaddingX;
    ::ll::TypedStorage<4, 4, float>         mInnerPaddingY;
    ::ll::TypedStorage<4, 4, int>           mActivePointerId;
    ::ll::TypedStorage<1, 1, bool>          mPassThrough;
    ::ll::TypedStorage<1, 1, bool>          mPromiscuous;
    ::ll::TypedStorage<4, 4, int>           mTouchStateRequirement;
    ::ll::TypedStorage<8, 8, long>          mTimeSinceFirstPress;
    ::ll::TypedStorage<1, 1, bool>          mWaitingForSecondPress;
    ::ll::TypedStorage<1, 1, bool>          mExtendButtonPressOutsideAreaUntilReleased;
    ::ll::TypedStorage<8, 24, std::string>  mIconPath;
    ::ll::TypedStorage<8, 24, std::string>  mPressedIconPath;
    ::ll::UntypedStorage<4, 16>             mGlyphScale;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchGlyphButtonControl(TouchGlyphButtonControl const&);
    TouchGlyphButtonControl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TouchGlyphButtonControl();

    virtual uint getHoldButtonId() const;

    virtual int getActivePointerId() const;

    virtual bool releaseOnClear() const;

    virtual void render(::InputRenderContext&) const;

    virtual void tick(::InputEventQueue&, ::TouchPointResults&, int);

    virtual void release(::InputEventQueue&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TouchGlyphButtonControl(
        std::function<RectangleArea()>,
        std::function<bool()>,
        std::function<float()>,
        uint,
        std::string const&,
        std::string const&,
        ::ButtonColors const&,
        int,
        int,
        int,
        bool,
        int,
        float,
        bool,
        bool,
        float,
        float
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::function<RectangleArea()>,
        std::function<bool()>,
        std::function<float()>,
        uint,
        std::string const&,
        std::string const&,
        ::ButtonColors const&,
        int,
        int,
        int,
        bool,
        int,
        float,
        bool,
        bool,
        float,
        float
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uint $getHoldButtonId() const;

    MCNAPI int $getActivePointerId() const;

    MCNAPI bool $releaseOnClear() const;

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
