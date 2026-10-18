#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/input/GamepadButton.h"
#include "mc/client/gui/oreui/input/GamepadEventThrottler.h"
#include "mc/client/gui/oreui/input/GamepadMode.h"
#include "mc/client/gui/oreui/input/GamepadState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
namespace OreUI { struct GamepadInput; }
namespace cohtml { class View; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/input/GamepadEventThrottler.h"
#include "mc/client/gui/oreui/input/GamepadState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class GamepadInputHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::OreUI::GamepadState>           mGamepadState;
    ::ll::TypedStorage<8, 784, ::OreUI::GamepadEventThrottler> mEventThrottler;
    ::ll::TypedStorage<1, 1, bool>                             mSwapABButtons;
    ::ll::TypedStorage<1, 1, bool>                             mSwapXYButtons;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSwapABOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSwapXYOptionSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    GamepadInputHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GamepadInputHandler(::IOptionRegistry&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IOptionRegistry&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class GamepadInputHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::OreUI::GamepadState>           mGamepadState;
    ::ll::TypedStorage<8, 784, ::OreUI::GamepadEventThrottler> mEventThrottler;
    ::ll::TypedStorage<1, 1, bool>                             mSwapABButtons;
    ::ll::TypedStorage<1, 1, bool>                             mSwapXYButtons;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSwapABOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSwapXYOptionSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    GamepadInputHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GamepadInputHandler(::IOptionRegistry& options);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IOptionRegistry& options);
    // NOLINTEND
};
#else // @header-generator platform
class GamepadInputHandler {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
