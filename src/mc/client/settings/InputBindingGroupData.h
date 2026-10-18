#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/input/KeyboardType.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
namespace Settings { class ActionComponent; }
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/input/KeyboardType.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
namespace Settings { class ActionComponent; }
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Settings::InputControlsSettingsHelper {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct InputBindingGroupData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::InputMode>                                        mInputMode;
    ::ll::TypedStorage<8, 64, ::std::function<::std::optional<::std::string>()>> mBindDescriptionCallback;
    ::ll::TypedStorage<4, 8, ::std::optional<::KeyboardType>>                    mKeyboardType;
    ::ll::TypedStorage<8, 64, ::std::function<::std::optional<::std::string>(::Settings::ActionComponent const&)>>
                                                       mBindActionLabelProvider;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mResetActionCallback;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<bool(
            ::Settings::RegistryBuilder::IBuilderContext const&,
            ::std::string_view,
            ::std::optional<::KeyboardType>
        )>>
        mGetterCaptureStateCallback;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~InputBindingGroupData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct InputBindingGroupData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings::InputControlsSettingsHelper
