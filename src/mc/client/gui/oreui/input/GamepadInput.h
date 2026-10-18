#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/oreui/input/GamepadStick.h"
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/oreui/input/GamepadStick.h"
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace OreUI {

struct GamepadInput {
public:
    // GamepadInput inner types declare
    // clang-format off
    struct ButtonEvent;
    struct TriggerEvent;
    struct StickEvent;
    // clang-format on

    // GamepadInput inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ButtonEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int const>  buttonId;
        ::ll::TypedStorage<1, 1, bool const> pressed;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ButtonEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int const>  buttonId;
        ::ll::TypedStorage<1, 1, bool const> pressed;
        // NOLINTEND
    };
#else // @header-generator platform
    struct ButtonEvent {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct TriggerEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int const>   triggerId;
        ::ll::TypedStorage<4, 4, float const> magnitude;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct TriggerEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int const>   triggerId;
        ::ll::TypedStorage<4, 4, float const> magnitude;
        // NOLINTEND
    };
#else // @header-generator platform
    struct TriggerEvent {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct StickEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::OreUI::GamepadStick const> stickId;
        ::ll::TypedStorage<4, 4, float const>                 x;
        ::ll::TypedStorage<4, 4, float const>                 y;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<OreUI::GamepadInput::ButtonEvent>>  mButtonEvents;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::GamepadInput::TriggerEvent>> mTriggerEvents;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::GamepadInput::StickEvent>>   mStickEvents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~GamepadInput();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct StickEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::OreUI::GamepadStick const> stickId;
        ::ll::TypedStorage<4, 4, float const>                 x;
        ::ll::TypedStorage<4, 4, float const>                 y;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::GamepadInput::ButtonEvent>>  mButtonEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::GamepadInput::TriggerEvent>> mTriggerEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::GamepadInput::StickEvent>>   mStickEvents;
    // NOLINTEND
#else // @header-generator platform
    struct StickEvent {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
