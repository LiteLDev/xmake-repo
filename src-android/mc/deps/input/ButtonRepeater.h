#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/BasicTimer.h"
#include "mc/deps/input/InputEvent.h"
#include "mc/deps/input/enums/ButtonState.h"

// auto generated forward declare list
// clang-format off
class InputEventQueue;
// clang-format on

class ButtonRepeater {
public:
    // ButtonRepeater inner types declare
    // clang-format off
    struct ButtonTimeTracker;
    // clang-format on

    // ButtonRepeater inner types define
    struct ButtonTimeTracker {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64>             mRepeatTimer;
        ::ll::TypedStorage<1, 1, ::ButtonState> mCurrentState;
        ::ll::TypedStorage<4, 56, ::InputEvent> mEventToSend;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<int, std::unordered_map<uint, ButtonRepeater::ButtonTimeTracker>>> mPerIdTrackerData;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clearControllerButtonStates(int);
    // NOLINTEND
};
