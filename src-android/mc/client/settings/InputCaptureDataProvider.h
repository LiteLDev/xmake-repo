#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/KeyboardType.h"
#include "mc/client/settings/IBooleanDataProvider.h"

// auto generated forward declare list
// clang-format off
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

namespace Settings::InputControlsSettingsHelper {

class InputCaptureDataProvider : public ::Settings::IBooleanDataProvider {
public:
    // InputCaptureDataProvider inner types define
    using GetterCallback = std::function<
        bool(const Settings::RegistryBuilder::IBuilderContext&, std::string_view, std::optional<KeyboardType>)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                mAction;
    ::ll::TypedStorage<4, 8, std::optional<KeyboardType>> mType;
    ::ll::UntypedStorage<8, 16>                           mContext;
    ::ll::UntypedStorage<8, 48>                           mCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    InputCaptureDataProvider& operator=(InputCaptureDataProvider const&);
    InputCaptureDataProvider(InputCaptureDataProvider const&);
    InputCaptureDataProvider();
};

} // namespace Settings::InputControlsSettingsHelper
