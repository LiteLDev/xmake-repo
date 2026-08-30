#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

// auto generated forward declare list
// clang-format off
namespace Realms::Stories { class FacetStateManager; }
// clang-format on

namespace OreUI {

class RealmsStoriesRealmDataFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsStoriesRealmDataFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesRealmDataFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesRealmDataFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsStoriesRealmDataFacet(std::shared_ptr<Realms::Stories::FacetStateManager>);

    MCNAPI bool getIsFetchingRealm() const;

    MCNAPI bool getIsHardcoreRealm() const;

    MCNAPI bool getIsRealmValid() const;

    MCNAPI std::string const& getOwnerXuid();

    MCNAPI std::string const& getRealmDescription();

    MCNAPI std::string const& getRealmName();

    MCNAPI std::string const& getUserXuid();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[32]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<Realms::Stories::FacetStateManager>);
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
