#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/controllers/ScreenExitBehavior.h"
#include "mc/client/network/realms/World.h"
#include "mc/client/store/iap/RealmsOfferPeriod.h"
#include "mc/client/store/iap/RealmsOfferTier.h"
#include "mc/client/store/iap/RealmsOfferType.h"
#include "mc/client/store/iap/RealmsPurchaseIntent.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IEntitlementManager;
class MainMenuScreenModel;
class RealmsCreateParams;
struct ProductSku;
struct Purchase;
namespace Json { class Value; }
// clang-format on

class RealmsCreateScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                         mDirty;
    ::ll::TypedStorage<1, 1, bool>                         mCheckedTOS;
    ::ll::TypedStorage<1, 1, bool>                         mIsValidRealmName;
    ::ll::TypedStorage<1, 1, bool>                         mCheckUnfulfilledPurchase;
    ::ll::TypedStorage<1, 1, bool>                         mOverridePurchaseIntent;
    ::ll::TypedStorage<1, 1, bool>                         mPurchaseInProgress;
    ::ll::TypedStorage<8, 24, std::string>                 mRealmsPurchaseCorrelationId;
    ::ll::TypedStorage<1, 1, bool const>                   mIsSubController;
    ::ll::TypedStorage<4, 4, ::RealmsPurchaseIntent const> mPurchaseIntent;
    ::ll::TypedStorage<8, 24, std::string>                 mWorldName;
    ::ll::TypedStorage<8, 24, std::string>                 mSubscriptionId;
    ::ll::TypedStorage<4, 4, ::RealmsOfferType const>      mOfferType;
    ::ll::TypedStorage<4, 4, ::RealmsOfferPeriod>          mOfferPeriod;
    ::ll::TypedStorage<4, 4, ::RealmsOfferTier>            mOfferTier;
    ::ll::TypedStorage<1, 1, bool>                         mPurchaseDisabledDueToStoreVersion;
    ::ll::TypedStorage<1, 1, bool const>                   mTrialAvailable;
    ::ll::TypedStorage<1, 1, bool const>                   mHasClub;
    ::ll::UntypedStorage<1, 1>                             mIsFromRealmsPDP;
    ::ll::UntypedStorage<8, 48>                            mActionAfterCreate;
    ::ll::UntypedStorage<8, 24>                            mEntitlementManager;
    ::ll::UntypedStorage<8, 616>                           mNewWorld;
    ::ll::UntypedStorage<8, 48>                            mRealmCreatedCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsCreateScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsCreateScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void onCreation();

    virtual void onLeave();

    virtual void addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsCreateScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::RealmsCreateParams const&,
        bool,
        ::ScreenExitBehavior
    );

    MCNAPI void _checkUnfulfilledPurchase();

    MCNAPI void _errorDialogCreateRealmFail();

    MCNAPI void _errorDialogFailedConditions();

    MCNAPI void _errorDialogInvalidName(std::string, bool);

    MCNAPI void _fulfillPriorRealmPurchase(std::weak_ptr<Purchase>);

    MCNAPI ::ProductSku const& _getProductSku() const;

    MCNAPI void _openPurchaseInProgress();

    MCNAPI void _promptForIntentMismatchOverride(std::string const&);

    MCNAPI void _purchaseRealm();

    MCNAPI void _verifyAppStoreReady(std::function<void()>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<MainMenuScreenModel>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::RealmsCreateParams const&,
        bool,
        ::ScreenExitBehavior
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $onOpen();

    MCNAPI void $onCreation();

    MCNAPI void $onLeave();

    MCNAPI void $addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
