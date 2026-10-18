#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/realms/RealmsPurchaseReconcilerFailureReason.h"
#include "mc/client/realms/RealmsPurchaseReconcilerState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class LegacyRealmsPurchaseReconciler; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/realms/RealmsPurchaseReconcilerFailureReason.h"
#include "mc/client/realms/RealmsPurchaseReconcilerState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class LegacyRealmsPurchaseReconciler; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsPurchaseReconcilerQueriesFacet
: public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsPurchaseReconcilerQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::LegacyRealmsPurchaseReconciler>> mRealmsPurchaseReconciler;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                         mStateChangedSubscription;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsPurchaseReconcilerState>                  mState;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsPurchaseReconcilerFailureReason>          mFailureReason;
    ::ll::TypedStorage<1, 1, bool>                                                     mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPurchaseReconcilerQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPurchaseReconcilerQueriesFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsPurchaseReconcilerQueriesFacet(std::shared_ptr<Realms::LegacyRealmsPurchaseReconciler>);

    MCNAPI ::Realms::RealmsPurchaseReconcilerFailureReason getFailureReason() const;

    MCNAPI ::Realms::RealmsPurchaseReconcilerState getState() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[40]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<Realms::LegacyRealmsPurchaseReconciler>);
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
class RealmsPurchaseReconcilerQueriesFacet
: public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsPurchaseReconcilerQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::LegacyRealmsPurchaseReconciler>> mRealmsPurchaseReconciler;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                             mStateChangedSubscription;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsPurchaseReconcilerState>                      mState;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsPurchaseReconcilerFailureReason>              mFailureReason;
    ::ll::TypedStorage<1, 1, bool>                                                         mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPurchaseReconcilerQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPurchaseReconcilerQueriesFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsPurchaseReconcilerQueriesFacet(
        ::std::shared_ptr<::Realms::LegacyRealmsPurchaseReconciler> realmsPurchaseReconciler
    );

    MCFOLD ::Realms::RealmsPurchaseReconcilerFailureReason getFailureReason() const;

    MCFOLD ::Realms::RealmsPurchaseReconcilerState getState() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::LegacyRealmsPurchaseReconciler> realmsPurchaseReconciler);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class RealmsPurchaseReconcilerQueriesFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
