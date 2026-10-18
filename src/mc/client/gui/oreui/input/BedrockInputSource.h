#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/input/GamepadMode.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ViewInputHandler; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/input/GamepadMode.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ViewInputHandler; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class BedrockInputSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIgnoreBedrockInput;
    // NOLINTEND

public:
    // prevent constructor by default
    BedrockInputSource();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BedrockInputSource(bool);

    MCNAPI void handleInput(::OreUI::ViewInputHandler&, ::OreUI::GamepadMode const);

    MCNAPI ~BedrockInputSource();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class BedrockInputSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIgnoreBedrockInput;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void handleInput(::OreUI::ViewInputHandler& inputHandler, ::OreUI::GamepadMode gamepadMode);
    // NOLINTEND
};
#else // @header-generator platform
class BedrockInputSource {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
