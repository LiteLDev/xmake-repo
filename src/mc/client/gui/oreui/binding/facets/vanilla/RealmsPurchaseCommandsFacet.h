#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class LegacyRealmsPurchase; }
namespace Realms { class LegacyRealmsPurchaseReconciler; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class LegacyRealmsPurchase; }
namespace Realms { class LegacyRealmsPurchaseReconciler; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsPurchaseCommandsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsPurchaseCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::LegacyRealmsPurchaseReconciler>> mRealmsPurchaseReconciler;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::LegacyRealmsPurchase>>           mRealmsPurchase;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPurchaseCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPurchaseCommandsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsPurchaseCommandsFacet(
        std::shared_ptr<Realms::LegacyRealmsPurchase>,
        std::shared_ptr<Realms::LegacyRealmsPurchaseReconciler>
    );

    MCNAPI void fulfillPriorRealmsPurchase(std::string const&);

    MCNAPI void prepareAppStoreForReconciliation(std::string const&);

    MCNAPI void prepareAppStoreForTrialPurchases(std::string const&, std::string const&);

    MCNAPI void purchaseTrial(std::string const&, std::string const&);

    MCNAPI void resetPurchase();

    MCNAPI void resetReconciler();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[31]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
        $ctor(std::shared_ptr<Realms::LegacyRealmsPurchase>, std::shared_ptr<Realms::LegacyRealmsPurchaseReconciler>);
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
class RealmsPurchaseCommandsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsPurchaseCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::LegacyRealmsPurchaseReconciler>> mRealmsPurchaseReconciler;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::LegacyRealmsPurchase>>           mRealmsPurchase;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPurchaseCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPurchaseCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsPurchaseCommandsFacet(
        ::std::shared_ptr<::Realms::LegacyRealmsPurchase>           realmsPurchase,
        ::std::shared_ptr<::Realms::LegacyRealmsPurchaseReconciler> realmsPurchaseReconciler
    );

    MCAPI void fulfillPriorRealmsPurchase(::std::string const& xuid);

    MCAPI void prepareAppStoreForReconciliation(::std::string const& xuid);

    MCAPI void prepareAppStoreForTrialPurchases(::std::string const& xuid, ::std::string const& worldName);

    MCAPI void purchaseTrial(::std::string const& xuid, ::std::string const& worldName);

    MCAPI void resetPurchase();

    MCAPI void resetReconciler();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::Realms::LegacyRealmsPurchase>           realmsPurchase,
        ::std::shared_ptr<::Realms::LegacyRealmsPurchaseReconciler> realmsPurchaseReconciler
    );
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
class RealmsPurchaseCommandsFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
