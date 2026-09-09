#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

// auto generated forward declare list
// clang-format off
namespace Social { class User; }
// clang-format on

namespace OreUI {

class PrivacyAndOnlineSafetyFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::PrivacyAndOnlineSafetyFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<Social::User>> mUser;
    ::ll::TypedStorage<1, 1, bool>                         mDirty;
    ::ll::TypedStorage<1, 1, bool const>                   mStatus_DEPRECATED;
    // NOLINTEND

public:
    // prevent constructor by default
    PrivacyAndOnlineSafetyFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PrivacyAndOnlineSafetyFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PrivacyAndOnlineSafetyFacet(std::weak_ptr<Social::User>);

    MCNAPI void doPermissionCheck();

    MCNAPI bool getAllowCapturesResult() const;

    MCNAPI bool getClubCheckResult() const;

    MCNAPI bool getMultiplayerCheckResult() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[36]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<Social::User>);
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
