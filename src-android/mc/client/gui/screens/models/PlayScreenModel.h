#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/LegacyWorldConversionManager.h"
#include "mc/client/gui/screens/models/MainMenuScreenModel.h"
#include "mc/client/gui/screens/models/PlayScreenDefaultTab.h"
#include "mc/client/gui/screens/models/WorldType.h"
#include "mc/client/gui/screens/models/interface/IWorldsProvider.h"
#include "mc/client/legacy/ImportStatus.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/network/realms/World.h"
#include "mc/client/world/LegacyWorldInfo.h"
#include "mc/client/world/LocalWorldInfo.h"
#include "mc/client/world/NetworkWorldInfo.h"
#include "mc/client/world/NetworkWorldType.h"
#include "mc/client/world/RealmsWorldInfo.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/Result.h"
#include "mc/util/CallbackToken.h"
#include "mc/util/UploadState.h"
#include "mc/world/WorldTemplateInfo.h"
#include "mc/world/actor/player/LoadingState.h"
#include "mc/world/level/LevelListCacheObserver.h"

// auto generated forward declare list
// clang-format off
class FilePickerSettings;
class ILevelListCache;
class IMinecraftEventing;
class LevelSettings;
struct ExternalServer;
struct ImportResult;
struct MinecraftScreenModelContext;
struct PingedCompatibleServer;
namespace Core { class Path; }
namespace Legacy { class WorldImporter; }
namespace Legacy { class WorldProcessRequest; }
namespace MSGraph::Models { struct DriveItemCollection; }
namespace MSGraph::Models { struct GraphError; }
namespace Social { class MultiplayerGameInfo; }
// clang-format on

class PlayScreenModel : public ::MainMenuScreenModel, public ::IWorldsProvider {
public:
    // PlayScreenModel inner types declare
    // clang-format off
    class PlayScreenLevelListCacheObserver;
    struct LiveServer;
    // clang-format on

    // PlayScreenModel inner types define
    class PlayScreenLevelListCacheObserver : public ::LevelListCacheObserver {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::PlayScreenModel&> mModel;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlayScreenLevelListCacheObserver& operator=(PlayScreenLevelListCacheObserver const&);
        PlayScreenLevelListCacheObserver(PlayScreenLevelListCacheObserver const&);
        PlayScreenLevelListCacheObserver();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~PlayScreenLevelListCacheObserver();

        virtual void onLevelAdded(std::string const&, ::LevelListCacheObserver::LevelAddedType);

        virtual void onLevelUpdated(std::string const&);

        virtual void onLevelDeleted(std::string const&);

        virtual void onStorageChanged();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $onLevelAdded(std::string const&, ::LevelListCacheObserver::LevelAddedType);

        MCNAPI void $onLevelUpdated(std::string const&);

        MCNAPI void $onLevelDeleted(std::string const&);

        MCNAPI void $onStorageChanged();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct LiveServer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::unique_ptr<Social::MultiplayerGameInfo>> server;
        ::ll::TypedStorage<1, 1, bool>                                         found;
        ::ll::TypedStorage<8, 8, double>                                       lastFoundTime;
        ::ll::TypedStorage<1, 1, bool>                                         dead;
        // NOLINTEND

    public:
        // prevent constructor by default
        LiveServer();
    };

    using RealmsWorldList = std::vector<Realms::World>;

    using PlayerCountMap = std::map<Realms::RealmId, int>;

    using RealmFullMap = std::map<Realms::RealmId, bool>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<std::pair<const NetworkWorldInfo, NetworkWorldType>>> mLastNetworkSelection;
    ::ll::TypedStorage<1, 1, bool> mIsDirty;
    ::ll::TypedStorage<8, 24, std::vector<LocalWorldInfo>> mLocalWorldList;
    ::ll::TypedStorage<8, 24, std::vector<LocalWorldInfo>> mBetaRetailLocalWorldList;
    ::ll::TypedStorage<8, 24, std::vector<WorldTemplateInfo>> mWorldTemplates;
    ::ll::TypedStorage<8, 24, std::vector<NetworkWorldInfo>> mFriendsNetworkWorldList;
    ::ll::TypedStorage<8, 24, std::vector<NetworkWorldInfo>> mCrossPlatformFriendsNetworkWorldList;
    ::ll::TypedStorage<8, 24, std::vector<NetworkWorldInfo>> mLANNetworkWorldList;
    ::ll::TypedStorage<8, 24, std::vector<NetworkWorldInfo>> mServerNetworkWorldList;
    ::ll::TypedStorage<8, 24, std::vector<RealmsWorldInfo>> mRealmWorldList;
    ::ll::TypedStorage<8, 24, std::vector<RealmsWorldInfo>> mUnpairedParentRealmWorldList;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<NetworkWorldInfo>>> mThirdPartyServerWorldList;
    ::ll::TypedStorage<8, 24, std::vector<LegacyWorldInfo>> mLegacyWorldList;
    ::ll::TypedStorage<8, 24, std::vector<LegacyWorldInfo>> mBetaRetailLegacyWorldList;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ResourceLocation>> mNetworkedFriendsGamerpicMap;
    ::ll::TypedStorage<8, 72, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>[9]> mUpdateTimes;
    ::ll::TypedStorage<8, 24, std::vector<Realms::World>> mWorlds;
    ::ll::TypedStorage<1, 1, bool> mWorldsFetched;
    ::ll::TypedStorage<8, 24, std::vector<Realms::World>> mUnpairedParentWorlds;
    ::ll::TypedStorage<1, 1, bool> mUnpairedWorldsFetched;
    ::ll::TypedStorage<8, 24, std::map<Realms::RealmId, int>> mUnreadCounts;
    ::ll::TypedStorage<4, 4, int> mRealmWorldPartitionIndex;
    ::ll::TypedStorage<4, 24, std::array<int, 6>> mSeenUnreadPosts;
    ::ll::TypedStorage<1, 1, bool> mLocalWorldsPopulated;
    ::ll::TypedStorage<1, 1, bool> mHasPendingInvites;
    ::ll::TypedStorage<4, 4, int> mPendingInviteCount;
    ::ll::TypedStorage<1, 1, bool> mFetchingInvites;
    ::ll::TypedStorage<1, 1, bool> mFetchingLegacyWorldsInProgress;
    ::ll::TypedStorage<1, 1, bool> mLegacyWorldsFetched;
    ::ll::UntypedStorage<1, 9> mFoundLegacyWorlds;
    ::ll::UntypedStorage<8, 112> mLegacyWorldConversionManager;
    ::ll::TypedStorage<8, 24, std::vector<LocalWorldInfo>> mEduCloudWorlds;
    ::ll::TypedStorage<1, 1, bool> mFetchingEduCloudWorldsInProgress;
    ::ll::TypedStorage<1, 1, bool> mEduCloudWorldsFetched;
    ::ll::TypedStorage<1, 1, bool> mEduCloudWorldsPopulated;
    ::ll::TypedStorage<1, 1, bool> mEduCloudFetchFailed;
    ::ll::TypedStorage<4, 4, int> mEduCloudWorldsFetchRetriesRemaining;
    ::ll::TypedStorage<8, 24, std::string> mEduCloudWorldsFetchNextLinkUrl;
    ::ll::UntypedStorage<8, 16> mEduCloudWorldsHandle;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mFetchStartTimestamp;
    ::ll::TypedStorage<8, 24, std::string> mFetchCorrelationId;
    ::ll::TypedStorage<1, 1, bool> mFetchingPlayerCounts;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastRealmsUpdate;
    ::ll::TypedStorage<1, 1, bool> mJoiningRealm;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastTryJoin;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mRetryJoinInterval;
    ::ll::TypedStorage<4, 4, int> mRetryTime;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPendingInviteCountSubscriber;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Legacy::WorldImporter>> mLegacyWorldImporter;
    ::ll::TypedStorage<8, 16, ::CallbackToken> mRetrieveCallbackToken;
    ::ll::TypedStorage<8, 16, ::CallbackToken> mImportCallbackToken;
    ::ll::TypedStorage<1, 1, bool> mFirstRealmsFetchComplete;
    ::ll::TypedStorage<1, 1, bool> mFirstUnpairedParentRealmsFetchComplete;
    ::ll::TypedStorage<4, 4, ::Realms::GenericStatus> mRealmsStatus;
    ::ll::TypedStorage<4, 4, ::Realms::GenericStatus> mUnpairedParentRealmsStatus;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastPlayerCountUpdate;
    ::ll::UntypedStorage<8, 24> mLevelListCacheObserver;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mTrialModeUpdateSubscription;
    ::ll::TypedStorage<1, 1, bool> mAreTrialWorldsHidden;
    ::ll::TypedStorage<1, 1, bool> mIsEditScreenLoading;
    ::ll::TypedStorage<1, 1, bool> mIsLoadingAdditionalRealmInfo;
    ::ll::TypedStorage<4, 4, int> mNumRealmsWorldsToQuery;
    ::ll::TypedStorage<8, 24, std::set<Realms::RealmId>> mWorldsWithDetailedInfo;
    ::ll::UntypedStorage<1, 16> initRequestPendingInvites;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PlayScreenModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayScreenModel();

    virtual bool isDirty() const;

    virtual ::IMinecraftEventing& getMinecraftEventing() const;

    virtual int getWorldCount(::WorldType, ::NetworkWorldType) const;

    virtual ::LocalWorldInfo const* getLocalWorldAtIndex(int const) const;

    virtual ::LocalWorldInfo const* getLocalWorldById(std::string const&) const;

    virtual bool refresh(::WorldType);

    virtual void startLocalWorld(::LocalWorldInfo, ::LevelSettings const*);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayScreenModel(::MinecraftScreenModelContext);

    MCNAPI void _navigateToEditWorldScreen(::LocalWorldInfo const&);

    MCNAPI void _populateAdditionalRealmsWorldsInfo();

    MCNAPI void _populateLocalWorldsFromStorageSource(
        ::ILevelListCache&,
        std::vector<LocalWorldInfo>&,
        std::vector<LocalWorldInfo>&,
        bool,
        bool
    );

    MCNAPI void _populateNetworkWorlds();

    MCNAPI void _populateRealmsWorldsInternal(bool);

    MCNAPI void _remove3PServersMismatchingEditorMode();

    MCNAPI void _sortLocalWorlds(std::vector<LocalWorldInfo>&);

    MCNAPI void _sortRealmsWorlds(std::string const, std::vector<Realms::World>&);

    MCNAPI void _start3PNetworkWorld(::NetworkWorldInfo&);

    MCNAPI void _startFriendNetworkWorld(::NetworkWorldInfo const&);

    MCNAPI void _startRemoteNetworkWorld(::NetworkWorldInfo const&);

    MCNAPI bool areExternalAndRemoteServerSame(::ExternalServer&, ::PingedCompatibleServer);

    MCNAPI void cancelImportCallbackToken();

    MCNAPI void clearUnreadCount(::Realms::RealmId);

    MCNAPI void convertLegacyWorld(
        ::LegacyWorldInfo,
        std::string const&,
        std::function<void(Legacy::ImportStatus, float, std::shared_ptr<ImportResult>)>
    );

    MCNAPI ::Core::PathBuffer<std::string> const createUniquePathForWorld() const;

    MCNAPI void deleteLegacyWorld(uint const);

    MCNAPI void fetchEduCloudWorlds();

    MCNAPI void fetchRealmsPlayerCounts();

    MCNAPI void fetchRealmsWorldsForPlayScreen();

    MCNAPI void fetchThirdPartyServerWorlds(bool);

    MCNAPI ::WorldTemplateInfo const* findWorldTemplateAtIndex(int);

    MCNAPI void fireClubsOpenFeedScreenEvent(::Realms::RealmId const, std::string const&, int);

    MCNAPI void fireIgnoredNotificationsEvent(
        ::IMinecraftEventing::IgnoredNotificationsType,
        int,
        std::set<IMinecraftEventing::IgnoredNotificationSource>
    );

    MCNAPI void forceFetchWorld();

    MCNAPI std::shared_ptr<FilePickerSettings> generateFilePickerSettingsForImport();

    MCNAPI ::LegacyWorldInfo* getBetaRetailLegacyWorldAtIndex(int const);

    MCNAPI ::LocalWorldInfo* getBetaRetailLocalWorldAtIndex(int const);

    MCNAPI bool getEduCloudFetchFailed() const;

    MCNAPI bool getEduCloudWorldsFetched() const;

    MCNAPI bool getEduCloudWorldsPopulated() const;

    MCNAPI bool getFetchingThirdPartyWorldsInProgress() const;

    MCNAPI ::Core::Path const& getIconPathOfCrossPlatformFriendWorld(int) const;

    MCNAPI ::Core::Path const& getIconPathOfFriendWorld(int) const;

    MCNAPI
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>&
        getLastPlayerCountUpdate();

    MCNAPI ::LegacyWorldInfo* getLegacyWorldAtIndex(int const);

    MCNAPI float getLegacyWorldConversionProgress() const;

    MCNAPI ::LoadingState getLegacyWorldConversionState() const;

    MCNAPI bool getLegacyWorldsFetched() const;

    MCNAPI std::vector<ResourceLocation> getLoadingPacks(::PackType) const;

    MCNAPI ::LocalWorldInfo* getLocalWorldAtIndex(int const);

    MCNAPI ::LocalWorldInfo* getLocalWorldById(std::string const&);

    MCNAPI bool getLocalWorldsPopulated() const;

    MCNAPI ::ResourceLocation const& getNetworkFriendsGamerpic(std::string const&);

    MCNAPI ::NetworkWorldInfo* getNetworkWorldAtIndex(int, ::NetworkWorldType);

    MCNAPI int getOwnedActiveUnpairedParentRealmWorldCount() const;

    MCNAPI int getPendingInviteCount() const;

    MCNAPI ::RealmsWorldInfo const* getRealmWorldAtIndex(int) const;

    MCNAPI int getRealmWorldsPartitionIndex() const;

    MCNAPI bool getRealmsFirstFetchComplete() const;

    MCNAPI ::Realms::GenericStatus getRealmsStatus() const;

    MCNAPI int getSeenUnreadPostsCount(::PlayScreenDefaultTab);

    MCNAPI int getUnreadCount(::Realms::RealmId) const;

    MCNAPI ::WorldTemplateInfo const& getWorldTemplateAtIndex(int) const;

    MCNAPI ulong const getWorldTemplateSize() const;

    MCNAPI std::vector<Realms::World>& getWorlds();

    MCNAPI void handleLegacyWorldConversionComplete(::ImportResult const&);

    MCNAPI bool hasLocalWorldWithId(std::string const&);

    MCNAPI void initLegacyWorldImporter();

    MCNAPI void initializeRealmsWorlds();

    MCNAPI bool isEditorPlaytestRoundtrip() const;

    MCNAPI bool isLocalWorldRealmsPlus(::LocalWorldInfo const&);

    MCNAPI void markLocalLevelDirty(std::string const&);

    MCNAPI void navigateToAddEditExternalScreen(int);

    MCNAPI void navigateToEditWorldScreen(int, std::function<void(const Core::Path&)>);

    MCNAPI void navigateToEditWorldScreen(std::string const&, std::function<void(const Core::Path&)>);

    MCNAPI void navigateToEditWorldScreen(::LocalWorldInfo*, std::function<void(const Core::Path&)>);

    MCNAPI void navigateToRealmsSharingLauncherScreen(std::string const&);

    MCNAPI void navigateToWorldSyncModalScreen(
        std::string const&,
        std::function<void(nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>)>
    );

    MCNAPI ::LocalWorldInfo refreshLocalWorldInfo(::LocalWorldInfo const&);

    MCNAPI void repopulateLocalWorlds();

    MCNAPI void resetEduCloudFetchStatus();

    MCNAPI void resetUpdateIntervals();

    MCNAPI void resetUpdateTimer(::WorldType);

    MCNAPI void setForceUpdate();

    MCNAPI void setLegacyWorldConversionProgress(float);

    MCNAPI void setPlayScreenDefaultTab(::PlayScreenDefaultTab);

    MCNAPI void setSeenUnreadPostsCount(::PlayScreenDefaultTab, int);

    MCNAPI void startNetworkWorld(::NetworkWorldInfo, ::NetworkWorldType);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToBuildGameList();

    MCNAPI bool supportsEduCloudWorlds() const;

    MCNAPI void triggerMultiplayerGameRefresh(bool const);

    MCNAPI void tryAcquireMissingDlc(std::string const&, std::function<void(bool)>);

    MCNAPI void updateWorldTimestamp(::NetworkWorldInfo const&);

    MCNAPI void
    uploadLocalWorldFileAtIndex(std::string const&, int const, int, std::function<void(UploadState, Realms::World)>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MinecraftScreenModelContext);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isDirty() const;

    MCNAPI ::IMinecraftEventing& $getMinecraftEventing() const;

    MCNAPI int $getWorldCount(::WorldType, ::NetworkWorldType) const;

    MCNAPI ::LocalWorldInfo const* $getLocalWorldAtIndex(int const) const;

    MCNAPI ::LocalWorldInfo const* $getLocalWorldById(std::string const&) const;

    MCNAPI bool $refresh(::WorldType);

    MCNAPI void $startLocalWorld(::LocalWorldInfo, ::LevelSettings const*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
