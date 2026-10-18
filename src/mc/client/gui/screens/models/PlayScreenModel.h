#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/LegacyWorldConversionManager.h"
#include "mc/client/gui/screens/models/MainMenuScreenModel.h"
#include "mc/client/gui/screens/models/WorldType.h"
#include "mc/client/gui/screens/models/interface/IWorldsProvider.h"
#include "mc/client/legacy/ImportStatus.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/world/NetworkWorldType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/Result.h"
#include "mc/util/CallbackToken.h"
#include "mc/util/UploadState.h"
#include "mc/world/level/LevelListCacheObserver.h"

// auto generated forward declare list
// clang-format off
class FilePickerSettings;
class ILevelListCache;
class IMinecraftEventing;
class LevelSettings;
class ResourceLocation;
struct ExternalServer;
struct ImportResult;
struct LegacyWorldInfo;
struct LocalWorldInfo;
struct MinecraftScreenModelContext;
struct NetworkWorldInfo;
struct PingedCompatibleServer;
struct RealmsWorldInfo;
struct WorldTemplateInfo;
namespace Core { class Path; }
namespace Legacy { class WorldImporter; }
namespace MSGraph::Models { struct DriveItemCollection; }
namespace MSGraph::Models { struct GraphError; }
namespace Realms { struct World; }
namespace Social { class MultiplayerGameInfo; }
// clang-format on

class PlayScreenModel : public ::MainMenuScreenModel, public ::IWorldsProvider {
#else // @header-generator platform
class PlayScreenModel {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // PlayScreenModel inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    class PlayScreenLevelListCacheObserver;
#else // @header-generator platform
#endif // @header-generator platform
    struct LiveServer;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class PlayScreenLevelListCacheObserver;
#endif // @header-generator platform
    // clang-format on

    // PlayScreenModel inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    class PlayScreenLevelListCacheObserver : public ::LevelListCacheObserver {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::PlayScreenModel&> mModel;
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct LiveServer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Social::MultiplayerGameInfo>> server;
        ::ll::TypedStorage<1, 1, bool>                                             found;
        ::ll::TypedStorage<8, 8, double>                                           lastFoundTime;
        ::ll::TypedStorage<1, 1, bool>                                             dead;
        // NOLINTEND
    };
#else // @header-generator platform
    struct LiveServer {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
        virtual void
        onLevelAdded(::std::string const& levelId, ::LevelListCacheObserver::LevelAddedType type) /*override*/;

        virtual void onLevelUpdated(::std::string const& levelId) /*override*/;

        virtual void onLevelDeleted(::std::string const& levelId) /*override*/;

        virtual void onStorageChanged() /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI void $onLevelAdded(::std::string const& levelId, ::LevelListCacheObserver::LevelAddedType type);

        MCAPI void $onLevelUpdated(::std::string const& levelId);

        MCAPI void $onLevelDeleted(::std::string const& levelId);

        MCAPI void $onStorageChanged();
        // NOLINTEND
    };

    using PlayerCountMap = ::std::map<::Realms::RealmId, int>;

    using RealmFullMap = ::std::map<::Realms::RealmId, bool>;

    using RealmsWorldList = ::std::vector<::Realms::World>;

    using StashedNetworkSelection = ::std::pair<::NetworkWorldInfo const, ::NetworkWorldType>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::pair<::NetworkWorldInfo const, ::NetworkWorldType>>>
                                                                  mLastNetworkSelection;
    ::ll::TypedStorage<1, 1, bool>                                mIsDirty;
    ::ll::TypedStorage<8, 24, ::std::vector<::LocalWorldInfo>>    mLocalWorldList;
    ::ll::TypedStorage<8, 24, ::std::vector<::LocalWorldInfo>>    mBetaRetailLocalWorldList;
    ::ll::TypedStorage<8, 24, ::std::vector<::WorldTemplateInfo>> mWorldTemplates;
    ::ll::TypedStorage<8, 24, ::std::vector<::NetworkWorldInfo>>  mFriendsNetworkWorldList;
    ::ll::TypedStorage<8, 24, ::std::vector<::NetworkWorldInfo>>  mCrossPlatformFriendsNetworkWorldList;
    ::ll::TypedStorage<8, 24, ::std::vector<::NetworkWorldInfo>>  mLANNetworkWorldList;
    ::ll::TypedStorage<8, 24, ::std::vector<::NetworkWorldInfo>>  mServerNetworkWorldList;
    ::ll::TypedStorage<8, 24, ::std::vector<::RealmsWorldInfo>>   mRealmWorldList;
    ::ll::TypedStorage<8, 24, ::std::vector<::RealmsWorldInfo>>   mUnpairedParentRealmWorldList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::NetworkWorldInfo>>>    mThirdPartyServerWorldList;
    ::ll::TypedStorage<8, 24, ::std::vector<::LegacyWorldInfo>>                        mLegacyWorldList;
    ::ll::TypedStorage<8, 24, ::std::vector<::LegacyWorldInfo>>                        mBetaRetailLegacyWorldList;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::ResourceLocation>> mNetworkedFriendsGamerpicMap;
    ::ll::TypedStorage<8, 72, ::std::chrono::steady_clock::time_point[9]>              mUpdateTimes;
    ::ll::TypedStorage<8, 24, ::std::vector<::Realms::World>>                          mWorlds;
    ::ll::TypedStorage<1, 1, bool>                                                     mWorldsFetched;
    ::ll::TypedStorage<8, 24, ::std::vector<::Realms::World>>                          mUnpairedParentWorlds;
    ::ll::TypedStorage<1, 1, bool>                                                     mUnpairedWorldsFetched;
    ::ll::TypedStorage<8, 16, ::std::map<::Realms::RealmId, int>>                      mUnreadCounts;
    ::ll::TypedStorage<4, 4, int>                                                      mRealmWorldPartitionIndex;
    ::ll::TypedStorage<4, 24, ::std::array<int, 6>>                                    mSeenUnreadPosts;
    ::ll::TypedStorage<1, 1, bool>                                                     mLocalWorldsPopulated;
    ::ll::TypedStorage<1, 1, bool>                                                     mHasPendingInvites;
    ::ll::TypedStorage<4, 4, int>                                                      mPendingInviteCount;
    ::ll::TypedStorage<1, 1, bool>                                                     mFetchingInvites;
    ::ll::TypedStorage<1, 1, bool>                                                     mFetchingLegacyWorldsInProgress;
    ::ll::TypedStorage<1, 1, bool>                                                     mLegacyWorldsFetched;
    ::ll::TypedStorage<1, 1, bool>                                                     mFoundLegacyWorlds;
    ::ll::TypedStorage<8, 128, ::LegacyWorldConversionManager>                         mLegacyWorldConversionManager;
    ::ll::TypedStorage<8, 24, ::std::vector<::LocalWorldInfo>>                         mEduCloudWorlds;
    ::ll::TypedStorage<1, 1, bool>           mFetchingEduCloudWorldsInProgress;
    ::ll::TypedStorage<1, 1, bool>           mEduCloudWorldsFetched;
    ::ll::TypedStorage<1, 1, bool>           mEduCloudWorldsPopulated;
    ::ll::TypedStorage<1, 1, bool>           mEduCloudFetchFailed;
    ::ll::TypedStorage<4, 4, int>            mEduCloudWorldsFetchRetriesRemaining;
    ::ll::TypedStorage<8, 32, ::std::string> mEduCloudWorldsFetchNextLinkUrl;
    ::ll::TypedStorage<
        8,
        16,
        ::Bedrock::Threading::Async<
            ::Bedrock::Result<::MSGraph::Models::DriveItemCollection, ::MSGraph::Models::GraphError>>>
                                                                         mEduCloudWorldsHandle;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>    mFetchStartTimestamp;
    ::ll::TypedStorage<8, 32, ::std::string>                             mFetchCorrelationId;
    ::ll::TypedStorage<1, 1, bool>                                       mFetchingPlayerCounts;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>    mLastRealmsUpdate;
    ::ll::TypedStorage<1, 1, bool>                                       mJoiningRealm;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>    mLastTryJoin;
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds>                     mRetryJoinInterval;
    ::ll::TypedStorage<4, 4, int>                                        mRetryTime;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mPendingInviteCountSubscriber;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Legacy::WorldImporter>> mLegacyWorldImporter;
    ::ll::TypedStorage<8, 16, ::CallbackToken>                           mRetrieveCallbackToken;
    ::ll::TypedStorage<8, 16, ::CallbackToken>                           mImportCallbackToken;
    ::ll::TypedStorage<1, 1, bool>                                       mFirstRealmsFetchComplete;
    ::ll::TypedStorage<1, 1, bool>                                       mFirstUnpairedParentRealmsFetchComplete;
    ::ll::TypedStorage<4, 4, ::Realms::GenericStatus>                    mRealmsStatus;
    ::ll::TypedStorage<4, 4, ::Realms::GenericStatus>                    mUnpairedParentRealmsStatus;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>    mLastPlayerCountUpdate;
    ::ll::TypedStorage<8, 24, ::PlayScreenModel::PlayScreenLevelListCacheObserver> mLevelListCacheObserver;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                     mTrialModeUpdateSubscription;
    ::ll::TypedStorage<1, 1, bool>                                                 mAreTrialWorldsHidden;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsEditScreenLoading;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsLoadingAdditionalRealmInfo;
    ::ll::TypedStorage<4, 4, int>                                                  mNumRealmsWorldsToQuery;
    ::ll::TypedStorage<8, 16, ::std::set<::Realms::RealmId>>                       mWorldsWithDetailedInfo;
    ::ll::TypedStorage<1, 1, bool>                                                 initRequestPendingInvites;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayScreenModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayScreenModel() /*override*/ = default;

    virtual int getWorldCount(::WorldType worldType, ::NetworkWorldType networkType) const /*override*/;

    virtual ::LocalWorldInfo const* getLocalWorldAtIndex(int const index) const /*override*/;

    virtual ::LocalWorldInfo const* getLocalWorldById(::std::string const& id) const /*override*/;

    virtual bool refresh(::WorldType tabType) /*override*/;

    virtual void startLocalWorld(::LocalWorldInfo worldInfo, ::LevelSettings const* settings) /*override*/;

    virtual bool isDirty() const /*override*/;

    virtual ::IMinecraftEventing& getMinecraftEventing() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PlayScreenModel(::MinecraftScreenModelContext context);

    MCAPI void _fetchTrialAvailability();

    MCAPI void _navigateToEditWorldScreen(::LocalWorldInfo const& info);

    MCAPI void _populateAdditionalRealmsWorldsInfo();

    MCAPI void _populateLocalWorldsFromStorageSource(
        ::ILevelListCache&               levelListCache,
        ::std::vector<::LocalWorldInfo>& localWorlds,
        ::std::vector<::LocalWorldInfo>& betaRetailWorlds,
        bool                             restrictTrial,
        bool                             fireTelemetry
    );

    MCAPI void _populateNetworkWorlds();

    MCAPI void _populateRealmsWorldsInternal(bool ofUnpairedParentRealms);

    MCAPI void _remove3PServersMismatchingEditorMode();

    MCAPI void _requestPendingInviteCount();

    MCAPI void _sortRealmsWorlds(::std::string const currentUserXUID, ::std::vector<::Realms::World>& worlds);

    MCAPI void _start3PNetworkWorld(::NetworkWorldInfo& world);

    MCAPI void _startFriendNetworkWorld(::NetworkWorldInfo const& world);

    MCAPI void _startRemoteNetworkWorld(::NetworkWorldInfo const& world);

    MCAPI bool areExternalAndRemoteServerSame(::ExternalServer& externalServer, ::PingedCompatibleServer remoteServer);

    MCAPI void convertLegacyWorld(
        ::LegacyWorldInfo                                                                       worldInfo,
        ::std::string const&                                                                    newWorldDir,
        ::std::function<void(::Legacy::ImportStatus, float, ::std::shared_ptr<::ImportResult>)> callback
    );

    MCAPI ::Core::PathBuffer<::std::string> const createUniquePathForWorld() const;

    MCAPI void deleteLegacyWorld(uint legacyWorldIndex);

    MCAPI void fetchEduCloudWorlds();

    MCAPI void fetchRealmsPlayerCounts();

    MCAPI void fetchRealmsWorldsForPlayScreen();

    MCAPI void fetchThirdPartyServerWorlds(bool forceFetch);

    MCAPI void fireIgnoredNotificationsEvent(
        ::IMinecraftEventing::IgnoredNotificationsType              notificationType,
        int                                                         notificationCount,
        ::std::set<::IMinecraftEventing::IgnoredNotificationSource> notificationSources
    );

    MCAPI ::std::shared_ptr<::FilePickerSettings> generateFilePickerSettingsForImport();

    MCAPI bool getFetchingThirdPartyWorldsInProgress() const;

    MCAPI ::std::vector<::ResourceLocation> getLoadingPacks(::PackType type) const;

    MCAPI void handleLegacyWorldConversionComplete(::ImportResult const& result);

    MCAPI bool hasLocalWorldWithId(::std::string const& levelId);

    MCAPI void initLegacyWorldImporter();

    MCAPI void initializeRealmsWorlds();

    MCAPI bool isEditorPlaytestRoundtrip() const;

    MCAPI bool isLocalWorldRealmsPlus(::LocalWorldInfo const& world);

    MCAPI void navigateToAddEditExternalScreen(int id);

    MCAPI void navigateToEditWorldScreen(int index, ::std::function<void(::Core::Path const&)> onErrorCallback);

    MCAPI void
    navigateToEditWorldScreen(::LocalWorldInfo* info, ::std::function<void(::Core::Path const&)> onErrorCallback);

    MCAPI void
    navigateToEditWorldScreen(::std::string const& levelId, ::std::function<void(::Core::Path const&)> onErrorCallback);

    MCAPI void navigateToRealmsSharingLauncherScreen(::std::string const& realmsInvite);

    MCAPI void navigateToWorldSyncModalScreen(
        ::std::string const&                                                                     levelId,
        ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)> onCompleteCallback
    );

    MCAPI ::LocalWorldInfo refreshLocalWorldInfo(::LocalWorldInfo const& worldInfo);

    MCAPI void repopulateLocalWorlds();

    MCAPI void startNetworkWorld(::NetworkWorldInfo worldInfo, ::NetworkWorldType worldType);

    MCAPI ::Bedrock::PubSub::Subscription subscribeToBuildGameList();

    MCAPI bool supportsEduCloudWorlds() const;

    MCAPI void triggerMultiplayerGameRefresh(bool tryToReconnect);

    MCAPI void updateWorldTimestamp(::NetworkWorldInfo const& worldInfo);

    MCAPI void uploadLocalWorldFileAtIndex(
        ::std::string const&                                  realmID,
        int                                                   slotIndex,
        int                                                   index,
        ::std::function<void(::UploadState, ::Realms::World)> callbackAfterUpload
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MinecraftScreenModelContext context);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getWorldCount(::WorldType worldType, ::NetworkWorldType networkType) const;

    MCAPI ::LocalWorldInfo const* $getLocalWorldAtIndex(int const index) const;

    MCAPI ::LocalWorldInfo const* $getLocalWorldById(::std::string const& id) const;

    MCAPI bool $refresh(::WorldType tabType);

    MCAPI void $startLocalWorld(::LocalWorldInfo worldInfo, ::LevelSettings const* settings);

    MCAPI bool $isDirty() const;

    MCFOLD ::IMinecraftEventing& $getMinecraftEventing() const;
    // NOLINTEND
#else // @header-generator platform
    class PlayScreenLevelListCacheObserver {};
#endif // @header-generator platform
#endif // @header-generator platform
};
