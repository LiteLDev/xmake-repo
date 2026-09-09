#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/input/GamepadButton.h"
#include "mc/client/gui/oreui/input/GamepadInput.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct GamepadInput; }
// clang-format on

namespace OreUI {

class GamepadState {
public:
    // GamepadState inner types declare
    // clang-format off
    struct JoystickState;
    struct JoystickValues;
    // clang-format on

    // GamepadState inner types define
    struct JoystickState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>     movingUp;
        ::ll::TypedStorage<1, 1, bool>     movingRight;
        ::ll::TypedStorage<1, 1, bool>     movingDown;
        ::ll::TypedStorage<1, 1, bool>     movingLeft;
        ::ll::TypedStorage<4, 8, float[2]> axes;
        // NOLINTEND
    };

    struct JoystickValues {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> leftStickX;
        ::ll::TypedStorage<4, 4, float> leftStickY;
        ::ll::TypedStorage<4, 4, float> rightStickX;
        ::ll::TypedStorage<4, 4, float> rightStickY;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::OreUI::GamepadState::JoystickState[2]> mJoystickStates;
    ::ll::TypedStorage<1, 36, std::array<bool, 36>>                    mCurrentButtonPressedStates;
    ::ll::TypedStorage<1, 1, bool>                                     mIsMovingDiagonally;
    // NOLINTEND
};

} // namespace OreUI
