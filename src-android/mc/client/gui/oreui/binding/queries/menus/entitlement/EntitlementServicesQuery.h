#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

// auto generated forward declare list
// clang-format off
class MarketplaceServicesManager;
namespace OreUI { class GameDependencies; }
namespace OreUI { class SubscriptionInfo; }
// clang-format on

namespace OreUI {

class EntitlementServicesQuery : public ::OreUI::QueryBase<OreUI::EntitlementServicesQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mMarketplaceServicesManager;
    ::ll::UntypedStorage<8, 152> mHasAvailableRealmsTrial;
    ::ll::UntypedStorage<8, 152> mHasAvailableMarketplacePassTrial;
    ::ll::UntypedStorage<8, 104> mNextAvailableSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitlementServicesQuery& operator=(EntitlementServicesQuery const&);
    EntitlementServicesQuery(EntitlementServicesQuery const&);
    EntitlementServicesQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EntitlementServicesQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EntitlementServicesQuery(::OreUI::GameDependencies const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[39]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
