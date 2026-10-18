#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/GameVersionBindings.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/GameVersionBindings.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class BuildSettingsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::BuildSettingsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, ::OreUI::GameVersionBindings> mCurrentGameVersion;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>   mDevelopmentVersion;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BuildSettingsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BuildSettingsFacet();

    MCNAPI ::OreUI::GameVersionBindings const& getCurrentGameVersion() const;

    MCNAPI std::optional<std::string> const& getDevelopmentVersion() const;

    MCNAPI bool isAnyBeta() const;

    MCNAPI bool isBetaBuild() const;

    MCNAPI bool isInDeveloperMode() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[22]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
class BuildSettingsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::BuildSettingsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, ::OreUI::GameVersionBindings>   mCurrentGameVersion;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mDevelopmentVersion;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BuildSettingsFacet();

    MCFOLD ::OreUI::GameVersionBindings const& getCurrentGameVersion() const;

    MCFOLD ::std::optional<::std::string> const& getDevelopmentVersion() const;

    MCFOLD bool isAnyBeta() const;

    MCFOLD bool isBetaBuild() const;

    MCFOLD bool isInDeveloperMode() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class BuildSettingsFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
