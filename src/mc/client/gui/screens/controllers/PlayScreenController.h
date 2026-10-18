#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/models/PlayScreenDefaultTab.h"
#include "mc/client/network/realms/RealmsAPI.h"
#include "mc/client/world/LocalWorldInfo.h"
#include "mc/client/world/NetworkWorldType.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class DlcChecker;
class DlcUIWrapper;
class PlatformMultiplayerRestrictions;
class PlayScreenModel;
class ServicesManager;
struct LegacyWorldInfo;
struct NetworkWorldInfo;
namespace Json { class Value; }
namespace Social { struct PermissionCheckResult; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

class PlayScreenController : public ::MainMenuScreenController {
#else // @header-generator platform
class PlayScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // PlayScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class ServerCollectionName : int {
        ThirdParty = 0,
        External   = 1,
        Invalid    = 2,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class ConvertProgressState : int {
        Closed   = 0,
        Active   = 1,
        TryClose = 2,
    };
#else // @header-generator platform
    enum class ConvertProgressState : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class ServerCollectionName : int {
        ThirdParty = 0,
        External   = 1,
        Invalid    = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PlayScreenModel>>                mPlayScreenModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DlcUIWrapper>>                    mDlcUIWrapper;
    ::ll::TypedStorage<4, 4, ::PlayScreenDefaultTab>                               mActiveTabIndex;
    ::ll::TypedStorage<1, 1, bool>                                                 mForceRefreshRealmsOnOpen;
    ::ll::TypedStorage<1, 1, bool>                                                 mForceRefreshThirdPartyServersOnOpen;
    ::ll::TypedStorage<1, 1, bool>                                                 mRealmsBindingsDirty;
    ::ll::TypedStorage<1, 1, bool>                                                 mCheckUGCOnTabChange;
    ::ll::TypedStorage<1, 1, bool>                                                 mRealmsCompatibilityCheckComplete;
    ::ll::TypedStorage<4, 4, ::RealmsAPI::Compatibility>                           mRealmsCompatibility;
    ::ll::TypedStorage<1, 1, bool>                                                 mStorageDropdownActive;
    ::ll::TypedStorage<1, 1, bool>                                                 mUseTabs;
    ::ll::TypedStorage<4, 4, uint>                                                 mIconBouncesInProgress;
    ::ll::TypedStorage<1, 1, bool>                                                 mFriendsIconBouncing;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>              mBounceCooldownTimer;
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds const>                         mBounceCooldownTimerDuration;
    ::ll::TypedStorage<1, 1, bool>                                                 mInviteIconDisplayed;
    ::ll::TypedStorage<1, 1, bool>                                                 mFriendTabViewed;
    ::ll::TypedStorage<1, 1, bool>                                                 mPlatformRestrictsMultiplayer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlatformMultiplayerRestrictions>> mPlatformMultiplayerRestrictions;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mInviteCode;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                        mTaskGroup;
    ::ll::TypedStorage<4, 4, ::PlayScreenController::ServerCollectionName>         mCurrentServerCollectionName;
    ::ll::TypedStorage<4, 4, ::PlayScreenController::ConvertProgressState>         mProgressScreenState;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mDirtyLevelId;
    ::ll::TypedStorage<1, 1, bool>                                                 mLayoutDirty;
    ::ll::TypedStorage<4, 4, int>                                                  mCurrentServerIndex;
    ::ll::TypedStorage<4, 4, int>                                                  mCurrentScreenshotIndex;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsDescriptionExpanded;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsNewsExpanded;
    ::ll::TypedStorage<1, 1, bool>                                                 mAddServerInfoVisible;
    ::ll::TypedStorage<1, 1, bool>                                                 mNavigatedToAddServer;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mRealmsTrialRandomText;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DlcChecker>>                      mDlcChecker;
    ::ll::TypedStorage<8, 1040, ::LocalWorldInfo>                                  mTempLocalWorldInfo;
    ::ll::TypedStorage<8, 8, ::ui::ScreenTechStackSelector&>                       mScreenTechStackSelector;
    ::ll::TypedStorage<1, 1, bool>                                                 mNeedsOfflineAuthCode;
    ::ll::TypedStorage<1, 1, bool>                             mOwnershipVerificationAnimationVisibleState;
    ::ll::TypedStorage<1, 1, bool>                             mDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mBuildGameListSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mMCTokenUpdateSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayScreenController& operator=(PlayScreenController const&);
    PlayScreenController(PlayScreenController const&);
    PlayScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayScreenController() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onLeave() /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual ::std::string _getButtonADescription() /*override*/;

    virtual void _registerEventHandlers();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayScreenController(
        ::std::shared_ptr<::PlayScreenModel> model,
        ::PlayScreenDefaultTab               tab,
        ::ui::ScreenTechStackSelector&       screenTechStackSelector,
        ::std::string const&                 dirtyLevelId
    );

    MCAPI bool _checkIfPingIsLoading(int collectionIndex);

    MCAPI ::ui::ViewRequest _convertLegacyWorld(::LegacyWorldInfo const& world);

    MCAPI void _displayRealmsFailedToJoinModal(::std::function<void(::ModalScreenButtonId)> callback);

    MCAPI ::std::string _getCrossPlatformFriendsGridWarningText();

    MCAPI ::std::string _getFriendsGridWarningText();

    MCAPI ::std::string _getGeneralMultiplayerWarningText();

    MCAPI ::ui::ViewRequest _handleStartNetworkItem(int index, ::NetworkWorldType nwt);

    MCAPI void _navigatePlayScreenTechStack(::PlayScreenDefaultTab tab);

    MCAPI void _navigateToCreateWorldScreen();

    MCAPI void _onMCTokenUpdated(::ServicesManager*);

    MCAPI ::Social::PermissionCheckResult _parentalControlsDialogCheck();

    MCAPI void _registerBindings();

    MCAPI void _setOwnershipVerificationAnimationVisibleState();

    MCAPI bool _shouldShowLockIcon(::LocalWorldInfo const& world) const;

    MCAPI ::ui::ViewRequest _startLocalWorld(::LocalWorldInfo const& world);

    MCAPI ::ui::ViewRequest _startNetworkWorld(::NetworkWorldInfo const& world, ::NetworkWorldType worldType);

    MCAPI bool _worldHasHeader(::NetworkWorldType type, int collectionIndex);

    MCAPI bool _worldHasImage(::NetworkWorldType type, int collectionIndex);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::NetworkWorldType _getNetworkWorldTypeFromCollection(::std::string const& collectionName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::PlayScreenModel> model,
        ::PlayScreenDefaultTab               tab,
        ::ui::ScreenTechStackSelector&       screenTechStackSelector,
        ::std::string const&                 dirtyLevelId
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $onOpen();

    MCAPI void $onLeave();

    MCAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification notification);

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI ::std::string $getAdditionalScreenInfo() const;

    MCFOLD ::ui::SceneType $getSceneType() const;

    MCFOLD ::std::string $_getButtonADescription();

    MCAPI void $_registerEventHandlers();
    // NOLINTEND
#else // @header-generator platform
    enum class ServerCollectionName : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
