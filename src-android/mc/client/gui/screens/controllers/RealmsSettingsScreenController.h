#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonMode.h"
#include "mc/client/gui/screens/controllers/ModalScreenData.h"
#include "mc/client/gui/screens/controllers/MultiplayerLockState.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/client/network/realms/ConfigInfo.h"
#include "mc/client/network/realms/InviteLink.h"
#include "mc/client/network/realms/ServerRegion.h"
#include "mc/client/network/realms/SubscriptionInfo.h"
#include "mc/client/network/realms/World.h"
#include "mc/client/network/realms/WorldBackupList.h"
#include "mc/client/services/clubs/ClubModel.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/world/level/storage/GameRules.h"

// auto generated forward declare list
// clang-format off
class DlcUIWrapper;
class IContentManager;
class IContentManagerContext;
class MainMenuScreenModel;
class Pack;
class PlatformMultiplayerRestrictions;
class RealmsAllowListScreenController;
class ResourcePacksScreenController;
class UIPropertyBag;
struct GameRuleId;
struct PackContentItem;
struct PackManagerContentSource;
namespace Realms { class ContentService; }
namespace Realms { struct Content; }
namespace Realms { struct WorldBackup; }
// clang-format on

class RealmsSettingsScreenController : public ::SettingsScreenControllerBase {
public:
    // RealmsSettingsScreenController inner types declare
    // clang-format off
    struct SaveStatusTracker;
    struct RealmsVersionState;
    struct DelayedStandardModalScreenData;
    // clang-format on

    // RealmsSettingsScreenController inner types define
    enum PurchaseIntent : uint {
        Unsupported        = 0,
        ManageSubscription = 1,
        RenewSubscription  = 2,
        ExtendConsumable   = 3,
        RenewConsumable    = 4,
    };

    enum class RealmsSaveAction : int {
        Save     = 0,
        Restore  = 1,
        Download = 2,
        Upload   = 3,
        Delete   = 4,
    };

    enum SaveType : int {
        Unknown   = -1,
        Manual    = 0,
        Automatic = 1,
    };

    struct SaveStatusTracker {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mRealmsSaveInProgress;
        ::ll::TypedStorage<1, 1, bool> mClubsSaveInProgress;
        ::ll::TypedStorage<1, 1, bool> mRealmsSaveSuccess;
        // NOLINTEND
    };

    struct RealmsVersionState {
    public:
        // RealmsVersionState inner types define
        using Version = ::Realms::ConfigInfo::Version;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                   mPageIndex;
        ::ll::TypedStorage<1, 1, bool>                  mAwaitingResponse;
        ::ll::TypedStorage<8, 24, std::string>          mPendingRef;
        ::ll::TypedStorage<8, 24, std::string>          mLastFilter;
        ::ll::TypedStorage<8, 48, ::Realms::ConfigInfo> mConfigInfo;
        ::ll::UntypedStorage<8, 24>                     mFilteredVersions;
        ::ll::UntypedStorage<8, 80>                     mMatchingVersion;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~RealmsVersionState();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct DelayedStandardModalScreenData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 304, ::ModalScreenData> screenData;
        ::ll::UntypedStorage<8, 48>                   callback;
        // NOLINTEND

    public:
        // prevent constructor by default
        DelayedStandardModalScreenData& operator=(DelayedStandardModalScreenData const&);
        DelayedStandardModalScreenData(DelayedStandardModalScreenData const&);
        DelayedStandardModalScreenData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~DelayedStandardModalScreenData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using PackContentItemPtr = std::shared_ptr<PackContentItem>;

    using ConstPackContentItemPtr = std::shared_ptr<const PackContentItem>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 40, std::mutex> mClubModelMutex;
    ::ll::TypedStorage<8, 96, ::Clubs::ClubModel> mClubModel;
    ::ll::TypedStorage<8, 96, ::Clubs::ClubModel> mUpdatedClubModel;
    ::ll::TypedStorage<8, 608, ::Realms::World> mWorld;
    ::ll::TypedStorage<8, 608, ::Realms::World> mUpdatedWorld;
    ::ll::TypedStorage<8, 64, ::Realms::SubscriptionInfo> mSubscription;
    ::ll::TypedStorage<1, 1, bool> mIsInitialWorldLoadComplete;
    ::ll::TypedStorage<1, 1, bool> mRefreshWorldAndSubscriptionInfoOnOpen;
    ::ll::TypedStorage<4, 4, ::RealmsSettingsScreenController::PurchaseIntent> mPurchaseIntent;
    ::ll::TypedStorage<8, 24, std::string> mSelectedSectionTitle;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RealmsAllowListScreenController>> mRealmsAllowListScreenController;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ResourcePacksScreenController>> mBehaviorPacksScreenController;
    ::ll::TypedStorage<4, 4, int> mActiveTabIndex;
    ::ll::TypedStorage<1, 1, bool> mIsSlotsScreen;
    ::ll::TypedStorage<1, 1, bool> mHasSubscriptionInfoBeenReceived;
    ::ll::TypedStorage<1, 1, bool> mRefreshScreen;
    ::ll::TypedStorage<1, 1, bool> mIsUploadingPacks;
    ::ll::TypedStorage<1, 1, bool> mRealmsSelectedContentInitialized;
    ::ll::TypedStorage<1, 1, bool> mDidReplaceWorld;
    ::ll::TypedStorage<1, 1, bool> mRefreshingWorldInfo;
    ::ll::TypedStorage<1, 1, bool> mScreenHasRefreshed;
    ::ll::TypedStorage<1, 1, bool> mRealmDescriptionEdited;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlatformMultiplayerRestrictions>> mPlatformMultiplayerRestrictions;
    ::ll::TypedStorage<8, 8, ::IContentManager&> mContentManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DlcUIWrapper>> mDlcUIWrapper;
    ::ll::TypedStorage<8, 8, ::Realms::ContentService&> mContentService;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IContentManagerContext>> mContentManagerContext;
    ::ll::TypedStorage<8, 8, ::MultiplayerLockState> mMultiplayerState;
    ::ll::TypedStorage<8, 8, ::PackManagerContentSource*> mRealmContentSource;
    ::ll::TypedStorage<8, 24, std::string> mInitialPackId;
    ::ll::TypedStorage<8, 8, ulong> mLoadedItemsCount;
    ::ll::TypedStorage<1, 3, ::RealmsSettingsScreenController::SaveStatusTracker> mSaveStatusTracker;
    ::ll::TypedStorage<8, 24, std::string> mNewSlotWorldName;
    ::ll::TypedStorage<8, 64, ::Realms::WorldBackupList> mWorldBackupList;
    ::ll::TypedStorage<1, 1, bool> mDidWorldBackupListReceiveNetworkError;
    ::ll::TypedStorage<1, 1, bool> mHasLoadedWorldBackupList;
    ::ll::TypedStorage<1, 1, bool> mHasLoadedActiveWorldSize;
    ::ll::TypedStorage<1, 1, bool> mDidFetchActiveWorldSizeReceiveError;
    ::ll::TypedStorage<4, 4, float> mStorageTotal;
    ::ll::TypedStorage<4, 4, float> mStorageUsed;
    ::ll::TypedStorage<8, 8, long> mActiveWorldSizeBytes;
    ::ll::TypedStorage<8, 24, std::vector<bool>> mManualSavesToggleStates;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mBackupIdsToOverwrite;
    ::ll::TypedStorage<4, 4, int> mActiveSavesTabIndex;
    ::ll::TypedStorage<4, 4, int> mSelectedSaveIndex;
    ::ll::TypedStorage<8, 24, std::string> mSelectedBackupId;
    ::ll::TypedStorage<4, 4, ::RealmsSettingsScreenController::RealmsSaveAction> mLastSaveAction;
    ::ll::TypedStorage<4, 8, std::optional<RealmsSettingsScreenController::RealmsSaveAction>> mSaveAction;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mBackupsToReplace;
    ::ll::TypedStorage<8, 24, std::string> mLastFocusIdBeforeModalOpen;
    ::ll::TypedStorage<1, 1, bool> mIsFetchingInviteLinkInfo;
    ::ll::TypedStorage<1, 1, bool> mHasInviteLinkInfoErrored;
    ::ll::TypedStorage<1, 1, bool> mIsPostingInviteLink;
    ::ll::TypedStorage<8, 24, std::vector<Realms::InviteLink>> mInviteLinks;
    ::ll::TypedStorage<1, 1, bool> mRefetchInviteLinksOnOpen;
    ::ll::TypedStorage<1, 1, bool> mActiveDropdown;
    ::ll::TypedStorage<4, 4, int> mRegionSelectedIndex;
    ::ll::TypedStorage<8, 24, std::vector<Realms::ServerRegion>> mRegionData;
    ::ll::TypedStorage<1, 1, bool> mIsFetchingPreferredRegions;
    ::ll::TypedStorage<1, 1, bool> mHasPreferredRegionsErrored;
    ::ll::TypedStorage<8, 208, ::RealmsSettingsScreenController::RealmsVersionState> mRealmsVersionState;
    ::ll::TypedStorage<8, 24, std::vector<RealmsSettingsScreenController::DelayedStandardModalScreenData>> mDelayedStandardModalPopups;
    ::ll::TypedStorage<4, 4, int> mPlayerSleepPercentInt;
    ::ll::TypedStorage<8, 24, std::string> mRespawnRadiusString;
    ::ll::TypedStorage<8, 24, std::string> mRandomTickSpeedString;
    ::ll::UntypedStorage<8, 168> mGameRules;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsSettingsScreenController& operator=(RealmsSettingsScreenController const&);
    RealmsSettingsScreenController(RealmsSettingsScreenController const&);
    RealmsSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsSettingsScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void onCreation();

    virtual std::string getAdditionalScreenInfo() const;

    virtual void addEventProperties(std::unordered_map<std::string, std::string>&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    RealmsSettingsScreenController(std::shared_ptr<MainMenuScreenModel>, ::Realms::World const&, std::string const&);

    MCNAPI void _addContentToBeAppliedAndUploadIfNeeded(
        std::vector<std::shared_ptr<PackContentItem>>,
        std::shared_ptr<std::vector<Realms::Content>>,
        int,
        std::function<void(std::vector<Realms::Content>)>,
        std::function<void(std::vector<std::shared_ptr<PackContentItem>>, int)>
    );

    MCNAPI void _applyPacks(std::function<void()>);

    MCNAPI bool _canChangeCheatGameRules() const;

    MCNAPI void _displayFreeUpSpacePopup();

    MCNAPI void _displayModalPopup(
        std::string const&,
        std::string const&,
        std::function<void(ModalScreenButtonId)>,
        std::string const&,
        std::string const&,
        std::string const&,
        ::ModalScreenButtonMode,
        std::string const&
    );

    MCNAPI void _downloadMostRecentBackup();

    MCNAPI void _downloadRealmsWorld(ulong, std::string const&, std::string const&, bool);

    MCNAPI void _fetchActiveWorldSize();

    MCNAPI void _fetchAppliedContent();

    MCNAPI void _fetchInviteLinks();

    MCNAPI void _fetchWorldBackupList();

    MCNAPI bool _hasClubInfoChanged() const;

    MCNAPI bool _hasGameRulesChanged();

    MCNAPI bool _hasSingleGameRuleChanged(::GameRuleId const&);

    MCNAPI bool _hasSlotInfoChanged();

    MCNAPI bool _hasWorldInfoChanged();

    MCNAPI bool _isStoreMismatch() const;

    MCNAPI void _openCloseRealm(bool);

    MCNAPI void _querySubscriptionInfo();

    MCNAPI void _refreshWorldInfo(bool);

    MCNAPI void _registerBindings();

    MCNAPI void _registerEventHandlers();

    MCNAPI void _renewRealmHandler();

    MCNAPI void _saveAutoRealmWorldBackup();

    MCNAPI void _saveRealmWorldBackup();

    MCNAPI void _saveSettings(bool, std::function<void(bool)>);

    MCNAPI void _setUpCallbacksBooleanGameRuleSettings(
        std::vector<std::pair<std::string, GameRuleId>> const&,
        std::function<bool()>
    );

    MCNAPI void _showErrorPopup(std::string, std::string, std::function<void(bool)>);

    MCNAPI void _showErrorPopupAndExitScreenAfterDismissed(std::string, std::string);

    MCNAPI void _showSuccessPopup();

    MCNAPI void _updateRealmBranchConfig(std::string const&);

    MCNAPI void _updateVersionsModel(std::string const&, bool);

    MCNAPI void showGeneralErrorPopupAndExitScreenAfterDismissed();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string _getDateAsFormattedStringForBackupByIndex(std::vector<Realms::WorldBackup> const&, int);

    MCNAPI static std::string _getGameServerVersionForBackupByIndex(std::vector<Realms::WorldBackup> const&, int);

    MCNAPI static std::string _getPacksListTextForBackupByIndex(std::vector<Realms::WorldBackup> const&, int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& DEFAULT_SAVES_TAB_FOCUS();

    MCNAPI static std::string const& SAVES_BUTTON_FOCUS_CONTROL();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>, ::Realms::World const&, std::string const&);
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

    MCNAPI std::string $getAdditionalScreenInfo() const;

    MCNAPI void $addEventProperties(std::unordered_map<std::string, std::string>&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
