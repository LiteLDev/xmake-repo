#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/JoystickState.h"
#include "mc/deps/input/RectangleArea.h"
#include "mc/deps/input/TouchControl.h"
#include "mc/deps/input/TouchMoveAndTurnControlState.h"

// auto generated forward declare list
// clang-format off
class InputEventQueue;
class InputRenderContext;
class TouchPointResults;
struct TouchControlConfig;
// clang-format on

class TouchMoveAndTurnInteractControl : public ::TouchControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>          mCondition;
    ::ll::UntypedStorage<8, 48>          mIsLeftHanded;
    ::ll::UntypedStorage<8, 48>          mJoystickAlwaysVisible;
    ::ll::UntypedStorage<8, 48>          mAltJoystickAlwaysVisible;
    ::ll::UntypedStorage<8, 48>          mAltStickEnabled;
    ::ll::UntypedStorage<8, 48>          mThumbstickOpacity;
    ::ll::UntypedStorage<8, 48>          mStaticJoystick;
    ::ll::UntypedStorage<8, 48>          mStaticAltJoystick;
    ::ll::UntypedStorage<8, 48>          mDefaultMoveStickArea;
    ::ll::UntypedStorage<8, 48>          mDefaultAltStickArea;
    ::ll::UntypedStorage<8, 48>          mHotbarArea;
    ::ll::UntypedStorage<8, 48>          mJoystickVisibleWhenUnused;
    ::ll::UntypedStorage<8, 48>          mAltJoystickVisibleWhenUnused;
    ::ll::UntypedStorage<8, 48>          mShowActionButton;
    ::ll::UntypedStorage<8, 48>          mSprintOnMovement;
    ::ll::UntypedStorage<8, 48>          mIsInputSprinting;
    ::ll::UntypedStorage<8, 48>          mClientActivePointer;
    ::ll::UntypedStorage<8, 48>          mIsInControlEditMode;
    ::ll::UntypedStorage<8, 48>          mGetInactiveAreasCallback;
    ::ll::TypedStorage<4, 4, uint const> mTurnInteractButtonId;
    ::ll::TypedStorage<4, 4, uint const> mTapButtonId;
    ::ll::TypedStorage<4, 4, uint const> mHoldButtonId;
    ::ll::TypedStorage<4, 4, uint const> mSprintButtonId;
    ::ll::UntypedStorage<8, 160>         mState;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchMoveAndTurnInteractControl(TouchMoveAndTurnInteractControl const&);
    TouchMoveAndTurnInteractControl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TouchMoveAndTurnInteractControl();

    virtual void render(::InputRenderContext&) const;

    virtual void tick(::InputEventQueue&, ::TouchPointResults&, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _renderJoystick(
        ::InputRenderContext&,
        ::JoystickState,
        bool,
        float,
        float,
        float,
        float,
        ::RectangleArea const&,
        ::RectangleArea const&,
        float,
        bool,
        bool,
        bool
    ) const;

    MCNAPI void _setPreviousActionPointer(int);

    MCNAPI void calculateTouchDeltaFromLastFrame(float, float, float&, float&, float&, float&, int);

    MCNAPI void calibrateMoveDelta(float&, float&);

    MCNAPI void drawJoystick(::InputRenderContext&, ::JoystickState, float, float, float, float, float) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& AUTO_SPRINT_BUFFER_ZONE();

    MCNAPI static float const& DEADZONE_LEFT();

    MCNAPI static float const& DEADZONE_RIGHT();

    MCNAPI static float const& HOLD_TIME_THRESHOLD();

    MCNAPI static float const& JOYSTICK_DECIDING_WINDOW();

    MCNAPI static float const& MAXIMUM_MOVEMENT_BACKWARD_SPEED();

    MCNAPI static float const& MAXIMUM_MOVEMENT_FORWARD_SPEED();

    MCNAPI static float const& MAXIMUM_MOVEMENT_STRAFE_SPEED();

    MCNAPI static float const& MINIMUM_MOVEMENT_SPEED();

    MCNAPI static float const& ONE_THOUSANDTH();

    MCNAPI static float const& TURN_SENSITIVITY();

    MCNAPI static float const& VERTICAL_TURN_SENSITIVITY();
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
#include "mc/deps/input/JoystickState.h"
#include "mc/deps/input/TouchControl.h"
#include "mc/deps/input/TouchMoveAndTurnControlState.h"

// auto generated forward declare list
// clang-format off
class InputEventQueue;
class InputRenderContext;
class RectangleArea;
class TouchPointResults;
// clang-format on

class TouchMoveAndTurnInteractControl : public ::TouchControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mCondition;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mIsLeftHanded;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mJoystickAlwaysVisible;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mAltJoystickAlwaysVisible;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mAltStickEnabled;
    ::ll::TypedStorage<8, 64, ::std::function<float()>>                          mThumbstickOpacity;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mStaticJoystick;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mStaticAltJoystick;
    ::ll::TypedStorage<8, 64, ::std::function<::RectangleArea()>>                mDefaultMoveStickArea;
    ::ll::TypedStorage<8, 64, ::std::function<::RectangleArea()>>                mDefaultAltStickArea;
    ::ll::TypedStorage<8, 64, ::std::function<::RectangleArea()>>                mHotbarArea;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mJoystickVisibleWhenUnused;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mAltJoystickVisibleWhenUnused;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mShowActionButton;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mSprintOnMovement;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mIsInputSprinting;
    ::ll::TypedStorage<8, 64, ::std::function<float()>>                          mClientActivePointer;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mIsInControlEditMode;
    ::ll::TypedStorage<8, 64, ::std::function<::std::vector<::RectangleArea>()>> mGetInactiveAreasCallback;
    ::ll::TypedStorage<4, 4, uint const>                                         mTurnInteractButtonId;
    ::ll::TypedStorage<4, 4, uint const>                                         mTapButtonId;
    ::ll::TypedStorage<4, 4, uint const>                                         mHoldButtonId;
    ::ll::TypedStorage<4, 4, uint const>                                         mSprintButtonId;
    ::ll::TypedStorage<8, 152, ::TouchMoveAndTurnControlState>                   mState;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TouchMoveAndTurnInteractControl() /*override*/ = default;

    virtual void
    tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor) /*override*/;

    virtual void render(::InputRenderContext& context) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _isClientCurrentActivePointer(int processedPointerId) const;

    MCAPI void _renderJoystick(
        ::InputRenderContext&  context,
        ::JoystickState        state,
        bool                   initialized,
        float                  x,
        float                  y,
        float                  x0,
        float                  y0,
        ::RectangleArea const& moveArea,
        ::RectangleArea const& defaultArea,
        float                  radius,
        bool                   staticJoystick,
        bool                   joystickVisibleWhenUnused,
        bool                   joystickAlwaysVisible
    ) const;

    MCAPI void _setPreviousActionPointer(int processedPointerId);

    MCAPI void drawJoystick(
        ::InputRenderContext& context,
        ::JoystickState       joystickState,
        float                 x,
        float                 y,
        float                 x0,
        float                 y0,
        float                 joystickRadius
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void calibrateMoveDelta(float& dx, float& dy);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor);

    MCAPI void $render(::InputRenderContext& context) const;
    // NOLINTEND
};
#else // @header-generator platform
class TouchMoveAndTurnInteractControl {};
#endif // @header-generator platform
#endif // @header-generator platform
