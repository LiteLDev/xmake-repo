#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/certificates/identity/ActiveDirectoryPopup.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/AuthLoadingMessages.h"
#include "mc/client/gui/screens/controllers/AuthenticationUIState.h"
#include "mc/client/gui/screens/controllers/EduPurchaseUXState.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ADPopupButtonAction;
class ActiveDirectoryAuthenticationInterface;
class ClickSourceContext;
class MinecraftScreenModel;
struct Purchase;
namespace Json { class Value; }
namespace Progress { class ProgressTips; }
// clang-format on

class ActiveDirectoryAuthenticationScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                  mAuthenticationPendingPresentationHandled;
    ::ll::TypedStorage<8, 424, std::optional<ActiveDirectoryPopup>> mPopup;
    ::ll::TypedStorage<8, 24, std::string>                          mAuthMessage;
    ::ll::TypedStorage<8, 56, ::AuthLoadingMessages>                mLoadingMessages;
    ::ll::TypedStorage<4, 4, ::AuthenticationUIState>               mUIState;
    ::ll::TypedStorage<4, 4, ::EduPurchaseUXState>                  mPurchaseState;
    ::ll::TypedStorage<1, 1, bool>                                  mCurrentlyAgree;
    ::ll::TypedStorage<8, 24, std::string>                          mOfferPrice;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActiveDirectoryAuthenticationInterface>> mAuthentication;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClickSourceContext>>                     mClickSource;
    ::ll::UntypedStorage<8, 16>                                                       mPackLoadStart;
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveDirectoryAuthenticationScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActiveDirectoryAuthenticationScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onTerminate();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual ::ui::SceneType getSceneType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActiveDirectoryAuthenticationScreenController(
        std::shared_ptr<MinecraftScreenModel>,
        bool,
        std::unique_ptr<ClickSourceContext>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Progress::ProgressTips>>
    );

    MCNAPI void _announceModalDialog() const;

    MCNAPI void _closeModalDialog(bool);

    MCNAPI void _dialogPurchaseFailed();

    MCNAPI void _handlePopupButton(::ADPopupButtonAction const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<MinecraftScreenModel>,
        bool,
        std::unique_ptr<ClickSourceContext>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Progress::ProgressTips>>
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

    MCNAPI void $onTerminate();

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI ::ui::SceneType $getSceneType() const;
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
#include "mc/certificates/identity/ActiveDirectoryPopup.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/AuthLoadingMessages.h"
#include "mc/client/gui/screens/controllers/AuthenticationUIState.h"
#include "mc/client/gui/screens/controllers/EduPurchaseUXState.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ADPopupButtonAction;
class ActiveDirectoryAuthenticationInterface;
class ClickSourceContext;
class MinecraftScreenModel;
namespace Json { class Value; }
namespace Progress { class ProgressTips; }
// clang-format on

class ActiveDirectoryAuthenticationScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                      mAuthenticationPendingPresentationHandled;
    ::ll::TypedStorage<8, 552, ::std::optional<::ActiveDirectoryPopup>> mPopup;
    ::ll::TypedStorage<8, 32, ::std::string>                            mAuthMessage;
    ::ll::TypedStorage<8, 64, ::AuthLoadingMessages>                    mLoadingMessages;
    ::ll::TypedStorage<4, 4, ::AuthenticationUIState>                   mUIState;
    ::ll::TypedStorage<4, 4, ::EduPurchaseUXState>                      mPurchaseState;
    ::ll::TypedStorage<1, 1, bool>                                      mCurrentlyAgree;
    ::ll::TypedStorage<8, 32, ::std::string>                            mOfferPrice;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActiveDirectoryAuthenticationInterface>> mAuthentication;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ClickSourceContext>>                     mClickSource;
    ::ll::TypedStorage<8, 8, double>                                                      mPackLoadStart;
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveDirectoryAuthenticationScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActiveDirectoryAuthenticationScreenController() /*override*/ = default;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void onTerminate() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActiveDirectoryAuthenticationScreenController(
        ::std::shared_ptr<::MinecraftScreenModel>               model,
        bool                                                    displaySignIn,
        ::std::unique_ptr<::ClickSourceContext>                 clickedSource,
        ::Bedrock::NotNullNonOwnerPtr<::Progress::ProgressTips> progressTips
    );

    MCAPI void _announceModalDialog() const;

    MCAPI void _closeModalDialog(bool doPostAction);

    MCAPI void _dialogPurchaseFailed();

    MCAPI void _handlePopupButton(::ADPopupButtonAction const& action);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel>               model,
        bool                                                    displaySignIn,
        ::std::unique_ptr<::ClickSourceContext>                 clickedSource,
        ::Bedrock::NotNullNonOwnerPtr<::Progress::ProgressTips> progressTips
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCFOLD void $onTerminate();

    MCAPI ::ui::DirtyFlag $tick();

    MCFOLD ::ui::SceneType $getSceneType() const;
    // NOLINTEND
};
#else // @header-generator platform
class ActiveDirectoryAuthenticationScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
