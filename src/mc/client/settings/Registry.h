#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IRegistry.h"

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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/ActionComponent.h"
#include "mc/client/settings/BannerComponent.h"
#include "mc/client/settings/BooleanComponent.h"
#include "mc/client/settings/GroupInfoComponent.h"
#include "mc/client/settings/IRegistry.h"
#include "mc/client/settings/NumberComponent.h"
#include "mc/client/settings/OptionComponent.h"
#include "mc/client/settings/StringComponent.h"
#include "mc/client/settings/TextComponent.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
class Registry : public ::Settings::IRegistry {
public:
    // Registry inner types define
    using SettingsFactory = std::function<std::vector<std::unique_ptr<std::variant<
        Settings::BooleanComponent,
        Settings::NumberComponent<int>,
        Settings::NumberComponent<float>,
        Settings::OptionComponent,
        Settings::StringComponent,
        Settings::ActionComponent,
        Settings::TextComponent,
        Settings::GroupInfoComponent,
        Settings::BannerComponent>>>()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mSettingsFactories;
    ::ll::UntypedStorage<8, 40> mSettingsMap;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~Registry();

    virtual std::vector<std::string_view> getSettingsGroups() const;

    virtual std::optional<std::vector<Settings::IRegistry::SettingId>> getSettingsGroup(std::string_view);

    virtual std::optional<std::reference_wrapper<std::variant<Settings::BooleanComponent, Settings::NumberComponent<int>, Settings::NumberComponent<float>, Settings::OptionComponent, Settings::StringComponent, Settings::ActionComponent, Settings::TextComponent, Settings::GroupInfoComponent, Settings::BannerComponent>>> getSetting(std::string_view) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void refresh(std::string_view);

    MCNAPI void registerSettingsFactory(
        std::string_view,
        std::function<std::vector<std::unique_ptr<std::variant<
            Settings::BooleanComponent,
            Settings::NumberComponent<int>,
            Settings::NumberComponent<float>,
            Settings::OptionComponent,
            Settings::StringComponent,
            Settings::ActionComponent,
            Settings::TextComponent,
            Settings::GroupInfoComponent,
            Settings::BannerComponent>>>()>&&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::vector<std::string_view> $getSettingsGroups() const;

    MCNAPI std::optional<std::vector<Settings::IRegistry::SettingId>> $getSettingsGroup(std::string_view);

    MCNAPI std::optional<std::reference_wrapper<std::variant<
        Settings::BooleanComponent,
        Settings::NumberComponent<int>,
        Settings::NumberComponent<float>,
        Settings::OptionComponent,
        Settings::StringComponent,
        Settings::ActionComponent,
        Settings::TextComponent,
        Settings::GroupInfoComponent,
        Settings::BannerComponent>>>
           $getSetting(std::string_view) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class Registry : public ::Settings::IRegistry {
public:
    // Registry inner types define
    using SettingsFactory = ::std::function<::std::vector<::std::unique_ptr<::std::variant<
        ::Settings::BooleanComponent,
        ::Settings::NumberComponent<int>,
        ::Settings::NumberComponent<float>,
        ::Settings::OptionComponent,
        ::Settings::StringComponent,
        ::Settings::ActionComponent,
        ::Settings::TextComponent,
        ::Settings::GroupInfoComponent,
        ::Settings::BannerComponent>>>()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::std::function<::std::vector<::std::unique_ptr<::std::variant<
                ::Settings::BooleanComponent,
                ::Settings::NumberComponent<int>,
                ::Settings::NumberComponent<float>,
                ::Settings::OptionComponent,
                ::Settings::StringComponent,
                ::Settings::ActionComponent,
                ::Settings::TextComponent,
                ::Settings::GroupInfoComponent,
                ::Settings::BannerComponent>>>()>>>
        mSettingsFactories;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::std::vector<::std::unique_ptr<::std::variant<
                ::Settings::BooleanComponent,
                ::Settings::NumberComponent<int>,
                ::Settings::NumberComponent<float>,
                ::Settings::OptionComponent,
                ::Settings::StringComponent,
                ::Settings::ActionComponent,
                ::Settings::TextComponent,
                ::Settings::GroupInfoComponent,
                ::Settings::BannerComponent>>>>>
        mSettingsMap;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Registry() /*override*/ = default;

    virtual ::std::vector<::std::string_view> getSettingsGroups() const /*override*/;

    virtual ::std::optional<::std::vector<::Settings::IRegistry::SettingId>>
    getSettingsGroup(::std::string_view settingsGroupId) /*override*/;

    virtual ::std::optional<::std::reference_wrapper<::std::variant<
        ::Settings::BooleanComponent,
        ::Settings::NumberComponent<int>,
        ::Settings::NumberComponent<float>,
        ::Settings::OptionComponent,
        ::Settings::StringComponent,
        ::Settings::ActionComponent,
        ::Settings::TextComponent,
        ::Settings::GroupInfoComponent,
        ::Settings::BannerComponent>>>
    getSetting(::std::string_view settingId) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void refresh();

    MCAPI void refresh(::std::string_view id);

    MCAPI void registerSettingsFactory(
        ::std::string_view                      key,
        ::std::function<::std::vector<::std::unique_ptr<::std::variant<
            ::Settings::BooleanComponent,
            ::Settings::NumberComponent<int>,
            ::Settings::NumberComponent<float>,
            ::Settings::OptionComponent,
            ::Settings::StringComponent,
            ::Settings::ActionComponent,
            ::Settings::TextComponent,
            ::Settings::GroupInfoComponent,
            ::Settings::BannerComponent>>>()>&& factory
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::vector<::std::string_view> $getSettingsGroups() const;

    MCAPI ::std::optional<::std::vector<::Settings::IRegistry::SettingId>>
    $getSettingsGroup(::std::string_view settingsGroupId);

    MCAPI ::std::optional<::std::reference_wrapper<::std::variant<
        ::Settings::BooleanComponent,
        ::Settings::NumberComponent<int>,
        ::Settings::NumberComponent<float>,
        ::Settings::OptionComponent,
        ::Settings::StringComponent,
        ::Settings::ActionComponent,
        ::Settings::TextComponent,
        ::Settings::GroupInfoComponent,
        ::Settings::BannerComponent>>>
    $getSetting(::std::string_view settingId) const;
    // NOLINTEND
};
#else // @header-generator platform
class Registry {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings
