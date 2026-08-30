#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/input/GamepadButton.h"
#include "mc/client/gui/oreui/input/GamepadMode.h"
#include "mc/client/gui/oreui/input/GamepadPressType.h"

namespace OreUI {

class GamepadEventThrottler {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 144, std::array<int, 36>> mButtonEventCounters;
    ::ll::TypedStorage<8, 576, std::array<std::optional<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>, 36>> mButtonLongPressTimestamps;
    ::ll::TypedStorage<8, 64, std::array<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>, 8>> mNavigationalButtonEventTimestamps;
    // clang-format on
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::array<OreUI::GamepadButton, 8> const& NAVIGATION_BUTTONS();
    // NOLINTEND
};

} // namespace OreUI
