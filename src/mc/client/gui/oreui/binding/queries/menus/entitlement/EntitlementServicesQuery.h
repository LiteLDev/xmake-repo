#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class EntitlementServicesQuery : public ::OreUI::QueryBase<::OreUI::EntitlementServicesQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MarketplaceServicesManager&> mMarketplaceServicesManager;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>     mHasAvailableRealmsTrial;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>     mHasAvailableMarketplacePassTrial;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::SubscriptionInfo, ::std::allocator<::OreUI::SubscriptionInfo>>>
        mNextAvailableSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitlementServicesQuery& operator=(EntitlementServicesQuery const&);
    EntitlementServicesQuery(EntitlementServicesQuery const&);
    EntitlementServicesQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EntitlementServicesQuery(::OreUI::GameDependencies const& game);

    MCAPI void _onSubscriptionDataChanged();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};
#else // @header-generator platform
class EntitlementServicesQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
