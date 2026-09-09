#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
public:
    // MainMenuScreenController inner types define
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
};
