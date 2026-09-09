#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/TechStack.h"
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

// auto generated forward declare list
// clang-format off
namespace ui { class ScreenTechStackSelector; }
// clang-format on

namespace OreUI {

class ScreenTechStackFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::ScreenTechStackFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ui::ScreenTechStackSelector&> mScreenTechStackSelector;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenTechStackFacet& operator=(ScreenTechStackFacet const&);
    ScreenTechStackFacet(ScreenTechStackFacet const&);
    ScreenTechStackFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenTechStackFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScreenTechStackFacet(::ui::ScreenTechStackSelector&);

    MCNAPI ::ui::TechStack getPreferredTechStackForScreen(std::string const&) const;

    MCNAPI ::ui::TechStack getTechStackForScreen(std::string const&) const;

    MCNAPI void selectTechStackForScreen(std::string const&, ::ui::TechStack);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static char const* const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ui::ScreenTechStackSelector&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
