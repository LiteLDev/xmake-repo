#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/Role.h"
#include "mc/client/gui/screens/controllers/ActiveDirectoryAuthenticationInterface.h"
#include "mc/client/gui/screens/controllers/AuthenticationUIState.h"
#include "mc/deps/identity/edu_common/ActiveDirectoryAuthenticationState.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryPopup;
class TransactionContext;
struct EduPurchaseDetails;
struct Purchase;
// clang-format on

class MockActiveDirectoryAuthentication : public ::ActiveDirectoryAuthenticationInterface {
public:
    // MockActiveDirectoryAuthentication inner types define
    enum class UIState : int {
        SignInPrompt                  = 0,
        SignInAdalInProgress          = 1,
        SignInPromptAdalFailed        = 2,
        SignInMutsInProgress          = 3,
        SignInPromptMutsInvalid       = 4,
        SignInPromptMutsNetworkError  = 5,
        SignInInvalidClient           = 6,
        SignInInvalidAccountType      = 7,
        TrialNew                      = 8,
        TrialWarning                  = 9,
        OneTrialWarning               = 10,
        FinalTrialWarning             = 11,
        TrialEnded                    = 12,
        GeneralPopupContinue          = 13,
        GeneralPopupQuit              = 14,
        GeneralPopupDisplayDemoChoice = 15,
        Eula                          = 16,
        Purchase                      = 17,
        Welcome                       = 18,
        DemoSignIn                    = 19,
        SigninDemoInvalid             = 20,
        Count                         = 21,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ActiveDirectoryAuthenticationState>                 mState;
    ::ll::TypedStorage<8, 8, std::unique_ptr<std::optional<ActiveDirectoryPopup>>> mPopup;
    ::ll::TypedStorage<4, 4, ::AuthenticationUIState>                              mUIState;
    ::ll::TypedStorage<1, 1, bool>                                                 mShowLoginOnOpen;
    ::ll::TypedStorage<1, 1, bool>                                                 mAllowExitGame;
    ::ll::TypedStorage<1, 1, bool>                                                 mShouldShowTrialPurchaseLink;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsIOS;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsFirstTimeLogin;
    ::ll::TypedStorage<1, 1, ::edu::Role>                                          mRole;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MockActiveDirectoryAuthentication() = default;

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
};
