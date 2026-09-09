#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsPlayerList; }
namespace Realms { class RealmsPlayerManagement; }
// clang-format on

namespace OreUI {

class RealmsPlayerListCommandsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsPlayerListCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsPlayerList>>       mRealmsPlayerList;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsPlayerManagement>> mRealmsManagePlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPlayerListCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPlayerListCommandsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsPlayerListCommandsFacet(
        std::shared_ptr<Realms::RealmsPlayerList>,
        std::shared_ptr<Realms::RealmsPlayerManagement>
    );

    MCNAPI void blockPlayer(std::string const&, std::string const&);

    MCNAPI void populateMembers();

    MCNAPI void removePlayer(std::string const&, std::string const&);

    MCNAPI void resetManageState();

    MCNAPI void resetState();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[33]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<Realms::RealmsPlayerList>, std::shared_ptr<Realms::RealmsPlayerManagement>);
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
