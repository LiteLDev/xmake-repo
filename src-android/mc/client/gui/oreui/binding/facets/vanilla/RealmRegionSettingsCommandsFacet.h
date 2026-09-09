#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsRegionSettings; }
// clang-format on

namespace OreUI {

class RealmRegionSettingsCommandsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmRegionSettingsCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<Realms::RealmsRegionSettings>> mRealmsRegionSettings;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmRegionSettingsCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmRegionSettingsCommandsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmRegionSettingsCommandsFacet(std::weak_ptr<Realms::RealmsRegionSettings>);

    MCNAPI void fetchRegions();

    MCNAPI void resetLowPingWarning();

    MCNAPI void resetRegionStatus();

    MCNAPI void saveSelectedServerRegion(std::string const&);

    MCNAPI void setDoNotShowPingWarning(bool);

    MCNAPI void setSelectedServerRegionIndex(int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[37]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<Realms::RealmsRegionSettings>);
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
