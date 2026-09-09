#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/realms/PlayerRole.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsRolesAndPermissions; }
// clang-format on

namespace OreUI {

class RealmsRolesAndPermissionsCommandsFacet
: public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsRolesAndPermissionsCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsRolesAndPermissions>> mRolesAndPermissions;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsRolesAndPermissionsCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsRolesAndPermissionsCommandsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsRolesAndPermissionsCommandsFacet(std::shared_ptr<Realms::RealmsRolesAndPermissions>);

    MCNAPI void initRealmsRolesAndActions(std::string const&);

    MCNAPI void initRealmsUserRoleAndActions(std::string const&, ::Realms::PlayerRole);

    MCNAPI void refreshAllRealmRolesAndActionsForCurrentUser();

    MCNAPI void resetState();

    MCNAPI void saveRealmsUserRole(std::string const&, std::string const&);

    MCNAPI void setRealmsUserRole(std::string const&, ::Realms::PlayerRole);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[42]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<Realms::RealmsRolesAndPermissions>);
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
