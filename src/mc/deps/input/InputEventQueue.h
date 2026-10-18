#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/InputEvent.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/DirectionId.h"
#include "mc/deps/input/enums/FocusImpact.h"
#include "mc/deps/input/enums/RawInputType.h"

// auto generated forward declare list
// clang-format off
struct TouchPadTouchEventData;
// clang-format on

class InputEventQueue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, std::queue<InputEvent, std::deque<InputEvent>>> mQueue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void enqueueButton(uint, ::ButtonState, bool, ::FocusImpact, int, bool, float, int);

    MCNAPI void enqueueButtonPressAndRelease(uint, ::FocusImpact, int);

    MCNAPI void enqueueClearPointerLocationWithId(int);

    MCNAPI void enqueueClearPointerLocations();

    MCNAPI void enqueueCustomZone(int, short, short);

    MCNAPI void enqueueDirection(::DirectionId, float, float, ::FocusImpact, int, bool);

    MCNAPI void enqueuePointerLocation(::InputMode, short, short, ::FocusImpact, bool, int);

    MCNAPI void enqueuePointerLocationWithId(int, short, short, bool);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/InputEvent.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/DirectionId.h"
#include "mc/deps/input/enums/FocusImpact.h"

class InputEventQueue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::queue<::InputEvent, ::std::deque<::InputEvent>>> mQueue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void enqueueButton(
        uint          id,
        ::ButtonState state,
        bool          exclusive,
        ::FocusImpact focusImpact,
        int           controllerId,
        bool          inputClearingEvent,
        float         repeatInterval,
        int           source
    );

    MCAPI void enqueueButtonPressAndRelease(uint buttonId, ::FocusImpact focusImpact, int controllerId);

    MCAPI void enqueueClearPointerLocationWithId(int id);

    MCAPI void enqueueClearPointerLocations();

    MCAPI void enqueueCustomZone(int id, short x, short y);

    MCAPI void enqueueDirection(
        ::DirectionId directionId,
        float         x,
        float         y,
        ::FocusImpact focusImpact,
        int           controllerId,
        bool          inputClearingEvent
    );

    MCAPI void enqueuePointerLocation(
        ::InputMode   inputMode,
        short         x,
        short         y,
        ::FocusImpact focusImpact,
        bool          forceMotionlessPointer,
        int           controllerId
    );

    MCAPI void enqueuePointerLocationWithId(int id, short x, short y, bool updateActionPointer);
    // NOLINTEND
};
#else // @header-generator platform
class InputEventQueue {};
#endif // @header-generator platform
#endif // @header-generator platform
