#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/KeyboardType.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
namespace Settings { class ActionComponent; }
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

namespace Settings::InputControlsSettingsHelper {

struct InputBindingGroupData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mInputMode;
    ::ll::UntypedStorage<8, 48> mBindDescriptionCallback;
    ::ll::UntypedStorage<4, 16> mKeyboardType;
    ::ll::UntypedStorage<8, 48> mBindActionLabelProvider;
    ::ll::UntypedStorage<8, 48> mResetActionCallback;
    ::ll::UntypedStorage<8, 48> mGetterCaptureStateCallback;
    // NOLINTEND
};

} // namespace Settings::InputControlsSettingsHelper
