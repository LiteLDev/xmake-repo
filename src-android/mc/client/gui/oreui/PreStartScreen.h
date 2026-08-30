#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/IEntryPoint.h"

// auto generated forward declare list
// clang-format off
namespace ui { class ScreenTechStackSelector; }
// clang-format on

namespace OreUI::EntryPoints {

class PreStartScreen : public ::OreUI::IEntryPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ui::ScreenTechStackSelector const&> mScreenTechStackSelector;
    // NOLINTEND

public:
    // prevent constructor by default
    PreStartScreen& operator=(PreStartScreen const&);
    PreStartScreen(PreStartScreen const&);
    PreStartScreen();
};

} // namespace OreUI::EntryPoints
