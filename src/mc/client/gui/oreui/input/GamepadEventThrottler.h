#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/input/GamepadButton.h"
#include "mc/client/gui/oreui/input/GamepadMode.h"
#include "mc/client/gui/oreui/input/GamepadPressType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class GamepadEventThrottler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 144, ::std::array<int, 36>> mButtonEventCounters;
    ::ll::TypedStorage<8, 576, ::std::array<::std::optional<::std::chrono::steady_clock::time_point>, 36>>
        mButtonLongPressTimestamps;
    ::ll::TypedStorage<8, 64, ::std::array<::std::chrono::steady_clock::time_point, 8>>
        mNavigationalButtonEventTimestamps;
    // NOLINTEND
};
#else // @header-generator platform
class GamepadEventThrottler {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
