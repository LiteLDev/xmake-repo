#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
