#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/OreUIScreenConfiguration.h"
#include "mc/client/gui/TechStack.h"
#include "mc/client/options/oreui/NewOreUIScreenOverride.h"

// auto generated forward declare list
// clang-format off
class Option;
// clang-format on

namespace ui {

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

} // namespace ui
