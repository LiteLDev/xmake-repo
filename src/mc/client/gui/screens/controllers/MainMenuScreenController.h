#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/StoreNavigationOrigin.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/controllers/ScreenExitBehavior.h"
#include "mc/client/network/realms/FailureReason.h"
#include "mc/events/IMinecraftEventing.h"

// auto generated forward declare list
// clang-format off
class AsyncTracker;
class DlcUIWrapper;
class IStoreCatalogItem;
class MainMenuScreenModel;
struct LevelSummary;
struct LocalWorldInfo;
struct TextEditScreenEventData;
namespace Realms { struct World; }
namespace mce { class UUID; }
// clang-format on

class MainMenuScreenController : public ::MinecraftScreenController {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/controllers/ScreenExitBehavior.h"
#include "mc/client/network/realms/FailureReason.h"
#include "mc/events/IMinecraftEventing.h"

// auto generated forward declare list
// clang-format off
class AsyncTracker;
class DlcUIWrapper;
class MainMenuScreenModel;
struct LocalWorldInfo;
struct TextEditScreenEventData;
namespace Realms { struct World; }
// clang-format on

class MainMenuScreenController : public ::MinecraftScreenController {
#else // @header-generator platform
class MainMenuScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // MainMenuScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class StartRealmFailureAction : int {
        ShowModalPopup     = 0,
        JustNotifyCallback = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<MainMenuScreenModel>> mMainMenuScreenModel;
    ::ll::UntypedStorage<8, 16>                                     mAsyncTracker;
    // NOLINTEND

public:
    // prevent constructor by default
    MainMenuScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MainMenuScreenController();

    virtual void onOpen();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MainMenuScreenController(std::shared_ptr<MainMenuScreenModel>, ::ScreenExitBehavior);

    MCNAPI std::string _checkTextEditEventForProfanityAndOpenWarning(::TextEditScreenEventData const&);

    MCNAPI void _displayFileStorageLocationWarningModal();

    MCNAPI void _displayWorldConversionErrorModalDialog();

    MCNAPI void _navigateToPurchaseOfferScreen(::mce::UUID const&, ::StoreNavigationOrigin);

    MCNAPI void _navigateToPurchaseOfferScreen(::IStoreCatalogItem&, ::StoreNavigationOrigin, bool const);

    MCNAPI ::ui::ViewRequest
    _startLocalWorldSubRoutine(::LocalWorldInfo const&, ::DlcUIWrapper&, std::function<void(const LocalWorldInfo&)>);

    MCNAPI void _verifySkinApprovedBeforeJoin(std::function<void()> const&);

    MCNAPI ::ui::ViewRequest attemptUserSignIn(std::function<void()>);

    MCNAPI void confirmationNoCrossPlatformMultiplayerDialog(std::function<void(ModalScreenButtonId)>);

    MCNAPI void confirmationNoCrossPlatformMultiplayerSkinDialog(std::function<void()>);

    MCNAPI std::shared_ptr<MainMenuScreenModel> getMainMenuScreenModel();

    MCNAPI void showInvalidCrossPlatformMultiplayerSkinModal();

    MCNAPI void startRealm(
        ::IMinecraftEventing::RealmConnectionFlow,
        ::Realms::World&,
        std::function<void(IMinecraftEventing::RealmConnectionResult, std::optional<Realms::FailureReason>)>,
        ::MainMenuScreenController::StartRealmFailureAction,
        std::function<void()>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>, ::ScreenExitBehavior);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onOpen();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class StartRealmFailureAction : int {
        ShowModalPopup     = 0,
        JustNotifyCallback = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MainMenuScreenModel>> mMainMenuScreenModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::AsyncTracker>>         mAsyncTracker;
    // NOLINTEND

public:
    // prevent constructor by default
    MainMenuScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MainMenuScreenController() /*override*/;

    virtual void onOpen() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MainMenuScreenController(::std::shared_ptr<::MainMenuScreenModel> model, ::ScreenExitBehavior exitBehavior);

    MCAPI ::std::string _checkTextEditEventForProfanityAndOpenWarning(::TextEditScreenEventData const& textEditEvent);

    MCAPI void _displayWorldConversionErrorModalDialog();

    MCAPI ::ui::ViewRequest _startLocalWorldSubRoutine(
        ::LocalWorldInfo const&                        world,
        ::DlcUIWrapper&                                dlcUIWrapper,
        ::std::function<void(::LocalWorldInfo const&)> startLocalWorldCallback
    );

    MCAPI void _verifySkinApprovedBeforeJoin(::std::function<void()> const& joinCallback);

    MCAPI ::ui::ViewRequest attemptUserSignIn(::std::function<void()> adHocCallback);

    MCAPI void confirmationNoCrossPlatformMultiplayerDialog(::std::function<void(::ModalScreenButtonId)> callback);

    MCAPI void confirmationNoCrossPlatformMultiplayerSkinDialog(::std::function<void()> callback);

    MCAPI void showInvalidCrossPlatformMultiplayerSkinModal();

    MCAPI void startRealm(
        ::IMinecraftEventing::RealmConnectionFlow fromFlow,
        ::Realms::World&                          world,
        ::std::function<void(::IMinecraftEventing::RealmConnectionResult, ::std::optional<::Realms::FailureReason>)>
                                                            callback,
        ::MainMenuScreenController::StartRealmFailureAction failureAction,
        ::std::function<void()>                             onlineSafetyCancelledCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::ScreenExitBehavior exitBehavior);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
#else // @header-generator platform
    enum class StartRealmFailureAction : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
