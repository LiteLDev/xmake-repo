#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ActiveDirectoryAuthenticationInterface.h"
#include "mc/client/gui/screens/controllers/AuthenticationUIState.h"
#include "mc/deps/identity/edu_common/ActiveDirectoryAuthenticationState.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryPopup;
class MinecraftScreenModel;
class TransactionContext;
struct EduPurchaseDetails;
struct Purchase;
// clang-format on

class MinecraftActiveDirectoryAuthentication : public ::ActiveDirectoryAuthenticationInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<MinecraftScreenModel>> mMinecraftScreenModel;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftActiveDirectoryAuthentication();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftActiveDirectoryAuthentication();

    virtual ::ActiveDirectoryAuthenticationState getAuthenticationState() const;

    virtual std::optional<ActiveDirectoryPopup> getPopup() const;

    virtual std::string getTrialPopupId() const;

    virtual ::AuthenticationUIState getSignInUIState() const;

    virtual bool shouldShowPurchaseDialog() const;

    virtual bool shouldAllowExitGame() const;

    virtual bool shouldShowTrialPurchaseLink() const;

    virtual ::AuthenticationUIState initializeActiveDirectorySignIn(bool);

    virtual void setActiveDirectoryAuthenticationOfferPurchase();

    virtual bool purchaseEduLicense(std::unique_ptr<TransactionContext>);

    virtual bool getUnfulfilledEduPurchase(::EduPurchaseDetails&) const;

    virtual bool fulfillPriorEduPurchase(std::weak_ptr<Purchase>, std::unique_ptr<TransactionContext>);

    virtual ::AuthenticationUIState doSignIn(::AuthenticationUIState);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MinecraftActiveDirectoryAuthentication(std::shared_ptr<MinecraftScreenModel>);

    MCNAPI bool _isIOS() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ActiveDirectoryAuthenticationState $getAuthenticationState() const;

    MCNAPI std::optional<ActiveDirectoryPopup> $getPopup() const;

    MCNAPI std::string $getTrialPopupId() const;

    MCNAPI ::AuthenticationUIState $getSignInUIState() const;

    MCNAPI bool $shouldShowPurchaseDialog() const;

    MCNAPI bool $shouldAllowExitGame() const;

    MCNAPI bool $shouldShowTrialPurchaseLink() const;

    MCNAPI ::AuthenticationUIState $initializeActiveDirectorySignIn(bool);

    MCNAPI void $setActiveDirectoryAuthenticationOfferPurchase();

    MCNAPI bool $purchaseEduLicense(std::unique_ptr<TransactionContext>);

    MCNAPI bool $getUnfulfilledEduPurchase(::EduPurchaseDetails&) const;

    MCNAPI bool $fulfillPriorEduPurchase(std::weak_ptr<Purchase>, std::unique_ptr<TransactionContext>);

    MCNAPI ::AuthenticationUIState $doSignIn(::AuthenticationUIState);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ActiveDirectoryAuthenticationInterface.h"
#include "mc/client/gui/screens/controllers/AuthenticationUIState.h"
#include "mc/deps/identity/edu_common/ActiveDirectoryAuthenticationState.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryPopup;
class MinecraftScreenModel;
class TransactionContext;
struct EduPurchaseDetails;
struct Purchase;
// clang-format on

class MinecraftActiveDirectoryAuthentication : public ::ActiveDirectoryAuthenticationInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MinecraftScreenModel>> mMinecraftScreenModel;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftActiveDirectoryAuthentication() /*override*/ = default;

    virtual ::ActiveDirectoryAuthenticationState getAuthenticationState() const /*override*/;

    virtual ::std::optional<::ActiveDirectoryPopup> getPopup() const /*override*/;

    virtual ::std::string getTrialPopupId() const /*override*/;

    virtual ::AuthenticationUIState getSignInUIState() const /*override*/;

    virtual bool shouldShowPurchaseDialog() const /*override*/;

    virtual bool shouldAllowExitGame() const /*override*/;

    virtual bool shouldShowTrialPurchaseLink() const /*override*/;

    virtual ::AuthenticationUIState initializeActiveDirectorySignIn(bool displaySignIn) /*override*/;

    virtual void setActiveDirectoryAuthenticationOfferPurchase() /*override*/;

    virtual bool purchaseEduLicense(::std::unique_ptr<::TransactionContext> context) /*override*/;

    virtual bool getUnfulfilledEduPurchase(::EduPurchaseDetails& details) const /*override*/;

    virtual bool fulfillPriorEduPurchase(
        ::std::weak_ptr<::Purchase>             purchase,
        ::std::unique_ptr<::TransactionContext> context
    ) /*override*/;

    virtual ::AuthenticationUIState doSignIn(::AuthenticationUIState currentState) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _isIOS() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ActiveDirectoryAuthenticationState $getAuthenticationState() const;

    MCAPI ::std::optional<::ActiveDirectoryPopup> $getPopup() const;

    MCAPI ::std::string $getTrialPopupId() const;

    MCAPI ::AuthenticationUIState $getSignInUIState() const;

    MCAPI bool $shouldShowPurchaseDialog() const;

    MCFOLD bool $shouldAllowExitGame() const;

    MCFOLD bool $shouldShowTrialPurchaseLink() const;

    MCAPI ::AuthenticationUIState $initializeActiveDirectorySignIn(bool displaySignIn);

    MCAPI void $setActiveDirectoryAuthenticationOfferPurchase();

    MCAPI bool $purchaseEduLicense(::std::unique_ptr<::TransactionContext> context);

    MCAPI bool $getUnfulfilledEduPurchase(::EduPurchaseDetails& details) const;

    MCAPI bool
    $fulfillPriorEduPurchase(::std::weak_ptr<::Purchase> purchase, ::std::unique_ptr<::TransactionContext> context);

    MCAPI ::AuthenticationUIState $doSignIn(::AuthenticationUIState currentState);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class MinecraftActiveDirectoryAuthentication {};
#endif // @header-generator platform
#endif // @header-generator platform
