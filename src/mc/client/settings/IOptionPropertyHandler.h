#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IPropertyHandler.h"

// auto generated forward declare list
// clang-format off
namespace Settings { struct LocStringData; }
namespace Settings { struct OptionData; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IPropertyHandler.h"

// auto generated forward declare list
// clang-format off
namespace Settings { struct LocStringData; }
namespace Settings { struct OptionData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
class IOptionPropertyHandler : public ::Settings::IPropertyHandler<int> {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IOptionPropertyHandler() = default;

    virtual std::vector<Settings::OptionData> getOptions() = 0;

    virtual std::optional<std::variant<std::string, std::function<std::string ()>, Settings::LocStringData>> getInfo();
    // clang-format on
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<std::variant<std::string, std::function<std::string()>, Settings::LocStringData>> $getInfo();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IOptionPropertyHandler : public ::Settings::IPropertyHandler<int> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IOptionPropertyHandler() /*override*/ = default;

    virtual ::std::vector<::Settings::OptionData> getOptions() = 0;

    virtual ::std::optional<::std::variant<::std::string, ::std::function<::std::string()>, ::Settings::LocStringData>>
    getInfo();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::std::variant<::std::string, ::std::function<::std::string()>, ::Settings::LocStringData>>
    $getInfo();
    // NOLINTEND
};
#else // @header-generator platform
class IOptionPropertyHandler {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings
