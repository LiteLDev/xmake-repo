#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/OreUIScreenConfiguration.h"
#include "mc/client/gui/TechStack.h"
#include "mc/client/options/oreui/NewOreUIScreenOverride.h"

// auto generated forward declare list
// clang-format off
class Option;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/TechStack.h"

// auto generated forward declare list
// clang-format off
class Option;
namespace ui { class OreUIScreenConfiguration; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ui {

#if defined(LL_PLAT_A) // @header-generator platform
class ScreenTechStackSelector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ui::OreUIScreenConfiguration>> mConfigurations;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ui::TechStack getPreferredTechStackForScreen(std::string const&) const;

    MCNAPI ::OreUI::NewOreUIScreenOverride getScreenOverride(std::string const&) const;

    MCNAPI ::ui::TechStack getTechStackForScreen(std::string const&) const;

    MCNAPI bool isOreUISupportedForScreen(std::string const&) const;

    MCNAPI void selectPreferredTechStackForScreen(std::string const&, ::ui::TechStack);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ScreenTechStackSelector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::ui::OreUIScreenConfiguration>> mConfigurations;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ui::OreUIScreenConfiguration const* _getConfiguration(::std::string const& screenName) const;

    MCAPI ::ui::TechStack getTechStackForScreen(::std::string const& screenName) const;

    MCAPI ::ui::OreUIScreenConfiguration& registerScreen(
        ::std::string const&       screenName,
        ::std::optional<::Option*> isSelectedOption,
        ::std::optional<::Option*> isForceEnabledOption
    );
    // NOLINTEND
};
#else // @header-generator platform
class ScreenTechStackSelector {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ui
