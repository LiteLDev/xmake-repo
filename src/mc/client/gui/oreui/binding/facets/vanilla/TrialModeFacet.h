#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/PurchaseGameError.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/store/iap/TrialUpgradePurchaseTier.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class TrialManager;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/PurchaseGameError.h"
#include "mc/client/store/iap/TrialUpgradePurchaseTier.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class TrialManager;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class TrialModeFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::TrialModeFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                       mTrialManager;
    ::ll::TypedStorage<4, 8, std::optional<OreUI::PurchaseGameError>> mPurchaseGameError;
    // NOLINTEND

public:
    // prevent constructor by default
    TrialModeFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TrialModeFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TrialModeFacet(::gsl::not_null<Bedrock::NonOwnerPointer<TrialManager>>);

    MCNAPI std::optional<OreUI::PurchaseGameError> const& getPurchaseGameError() const;

    MCNAPI void purchaseGame(::TrialUpgradePurchaseTier);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[18]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<TrialManager>>);
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
class TrialModeFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::TrialModeFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::TrialManager>> mTrialManager;
    ::ll::TypedStorage<4, 8, ::std::optional<::OreUI::PurchaseGameError>>    mPurchaseGameError;
    // NOLINTEND

public:
    // prevent constructor by default
    TrialModeFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit TrialModeFacet(::Bedrock::NotNullNonOwnerPtr<::TrialManager> trialManager);

    MCFOLD ::std::optional<::OreUI::PurchaseGameError> const& getPurchaseGameError() const;

    MCAPI void purchaseGame(::TrialUpgradePurchaseTier tier);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::TrialManager> trialManager);
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
class TrialModeFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
