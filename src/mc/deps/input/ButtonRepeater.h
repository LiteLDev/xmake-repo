#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/BasicTimer.h"
#include "mc/deps/input/InputEvent.h"
#include "mc/deps/input/enums/ButtonState.h"

// auto generated forward declare list
// clang-format off
class InputEventQueue;
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/BasicTimer.h"
#include "mc/deps/input/InputEvent.h"
#include "mc/deps/input/enums/ButtonState.h"
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class ButtonRepeater {
public:
    // ButtonRepeater inner types declare
    // clang-format off
    struct ButtonTimeTracker;
    // clang-format on

    // ButtonRepeater inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ButtonTimeTracker {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 80, ::BasicTimer> mRepeatTimer;
        ::ll::TypedStorage<1, 1, ::ButtonState> mCurrentState;
        ::ll::TypedStorage<4, 56, ::InputEvent> mEventToSend;
        // NOLINTEND
    };

    using ButtonToTimeTrackerMap = ::std::unordered_map<uint, ::ButtonRepeater::ButtonTimeTracker>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::
        TypedStorage<8, 64, ::std::unordered_map<int, ::std::unordered_map<uint, ::ButtonRepeater::ButtonTimeTracker>>>
            mPerIdTrackerData;
    // NOLINTEND
#else // @header-generator platform
    struct ButtonTimeTracker {};
#endif // @header-generator platform
#endif // @header-generator platform
};
