#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/RectangleArea.h"
#include "mc/deps/input/TouchControl.h"
#include "mc/deps/input/TouchTurnControlState.h"
#include "mc/deps/input/TouchTurnState.h"

// auto generated forward declare list
// clang-format off
class InputEventQueue;
class TouchPointResults;
// clang-format on

class TouchTurnInteractControl : public ::TouchControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>          mCondition;
    ::ll::UntypedStorage<8, 48>          mGetInactiveAreasCallback;
    ::ll::TypedStorage<4, 4, uint const> mTurnInteractButtonId;
    ::ll::TypedStorage<4, 4, uint const> mTapButtonId;
    ::ll::TypedStorage<4, 4, uint const> mHoldButtonId;
    ::ll::TypedStorage<4, 4, float>      mHoldSensitivity;
    ::ll::TypedStorage<1, 1, bool>       mPersistData;
    ::ll::UntypedStorage<8, 40>          mState;
    ::ll::UntypedStorage<8, 48>          mHotbarArea;
    ::ll::UntypedStorage<8, 32>          mPreviousActivePointers;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchTurnInteractControl(TouchTurnInteractControl const&);
    TouchTurnInteractControl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TouchTurnInteractControl();

    virtual void tick(::InputEventQueue&, ::TouchPointResults&, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void incrementMoveDelta(::InputEventQueue&, float, float, int);

    MCNAPI void switchState(::InputEventQueue&, ::TouchTurnState);
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
#include "mc/deps/input/TouchTurnControlState.h"
#include "mc/deps/input/TouchTurnState.h"

// auto generated forward declare list
// clang-format off
class InputEventQueue;
class RectangleArea;
class TouchPointResults;
// clang-format on

class TouchTurnInteractControl : public ::TouchControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mCondition;
    ::ll::TypedStorage<8, 64, ::std::function<::std::vector<::RectangleArea>()>> mGetInactiveAreasCallback;
    ::ll::TypedStorage<4, 4, uint const>                                         mTurnInteractButtonId;
    ::ll::TypedStorage<4, 4, uint const>                                         mTapButtonId;
    ::ll::TypedStorage<4, 4, uint const>                                         mHoldButtonId;
    ::ll::TypedStorage<4, 4, float>                                              mHoldSensitivity;
    ::ll::TypedStorage<1, 1, bool>                                               mPersistData;
    ::ll::TypedStorage<8, 32, ::TouchTurnControlState>                           mState;
    ::ll::TypedStorage<8, 64, ::std::function<::RectangleArea()>>                mHotbarArea;
    ::ll::TypedStorage<8, 16, ::std::set<int>>                                   mPreviousActivePointers;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TouchTurnInteractControl() /*override*/ = default;

    virtual void
    tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void switchState(::InputEventQueue& eventQueue, ::TouchTurnState newState);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor);
    // NOLINTEND
};
#else // @header-generator platform
class TouchTurnInteractControl {};
#endif // @header-generator platform
#endif // @header-generator platform
