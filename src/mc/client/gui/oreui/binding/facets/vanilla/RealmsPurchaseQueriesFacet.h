#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/realms/RealmsPurchaseFailureReason.h"
#include "mc/client/realms/RealmsPurchaseState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class LegacyRealmsPurchase; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/realms/RealmsPurchaseFailureReason.h"
#include "mc/client/realms/RealmsPurchaseState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class LegacyRealmsPurchase; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsPurchaseQueriesFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsPurchaseQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::LegacyRealmsPurchase>> mRealmsPurchase;
    ::ll::TypedStorage<1, 1, bool>                                           mPurchaseDisabledDueToStoreVersion;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsPurchaseState>                  mState;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsPurchaseFailureReason>          mFailureReason;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mStateChangedSubscription;
    ::ll::TypedStorage<1, 1, bool>                                           mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPurchaseQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPurchaseQueriesFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsPurchaseQueriesFacet(std::shared_ptr<Realms::LegacyRealmsPurchase>, int);

    MCNAPI ::Realms::RealmsPurchaseFailureReason getFailureReason() const;

    MCNAPI ::Realms::RealmsPurchaseState getState() const;

    MCNAPI bool isPurchaseDisabledDueToStoreVersion() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[30]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<Realms::LegacyRealmsPurchase>, int);
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
class RealmsPurchaseQueriesFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsPurchaseQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::LegacyRealmsPurchase>> mRealmsPurchase;
    ::ll::TypedStorage<1, 1, bool>                                               mPurchaseDisabledDueToStoreVersion;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsPurchaseState>                      mState;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsPurchaseFailureReason>              mFailureReason;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mStateChangedSubscription;
    ::ll::TypedStorage<1, 1, bool>                                               mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPurchaseQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPurchaseQueriesFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsPurchaseQueriesFacet(
        ::std::shared_ptr<::Realms::LegacyRealmsPurchase> realmsPurchase,
        int                                               expectedStoreVersion
    );

    MCFOLD ::Realms::RealmsPurchaseFailureReason getFailureReason() const;

    MCAPI ::Realms::RealmsPurchaseState getState() const;

    MCFOLD bool isPurchaseDisabledDueToStoreVersion() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::LegacyRealmsPurchase> realmsPurchase, int expectedStoreVersion);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class RealmsPurchaseQueriesFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
