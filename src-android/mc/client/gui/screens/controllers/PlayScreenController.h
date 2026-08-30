#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/models/PlayScreenDefaultTab.h"
#include "mc/client/legacy/ImportStatus.h"
#include "mc/client/network/realms/RealmsAPI.h"
#include "mc/client/world/LocalWorldInfo.h"
#include "mc/client/world/NetworkWorldType.h"
#include "mc/client/world/RealmType.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class DlcChecker;
class DlcUIWrapper;
class PlatformMultiplayerRestrictions;
class PlayScreenModel;
class ServicesManager;
class UIPropertyBag;
struct ImportResult;
struct LegacyWorldInfo;
struct NetworkWorldInfo;
struct RealmsWorldInfo;
namespace Json { class Value; }
namespace Realms { struct World; }
namespace Social { struct PermissionCheckResult; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

class PlayScreenController : public ::MainMenuScreenController {
public:
    // PlayScreenController inner types define
    enum class ServerCollectionName : int {
        ThirdParty = 0,
        External   = 1,
        Invalid    = 2,
    };

    enum class ConvertProgressState : int {
        Closed   = 0,
        Active   = 1,
        TryClose = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<PlayScreenModel>> mPlayScreenModel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DlcUIWrapper>> mDlcUIWrapper;
    ::ll::TypedStorage<4, 4, ::PlayScreenDefaultTab> mActiveTabIndex;
    ::ll::TypedStorage<1, 1, bool> mForceRefreshRealmsOnOpen;
    ::ll::TypedStorage<1, 1, bool> mForceRefreshThirdPartyServersOnOpen;
    ::ll::TypedStorage<1, 1, bool> mRealmsBindingsDirty;
    ::ll::TypedStorage<1, 1, bool> mCheckUGCOnTabChange;
    ::ll::TypedStorage<1, 1, bool> mRealmsCompatibilityCheckComplete;
    ::ll::UntypedStorage<4, 4> mRealmsCompatibility;
    ::ll::TypedStorage<1, 1, bool> mStorageDropdownActive;
    ::ll::TypedStorage<1, 1, bool> mUseTabs;
    ::ll::TypedStorage<4, 4, uint> mIconBouncesInProgress;
    ::ll::TypedStorage<1, 1, bool> mFriendsIconBouncing;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mBounceCooldownTimer;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>> const> mBounceCooldownTimerDuration;
    ::ll::TypedStorage<1, 1, bool> mInviteIconDisplayed;
    ::ll::TypedStorage<1, 1, bool> mFriendTabViewed;
    ::ll::TypedStorage<1, 1, bool> mPlatformRestrictsMultiplayer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlatformMultiplayerRestrictions>> mPlatformMultiplayerRestrictions;
    ::ll::TypedStorage<8, 24, std::string> mInviteCode;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::TypedStorage<4, 4, ::PlayScreenController::ServerCollectionName> mCurrentServerCollectionName;
    ::ll::TypedStorage<4, 4, ::PlayScreenController::ConvertProgressState> mProgressScreenState;
    ::ll::TypedStorage<8, 24, std::string> mDirtyLevelId;
    ::ll::TypedStorage<1, 1, bool> mLayoutDirty;
    ::ll::TypedStorage<4, 4, int> mCurrentServerIndex;
    ::ll::TypedStorage<4, 4, int> mCurrentScreenshotIndex;
    ::ll::TypedStorage<1, 1, bool> mIsDescriptionExpanded;
    ::ll::TypedStorage<1, 1, bool> mIsNewsExpanded;
    ::ll::TypedStorage<1, 1, bool> mAddServerInfoVisible;
    ::ll::TypedStorage<1, 1, bool> mNavigatedToAddServer;
    ::ll::TypedStorage<8, 24, std::string> mRealmsTrialRandomText;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DlcChecker>> mDlcChecker;
    ::ll::UntypedStorage<8, 848> mTempLocalWorldInfo;
    ::ll::TypedStorage<8, 8, ::ui::ScreenTechStackSelector&> mScreenTechStackSelector;
    ::ll::TypedStorage<1, 1, bool> mNeedsOfflineAuthCode;
    ::ll::TypedStorage<1, 1, bool> mOwnershipVerificationAnimationVisibleState;
    ::ll::TypedStorage<1, 1, bool> mDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mBuildGameListSubscription;
    ::ll::UntypedStorage<8, 24> mMCTokenUpdateSubscription;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PlayScreenController& operator=(PlayScreenController const&);
    PlayScreenController(PlayScreenController const&);
    PlayScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void onLeave();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);

    virtual void addStaticScreenVars(::Json::Value&);

    virtual std::string getAdditionalScreenInfo() const;

    virtual ::ui::SceneType getSceneType() const;

    virtual std::string _getButtonADescription();

    virtual void _registerEventHandlers();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayScreenController(
        std::shared_ptr<PlayScreenModel>,
        ::PlayScreenDefaultTab,
        ::ui::ScreenTechStackSelector&,
        std::string const&
    );

    MCNAPI bool _checkIfPingIsLoading(int);

    MCNAPI ::ui::ViewRequest _convertLegacyWorld(::LegacyWorldInfo const&);

    MCNAPI void _displayRealmsFailedToJoinModal(std::function<void(ModalScreenButtonId)>);

    MCNAPI int _getCollectionIndex(::UIPropertyBag*) const;

    MCNAPI std::string _getCrossPlatformFriendsGridWarningText();

    MCNAPI std::string _getFriendsGridWarningText();

    MCNAPI std::string _getGeneralMultiplayerWarningText();

    MCNAPI ::NetworkWorldType _getNetworkWorldTypeFromCollection(std::string const&) const;

    MCNAPI ::ui::ViewRequest _handleStartNetworkItem(int, ::NetworkWorldType);

    MCNAPI void _navigatePlayScreenTechStack(::PlayScreenDefaultTab);

    MCNAPI void _navigateToCreateWorldScreen();

    MCNAPI void _onMCTokenUpdated(::ServicesManager*);

    MCNAPI ::Social::PermissionCheckResult _parentalControlsDialogCheck();

    MCNAPI void _registerBindings();

    MCNAPI void _setOwnershipVerificationAnimationVisibleState();

    MCNAPI bool _shouldShowLockIcon(::LocalWorldInfo const&) const;

    MCNAPI ::ui::ViewRequest _startLocalWorld(::LocalWorldInfo const&);

    MCNAPI ::ui::ViewRequest _startNetworkWorld(::NetworkWorldInfo const&, ::NetworkWorldType);

    MCNAPI bool _worldHasImage(::NetworkWorldType, int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1>>& mFiveSecondInterval();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(std::shared_ptr<PlayScreenModel>, ::PlayScreenDefaultTab, ::ui::ScreenTechStackSelector&, std::string const&);
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

    MCNAPI void $onLeave();

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI std::string $getAdditionalScreenInfo() const;

    MCNAPI ::ui::SceneType $getSceneType() const;

    MCNAPI std::string $_getButtonADescription();

    MCNAPI void $_registerEventHandlers();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
