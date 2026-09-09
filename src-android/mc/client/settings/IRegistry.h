#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/SettingsType.h"

// auto generated forward declare list
// clang-format off
namespace Settings { class ActionComponent; }
namespace Settings { class BannerComponent; }
namespace Settings { class BooleanComponent; }
namespace Settings { class GroupInfoComponent; }
namespace Settings { class OptionComponent; }
namespace Settings { class StringComponent; }
namespace Settings { class TextComponent; }
namespace Settings { template<typename T0> class NumberComponent; }
// clang-format on

namespace Settings {

class IRegistry {
public:
    // IRegistry inner types declare
    // clang-format off
    struct SettingId;
    // clang-format on

    // IRegistry inner types define
    struct SettingId {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::string_view>        mId;
        ::ll::TypedStorage<4, 4, ::Settings::SettingsType> mType;
        // NOLINTEND

    public:
        // prevent constructor by default
        SettingId();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IRegistry() = default;

    virtual std::vector<std::string_view> getSettingsGroups() const = 0;

    virtual std::optional<std::vector<Settings::IRegistry::SettingId>> getSettingsGroup(std::string_view) = 0;

    virtual std::optional<std::reference_wrapper<std::variant<Settings::BooleanComponent, Settings::NumberComponent<int>, Settings::NumberComponent<float>, Settings::OptionComponent, Settings::StringComponent, Settings::ActionComponent, Settings::TextComponent, Settings::GroupInfoComponent, Settings::BannerComponent>>> getSetting(std::string_view) const = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace Settings
