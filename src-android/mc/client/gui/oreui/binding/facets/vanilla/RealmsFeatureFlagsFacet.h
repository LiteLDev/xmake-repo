#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

// auto generated forward declare list
// clang-format off
class RealmsAPI;
// clang-format on

namespace OreUI {

class RealmsFeatureFlagsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsFeatureFlagsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mRealmsFeatureFlags;
    ::ll::TypedStorage<8, 24, std::string>              mCommerceV2PlatformFeatureName;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsFeatureFlagsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsFeatureFlagsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsFeatureFlagsFacet(std::weak_ptr<RealmsAPI>);

    MCNAPI std::vector<std::string> const& getAllFeatureFlags() const;

    MCNAPI std::string const& getCommerceV2PlatformFeatureName() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[27]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<RealmsAPI>);
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
