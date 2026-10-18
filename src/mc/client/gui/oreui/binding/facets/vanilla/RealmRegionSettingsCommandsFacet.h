#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsRegionSettings; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsRegionSettings; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RealmRegionSettingsCommandsFacet
: public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmRegionSettingsCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Realms::RealmsRegionSettings>> mRealmsRegionSettings;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmRegionSettingsCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmRegionSettingsCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmRegionSettingsCommandsFacet(
        ::std::weak_ptr<::Realms::RealmsRegionSettings> realmsRegionSettings
    );

    MCAPI void fetchRegions();

    MCAPI void resetLowPingWarning();

    MCAPI void resetRegionStatus();

    MCAPI void saveSelectedServerRegion(::std::string const& realmId);

    MCAPI void setDoNotShowPingWarning(bool doNotShow);

    MCAPI void setSelectedServerRegionIndex(int index);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::weak_ptr<::Realms::RealmsRegionSettings> realmsRegionSettings);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class RealmRegionSettingsCommandsFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
