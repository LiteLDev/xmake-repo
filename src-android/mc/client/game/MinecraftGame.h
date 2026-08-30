#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ExperienceJoinRequestInfo.h"
#include "mc/certificates/identity/edu/CredentialsObserver.h"
#include "mc/certificates/identity/edu/GenericCredentialsEvent.h"
#include "mc/client/game/DeferredTaskCategory.h"
#include "mc/client/game/ExternalWorldTransferActionFunc.h"
#include "mc/client/game/IMinecraftGame.h"
#include "mc/client/game/IMultiPlayerServices.h"
#include "mc/client/game/LoadingScreen.h"
#include "mc/client/game/LocalServerStartupState.h"
#include "mc/client/game/LocalWorldTransferActionFunc.h"
#include "mc/client/game/RealmTransferActionFunc.h"
#include "mc/client/game/SerialWorkList.h"
#include "mc/client/game/StartIntent.h"
#include "mc/client/game/local_server_launcher/ILocalServerLauncherImpl.h"
#include "mc/client/gui/GameConnectionInfoEx.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/oreui/routing/RouterAction.h"
#include "mc/client/gui/screens/OnlineSafetyDialogVisibility.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/options/OptionsObserver.h"
#include "mc/client/renderer/VideoCaptureSessionManager.h"
#include "mc/client/renderer/texture/TextureAtlasStatus.h"
#include "mc/client/resources/PackDownloadManager.h"
#include "mc/client/social/JoinGameStatus.h"
#include "mc/client/social/MultiplayerGameInfo.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/client/util/ScreenshotRecorder.h"
#include "mc/common/App.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/application/LowMemorySeverity.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/OperationMode.h"
#include "mc/deps/core/profiler/BasicStopwatch.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/DeferredTasksManager.h"
#include "mc/deps/core/threading/GraphicsTasksPerfScaler.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ScopeExit.h"
#include "mc/deps/core/utility/ServiceRegistrationToken.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/PointerType.h"
#include "mc/deps/resource_processing/ResourceLoadTelemetryState.h"
#include "mc/entity/gamerefs_entity/AppSystemRegistry.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/events/NetworkType.h"
#include "mc/locale/I18nObserver.h"
#include "mc/network/TransportLayer.h"
#include "mc/platform/MultiplayerLockedContext.h"
#include "mc/platform/UUID.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/resources/ResourcePackListener.h"
#include "mc/sound/MusicRepeatMode.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryIdentity;
class ActorAnimationControllerGroup;
class ActorAnimationGroup;
class ActorResourceDefinitionGroup;
class AppConfigs;
class BlockCullingGroup;
class CachedScenes;
class ChunkSource;
class ClientChunkPerformanceData;
class ClientCommands;
class ClientInstance;
class ClientInstanceEventCoordinator;
class ClientNetworkSystem;
class ClientPackSourceFactory;
class ClubsService;
class CommandListQueue;
class ContentAcquisition;
class ContentCatalogService;
class ContentIdentity;
class ContentLog;
class ContentLogFileEndPoint;
class ContentManager;
class ContentTierManager;
class CubemapBackgroundResources;
class DBStoragePerformanceData;
class DateManager;
class DebugEndPoint;
class DeferredLighting;
class DevConsoleLogger;
class DisplayLoggedErrorManager;
class EDUSystems;
class EcoModeSystem;
class EditorBootstrapper;
class EmoticonManager;
class EntityContext;
class ExternalContentManager;
class FileArchiver;
class FileLoadLock;
class FlightingService;
class FontRepository;
class FrameAnomalyDetector;
class FrameAnomalyDetectorEventing;
class GameModuleClient;
class GameRenderer;
class GatheringManager;
class GenericEntitlementChangeListener;
class GeometryGroup;
class GlobalResourcesCrashRecovery;
class GuiContentLogEndPoint;
class GuiData;
class IApp;
class IClientDimensionExtensions;
class IClientInstance;
class IContentAccessibilityProvider;
class IContentKeyProvider;
class IContentManager;
class IContentTierManager;
class IDataDrivenUIRepository;
class IDlcValidation;
class IEntitlementManager;
class IExternalServerFile;
class IGameModuleApp;
class IGameModuleShared;
class ILevelListCache;
class IMinecraftEventing;
class IOfferRepository;
class IResourcePackRepository;
class ISceneStack;
class ITextBoxController;
class IThirdPartyServerRepository;
class IUIDefRepository;
class IUIRepository;
class ItemRegistry;
class ItemRegistryRef;
class LastLevelInfo;
class LatencyGraphDisplay;
class LayoutService;
class LayoutServiceSystem;
class LevelDbEnv;
class LevelListCache;
class LevelLoader;
class LevelSettings;
class LevelStorageSource;
class LibraryRepository;
class LinkedAssetValidator;
class LocalPlayer;
class MarketplaceServicesManager;
class Minecraft;
class MinecraftGraphics;
class MinecraftInputHandler;
class MinecraftTextBoxController;
class MinecraftUIMeasureStrategy;
class MultiPlayerRequestManager;
class MusicManager;
class NetworkConnectionTypeChangeObserver;
class NetworkSessionOwner;
class NewPlayerSystem;
class OnDestructionCancelResourceLoaders;
class Option;
class OptionRegistry;
class PackManifest;
class PackManifestFactory;
class PackSourceFactory;
class ParticleEffectGroup;
class PersonaRepository;
class PersonaService;
class PixelCalc;
class Player;
class PlayerMessagingService;
class PlayfabBeaconClient;
class ProfanityContext;
class ProfilingConfigManager;
class PushNotificationMessage;
class RayTracingHardwareOptions;
class RayTracingOptions;
class RealmsAPI;
class RenderControllerGroup;
class RepositoryPacks;
class ResetCallbackObject;
class ResourceLoadManager;
class ResourcePackManager;
class ResourcePackRepository;
class ResourcePackStack;
class SaveTransactionManager;
class SceneFactory;
class SceneStackNavigator;
class ScopedCPUBoost;
class SeasonsRenderer;
class ServerInstance;
class ServerInstanceEventCoordinator;
class ServerNetworkHandler;
class ServiceDrivenImageRepository;
class ServicesManager;
class SignalingService;
class SignalingServiceSignInManager;
class SkinRepository;
class SoundEngine;
class StartupStatistics;
class StartupStatisticsWriteCsv;
class StoreCatalogRepository;
class SunsettingManager;
class TaskGroup;
class TextToIconMapper;
class TextToSpeechSystem;
class TextureAtlas;
class TextureShiftManager;
class Timer;
class TreatmentPackDownloadMonitor;
class TrialManager;
class UIEventCoordinator;
class UIMeasureStrategy;
class UriListener;
class Vec3;
class WatchdogTimer;
class WorldTemplateManager;
class WorldTransferAgent;
struct ActorUniqueID;
struct BlockSourceDebug;
struct ChunkPerformanceData;
struct ClientBlobCacheTrackingData;
struct ClientChunkGenerationValidationData;
struct ControllerIDtoClientMap;
struct CullingPerformanceData;
struct IGameMultiplayerDisabledTextProvider;
struct ImguiProfiler;
struct ImportStructureMetaData;
struct LevelChunkAndSubChunkLoggingData;
struct LevelChunkMetaDataDebug;
struct MCGeometryAtlasStorage;
struct MinecraftGameArguments;
struct PartySystemDependencies;
struct PlayerJoinWorldContext;
struct RenderChunkPerformanceTrackingData;
struct ScreenshotOptions;
struct SubChunkRequestTrackingData;
struct TextureHotReloader;
struct VisibilityNodeTrackingData;
namespace Automation { class AutomationClient; }
namespace Bedrock { class ActivationArguments; }
namespace Bedrock { class SignalReceiver; }
namespace Bedrock { class UserCacheManager; }
namespace Bedrock::DevTools { class CommandExecutor; }
namespace Bedrock::Http { class DispatcherInterface; }
namespace Bedrock::Http { class DispatcherProcess; }
namespace Bedrock::Http { class IAuthenticatedWebService; }
namespace Bedrock::Profiling { class PerfClock; }
namespace Bedrock::Profiling { class ProfilingOrchestrator; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace ClientBlobCache { class Cache; }
namespace ClientBlockPipeline { class SchematicsRepository; }
namespace CodeBuilder { class IManager; }
namespace Compliance { class TimePlayedNotifier; }
namespace Core { class FilePathManager; }
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Input::Debug { class ISplitscreenRedirect; }
namespace JsonRpc { class PartyChatJsonRpcComponent; }
namespace JsonRpc { class PartyInvitesJsonRpcComponent; }
namespace LocalServerLauncher { class IGameInterface; }
namespace LocalServerLauncher { class IServerInstanceBuilder; }
namespace LocalServerLauncher { struct GameDependencies; }
namespace LocalServerLauncher { struct ServerInitData; }
namespace LocalServerLauncher { struct ServerLaunchResult; }
namespace LocalServerLauncher::Impl { struct AllDependencies; }
namespace OreUI { class DataProviderManager_DEPRECATED; }
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class LeaveGameWithWorldThumbnailFlow; }
namespace OreUI { class OreUISystem; }
namespace OreUI { class Router; }
namespace OreUI { class RouterLocation; }
namespace PackCommand { class IPackCommandPipeline; }
namespace ParticleSystem { class ParticleEffectComponentRegistry; }
namespace Parties { class PartySystem; }
namespace PlayerReportingSignal { class PlayerReportingSignalHandler; }
namespace Progress { class ProgressTips; }
namespace Realms { class ContentService; }
namespace Realms { class GenericRequestServiceHandler; }
namespace Realms { class RealmsServices; }
namespace Realms { class RealmsSystem; }
namespace Realms { class SubscriptionService; }
namespace Realms { struct World; }
namespace Social { class BannedUserSignInWarningHandler; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace Social { class InviteUriListener; }
namespace Social { class MultiplayerPlatformFactory; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class PresenceManager; }
namespace Social { class RealmsUriListener; }
namespace Social { class SocialSystem; }
namespace Social { class User; }
namespace World { class WorldSystem; }
namespace World { struct WorldSystemModuleGameDependencies; }
namespace brstd { struct source_location; }
namespace cereal { struct ReflectionCtx; }
namespace dragon::framerenderer { struct DebugParameters; }
namespace edu::auth { struct CredentialsAcquired; }
namespace edu::auth { struct CredentialsRefreshSuccess; }
namespace mce { class FileWatcherNull; }
namespace mce { class IGraphicsFeatureQuery; }
namespace mce { class RendererDebugLayerOutputManager; }
namespace mce { class TextureGroup; }
namespace mce::framebuilder { class BgfxEndFrameNoWaitDiscard; }
namespace mce::framebuilder { class FrameBuilder; }
// clang-format on

class MinecraftGame : public ::IMinecraftGame,
                      public ::App,
                      public ::LevelListener,
                      public ::ResourcePackListener,
                      public ::OptionsObserver,
                      public ::edu::auth::CredentialsObserver,
                      public ::I18nObserver,
                      public ::IMultiPlayerServices,
                      public ::LocalServerLauncher::ILocalServerLauncherImpl {
public:
    // MinecraftGame inner types declare
    // clang-format off
    struct FrameGapImpl;
    struct InitContext;
    // clang-format on

    // MinecraftGame inner types define
    enum class SurfaceState : int {
        Valid = 0,
        Lost  = 1,
    };

    enum class SuspendState : int {
        Suspending = 0,
        Suspended  = 1,
        Resuming   = 2,
        Running    = 3,
    };

    enum class DeviceLostState : int {
        Valid      = 0,
        Lost       = 1,
        Recovering = 2,
    };

    enum class WorkList : uint64 {
        AppInitialize = 0,
        AppResume     = 1,
        AppDeviceLost = 2,
        COUNT         = 3,
    };

    struct FrameGapImpl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mFrameGapStopwatch;
        // NOLINTEND
    };

    struct InitContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<IClientInstance>> mIncompletePrimaryClient;
        ::ll::TypedStorage<8, 16, std::shared_ptr<ScopedCPUBoost>>  mCPUBoost;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FileStorageArea>> mLoggingStorageArea;
    ::ll::UntypedStorage<8, 48> mOnDestructioncloseAndResetAllLogs;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContentLog>> mContentLog;
    ::ll::UntypedStorage<8, 8> mContentLogServiceRegistrationToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<GuiContentLogEndPoint>> mContentLogGuiEndPoint;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DebugEndPoint>> mDebugEndPoint;
    ::ll::TypedStorage<8, 8, double> mLastRealWorldTime;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Compliance::TimePlayedNotifier>> mTimePlayedNotifier;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::SignalReceiver>> mSignalRcvr;
    ::ll::TypedStorage<8, 8, std::unique_ptr<GlobalResourcesCrashRecovery>> mGlobalResourcesCrashRecovery;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MinecraftGraphics>> mMinecraftGraphics;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MinecraftTextBoxController>> mTextBoxController;
    ::ll::TypedStorage<8, 8, std::unique_ptr<UriListener>> mArguments;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IExternalServerFile>> mExternalServer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<EmoticonManager>> mEmoticonManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TextToIconMapper>> mTextToIconMapper;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ProfanityContext>> mProfanityContext;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MinecraftUIMeasureStrategy>> mMeasureStrategy;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Social::BannedUserSignInWarningHandler>> mBannedUserSignInWarningHandler;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::LeaveGameWithWorldThumbnailFlow>> mLeaveGameWithWorldThumbnailFlow;
    ::ll::TypedStorage<1, 1, bool> mMouseGrabbed;
    ::ll::TypedStorage<1, 1, bool> mIsCubemapReloadNeededOnResume;
    ::ll::TypedStorage<8, 24, std::set<SubClientId>> mAvailableClientSubIds;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RayTracingHardwareOptions>> mRayTracingHardwareOptions;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContentTierManager>> mContentTierManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RayTracingOptions>> mRayTracingOptions;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager*> mResourcePackManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<GeometryGroup>> mGeometryGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockCullingGroup>> mBlockCullingGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClientBlockPipeline::SchematicsRepository>> mSchematicRepository;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ParticleEffectGroup>> mParticleEffectGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ParticleSystem::ParticleEffectComponentRegistry>> mParticleComponentRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DeferredLighting>> mDeferredLighting;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LinkedAssetValidator>> mLinkedAssetValidator;
    ::ll::TypedStorage<8, 24, std::string> mCurrentSignInXUID;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Social::InviteUriListener>> mInviteListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Social::RealmsUriListener>> mRealmsListener;
    ::ll::UntypedStorage<8, 16> mEntitlementChangeListener;
    ::ll::UntypedStorage<8, 16> mEntitlementChangeNotifyUIListener;
    ::ll::TypedStorage<1, 1, bool> mHasUnhandledEntitlementsChangeEvent;
    ::ll::TypedStorage<8, 24, std::set<SubClientId>> mSubclientRemovalSet;
    ::ll::TypedStorage<4, 4, ::MinecraftGame::SurfaceState> mRenderSurfaceState;
    ::ll::TypedStorage<4, 4, std::atomic<MinecraftGame::SuspendState>> mSuspended;
    ::ll::TypedStorage<1, 1, bool> mRunServerWhileSuspended;
    ::ll::TypedStorage<4, 4, ::MinecraftGame::DeviceLostState> mDeviceLostState;
    ::ll::TypedStorage<8, 8, ::ResetCallbackObject*> mResetCallbackObj;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PixelCalc>> mDpadScale;
    ::ll::TypedStorage<8, 16, ::mce::UUID> mUUID;
    ::ll::TypedStorage<8, 24, std::string> mProcessRegistrationKey;
    ::ll::UntypedStorage<8, 16> mCheckLoadRendererAssetsCompleteHandle;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mIsFileSystemSpaceTrackingComplete;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mIsLevelInfoRepopulationComplete;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mEndOfLastFrame;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mLastFrameDuation;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNextProfilerLiteTelemetrySendTime;
    ::ll::TypedStorage<1, 1, bool> mWasLastFrameThrottled;
    ::ll::TypedStorage<1, 1, ::SubClientId> mUIRenderIterId;
    ::ll::TypedStorage<4, 4, uint> mUIRenderClientMask;
    ::ll::TypedStorage<4, 4, uint> mUIRenderIssuedMask;
    ::ll::TypedStorage<1, 1, bool> mTickedLastFrame;
    ::ll::TypedStorage<1, 1, bool> mInitialResourcesLoaded;
    ::ll::TypedStorage<1, 1, bool> mReadyToRender;
    ::ll::TypedStorage<1, 1, bool> mGenerateDocs;
    ::ll::TypedStorage<1, 1, bool> mLaunchedFromLegacyVersion;
    ::ll::TypedStorage<1, 1, bool> mGenerateAPIMetadata;
    ::ll::TypedStorage<8, 24, std::string> mPacksUpgraderConfigPath;
    ::ll::TypedStorage<4, 4, uint> mLeaveGameProgress;
    ::ll::TypedStorage<8, 360, ::PackDownloadManager> mPackDownloadManager;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mIsInGame;
    ::ll::TypedStorage<4, 4, std::atomic<LocalServerStartupState>> mLocalServerStartupState;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>> mDeferMultiplayerRequests;
    ::ll::TypedStorage<1, 1, bool> mInitFinished;
    ::ll::TypedStorage<1, 1, bool> mHasDestroyedGame;
    ::ll::TypedStorage<1, 1, bool> mAppWillTerminate;
    ::ll::TypedStorage<1, 1, bool> mFiredInitialEvents;
    ::ll::TypedStorage<1, 1, bool> mRunningInTestCloud;
    ::ll::TypedStorage<1, 1, bool> mProfilerIsOn;
    ::ll::TypedStorage<4, 4, int> mDeferedMaterialReloadRefCnt;
    ::ll::TypedStorage<1, 1, bool> mPrimaryRenderOptionsChanged;
    ::ll::TypedStorage<1, 1, bool> mNeedsBadGlobalPacksToast;
    ::ll::TypedStorage<1, 1, bool> mHasLicence;
    ::ll::TypedStorage<1, 1, bool> mNewID;
    ::ll::TypedStorage<8, 56, ::LoadingScreen> mLoadingScreen;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mLastClientUpdateDuration;
    ::ll::TypedStorage<8, 80, ::ScreenshotRecorder> mScreenshotRecorder;
    ::ll::TypedStorage<8, 8, std::unique_ptr<EditorBootstrapper>> mEditorBootstrapper;
    ::ll::TypedStorage<8, 16, std::weak_ptr<ClientBlobCache::Cache>> mClientBlobCache;
    ::ll::TypedStorage<1, 1, bool> mAddingUserInProgress;
    ::ll::TypedStorage<1, 1, bool> mInitPrimaryUserComplete;
    ::ll::TypedStorage<1, 1, bool> mHasFiredStoreServiceTelemetry;
    ::ll::TypedStorage<1, 1, bool> mRenderingSizeChanged;
    ::ll::TypedStorage<8, 8, double> mRenderingSizeTimeStamp;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::PubSub::Publisher<void (schar), Bedrock::PubSub::ThreadModel::SingleThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> mSplitScreenChangedSubscribers;
    ::ll::TypedStorage<8, 40, ::AppSystemRegistry> mAppSystemRegistry;
    ::ll::UntypedStorage<1, 32> mEntity;
    ::ll::TypedStorage<1, 1, bool> mHideLoadingScreen;
    ::ll::TypedStorage<1, 1, bool> mNewLevel;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ItemRegistry>> mClientItemRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DateManager>> mDateManager;
    ::ll::UntypedStorage<8, 8> mDateManagerServiceRegistrationToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ResourceLoadManager>> mResourceLoadManager;
    ::ll::UntypedStorage<8, 16> mClientInstanceEventCoordinator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Social::IUserManager>> mUserManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::TextureGroup>> mTextureGroup;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::Http::DispatcherProcess>> mHttpDispatcher;
    ::ll::UntypedStorage<8, 8> mHttpDispatcherServiceRegistrationToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IMinecraftEventing>> mEventing;
    ::ll::UntypedStorage<8, 8> mEntitlementManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::FilePathManager>> mFilePathManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IContentKeyProvider>> mSkinPackContentKeyProvider;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IContentAccessibilityProvider>> mContentAccessibility;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackManifestFactory>> mManifestFactory;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorResourceDefinitionGroup>> mActorResourceDefinitionGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DevConsoleLogger>> mDevConsoleLogger;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IGameModuleApp>> mGameModule;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FontRepository>> mFontRepository;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContentCatalogService>> mContentCatalogService;
    ::ll::UntypedStorage<8, 8> mContentCatalogServiceRegistrationToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<::PackCommand::IPackCommandPipeline>> mPackPipeline;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClientPackSourceFactory>> mPackSourceFactory;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPackSettingChangeSubscriber;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ResourcePackRepository>> mResourcePackRepository;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RepositoryPacks>> mRepositoryPacks;
    ::ll::TypedStorage<8, 8, std::unique_ptr<WorldTemplateManager>> mWorldTemplateManager;
    ::ll::UntypedStorage<8, 8> mStoreCatalogRepository;
    ::ll::UntypedStorage<8, 24> mSkinRepository;
    ::ll::UntypedStorage<8, 48> mOnDestructionClearResourceLoaders;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SoundEngine>> mSoundEngine;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContentAcquisition>> mContentAcquisition;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IUIDefRepository>> mUIDefRepo;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IDataDrivenUIRepository>> mDataDrivenUIRepository;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TextureHotReloader>> mTextureHotReloader;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PersonaRepository>> mPersonaRepository;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PersonaService>> mPersonaService;
    ::ll::TypedStorage<8, 8, std::unique_ptr<NetworkSessionOwner>> mNetworkSessionOwner;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClientNetworkSystem>> mClientNetworkSystem;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LevelDbEnv>> mLevelDbEnv;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ActorAnimationGroup>> mActorAnimationGroup;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ActorAnimationControllerGroup>> mActorAnimationControllerGroup;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RenderControllerGroup>> mRenderControllerGroup;
    ::ll::UntypedStorage<8, 8> mEntitlementManagerServiceRegistrationToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<mce::FileWatcherNull>> mFileWatcher;
    ::ll::UntypedStorage<8, 8> mFileWatcherServiceRegistrationToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<AppConfigs>> mAppConfig;
    ::ll::UntypedStorage<8, 8> mAppConfigServiceRegistrationToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<mce::framebuilder::FrameBuilder>> mFrameBuilder;
    ::ll::UntypedStorage<8, 8> mFrameBuilderServiceRegistrationToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<mce::framebuilder::BgfxEndFrameNoWaitDiscard>> mFrameBuilderOptimizer;
    ::ll::UntypedStorage<8, 8> mFrameBuilderOptimizerServiceRegistrationToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<mce::IGraphicsFeatureQuery>> mGraphicsFeatureQuery;
    ::ll::UntypedStorage<8, 8> mGraphicsFeatureQueryServiceRegistrationToken;
    ::ll::TypedStorage<8, 16, std::shared_ptr<FlightingService>> mFlightingService;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Input::Debug::ISplitscreenRedirect>> mDebugSplitscreenInputRedirect;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SceneStackNavigator>> mSceneStackNavigator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::DevTools::CommandExecutor>> mDevToolsCommandExecutor;
    ::ll::TypedStorage<8, 48, ::VideoCaptureSessionManager> mVideoCaptureSessionManager;
    ::ll::UntypedStorage<8, 16> mLastLevelInfo;
    ::ll::UntypedStorage<8, 16> mTextureShiftManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FrameAnomalyDetector>> mFrameAnomalyDetector;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FrameAnomalyDetectorEventing>> mFrameAnomalyDetectorEventing;
    ::ll::UntypedStorage<8, 16> mServicesManager;
    ::ll::UntypedStorage<8, 8> mServicesManagerServiceRegistrationToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LayoutService>> mLayoutService;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LayoutServiceSystem>> mLayoutServiceSystem;
    ::ll::TypedStorage<8, 24, std::map<SubClientId, std::shared_ptr<IClientInstance>>> mClientInstances;
    ::ll::TypedStorage<8, 8, std::unique_ptr<StartupStatistics>> mStartupStatistics;
    ::ll::TypedStorage<8, 8, std::unique_ptr<StartupStatisticsWriteCsv>> mStartupStatisticsWriteCsv;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mStartupStatisticsSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mStartupQuitSubscription;
    ::ll::UntypedStorage<8, 8> mOfferRepository;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SunsettingManager>> mSunsettingManager;
    ::ll::UntypedStorage<8, 16> mLevelLoader;
    ::ll::UntypedStorage<8, 48> mOnDestructionUnregisterInitUriListeners;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FileLoadLock>> mGlobalResourceLoadLock;
    ::ll::TypedStorage<8, 752, ::Bedrock::Resources::ResourceLoadTelemetryState> mResourceLoadTelemetry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SaveTransactionManager>> mSaveTransactionManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IDlcValidation>> mDlcValidation;
    ::ll::UntypedStorage<8, 8> mFileArchiver;
    ::ll::TypedStorage<8, 768, std::variant<LocalWorldTransferActionFunc, ExternalWorldTransferActionFunc, RealmTransferActionFunc, std::monostate>> mWorldTransferAction;
    ::ll::UntypedStorage<8, 16> mUIEventCoordinator;
    ::ll::UntypedStorage<8, 16> mServerInstanceEventCoordinator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SerialWorkList>> mSuspendWorkList;
    ::ll::TypedStorage<8, 40, std::unordered_map<DimensionType, std::unique_ptr<ChunkSource>>> mClientGenSourceMap;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Timer>> mSimTimer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Timer>> mRealTimer;
    ::ll::UntypedStorage<8, 48> mUnregisterResourcePackListener;
    ::ll::UntypedStorage<8, 48> mDebugEndPointUnregister;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CubemapBackgroundResources>> mCubemapBackgroundResources;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SoundEngine>> mTempSoundEngine;
    ::ll::UntypedStorage<8, 48> mOnDestructionStopProcessingCrashes;
    ::ll::UntypedStorage<8, 48> mOnDestructionI18nClearLanguages;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ProfilingConfigManager>> mProfilingConfigManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::Profiling::ProfilingOrchestrator>> mProfilingOrchestrator;
    ::ll::UntypedStorage<8, 8> mServiceDrivenImageRepository;
    ::ll::UntypedStorage<8, 48> mOnDestructionProfilerLiteShutdown;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContentLogFileEndPoint>> mContentLogFileEndPoint;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RealmsAPI>> mRealms;
    ::ll::TypedStorage<8, 16, std::shared_ptr<PlayfabBeaconClient>> mPlayfabBeaconClient;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MinecraftInputHandler>> mInput;
    ::ll::UntypedStorage<8, 48> mOnDestructionTerminateRenderer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandListQueue>> mCommandListQueue;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SeasonsRenderer>> mSeasonsRenderer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TextureAtlas>> mTextureAtlas;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TextureAtlas>> mItemTextureAtlas;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IUIRepository>> mUIRepository;
    ::ll::TypedStorage<8, 8, std::unique_ptr<GameRenderer>> mGameRenderer;
    ::ll::UntypedStorage<8, 48> mDateManagerSaveOptions;
    ::ll::UntypedStorage<8, 8> mThirdPartyServerRepository;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlayerMessagingService>> mPlayerMessagingService;
    ::ll::UntypedStorage<8, 16> mMarketplaceServicesManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TrialManager>> mTrialManager;
    ::ll::TypedStorage<1, 1, bool> mIsTrialManagerInitialized;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mTrialModeUpdateSubscription;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Social::PresenceManager>> mPresenceManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TreatmentPackDownloadMonitor>> mTreatmentPackMonitor;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::TextureGroup>> mStoreCacheTextures;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TextToSpeechSystem>> mTTSSystem;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MusicManager>> mMusicManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ExternalContentManager>> mContentManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LibraryRepository>> mLibraryRepository;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LevelStorageSource>> mLevelStorageSource;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LevelListCache>> mLevelListCache;
    ::ll::TypedStorage<8, 8, std::unique_ptr<NewPlayerSystem>> mNewPlayerSystem;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ContentManager>> mResourceContentManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<GatheringManager>> mGatheringManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<World::WorldSystem>> mWorldSystem;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Social::SocialSystem>> mSocialSystem;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OnDestructionCancelResourceLoaders>> mOnDestructionCancelResourceLoaders;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CodeBuilder::IManager>> mCodeBuilder;
    ::ll::UntypedStorage<8, 8> mCodeBuilderRegistrationToken;
    ::ll::TypedStorage<8, 16, std::shared_ptr<JsonRpc::PartyChatJsonRpcComponent>> mPartyChatJsonRpcComponent;
    ::ll::TypedStorage<8, 16, std::shared_ptr<JsonRpc::PartyInvitesJsonRpcComponent>> mPartyInvitesJsonRpcComponent;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SignalingService>> mSignalingService;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SignalingServiceSignInManager>> mSignalingServiceSignInManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::Http::IAuthenticatedWebService>> mAuthenticatedWebService;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::OreUISystem>> mOreUISystem;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Social::MultiplayerServiceManager>> mMultiplayerServiceManager;
    ::ll::UntypedStorage<8, 8> mMultiplayerServiceManagerRegistrationToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPartySystemInitSubscription;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PartySystemDependencies>> mPartySystemDependencies;
    ::ll::TypedStorage<8, 8, std::unique_ptr<EDUSystems>> mEDUSystems;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ServerInstance>> mServerInstance;
    ::ll::TypedStorage<8, 456, std::array<SerialWorkList, 3>> mSerialWorkList;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mStorageAreaTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mInitializationTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mServerInitTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mJoinMultiplayerTaskGroup;
    ::ll::TypedStorage<8, 16, std::shared_ptr<DeferredTasksManager<DeferredTaskCategory>>> mDeferredTasks;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ImguiProfiler>> mImguiProfiler;
    ::ll::UntypedStorage<8, 8> mImguiProfilerRegistrationToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlayerReportingSignal::PlayerReportingSignalHandler>> mPlayerReportingSignalHandler;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClientChunkPerformanceData>> mChunkPerformanceData;
    ::ll::UntypedStorage<8, 8> mChunkPerformanceDataRegistrationToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SubChunkRequestTrackingData>> mSubChunkRequestTrackingData;
    ::ll::UntypedStorage<8, 8> mSubChunkRequestTrackingDataRegistrationToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClientBlobCacheTrackingData>> mClientBlobCacheTrackingData;
    ::ll::UntypedStorage<8, 8> mClientBlobCacheTrackingDataRegistrationToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CullingPerformanceData>> mCullingPeformanceData;
    ::ll::UntypedStorage<8, 8> mCullingPeformanceDataRegistrationToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DBStoragePerformanceData>> mDBStoragePerformanceData;
    ::ll::UntypedStorage<8, 8> mDBStoragePerformanceDataRegistrationToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LevelChunkMetaDataDebug>> mLevelChunkMetaDataDebug;
    ::ll::UntypedStorage<8, 8> mLevelChunkMetaDataDebugRegistrationToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockSourceDebug>> mBlockSourceDebug;
    ::ll::UntypedStorage<8, 8> mBlockSourceDebugRegistrationToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClientChunkGenerationValidationData>> mClientChunkGenerationValidationData;
    ::ll::UntypedStorage<8, 8> mClientChunkGenerationValidationDataToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LevelChunkAndSubChunkLoggingData>> mLevelChunkAndSubChunkLoggingData;
    ::ll::UntypedStorage<8, 8> mLevelChunkAndSubChunkLoggingDataToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RenderChunkPerformanceTrackingData>> mRenderChunkPerformanceTrackingData;
    ::ll::UntypedStorage<8, 8> mRenderChunkPerformanceTrackingDataToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VisibilityNodeTrackingData>> mVisibilityNodeTrackingData;
    ::ll::UntypedStorage<8, 8> mVisibilityNodeTrackingDataToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ImportStructureMetaData>> mImportStructureData;
    ::ll::UntypedStorage<8, 8> mImportStructureDataToken;
    ::ll::TypedStorage<8, 48, ::Bedrock::Threading::GraphicsTasksPerfScaler> mPerfScaler;
    ::ll::UntypedStorage<8, 8> mPerfScalerServiceRegistrationToken;
    ::ll::TypedStorage<8, 24, std::multimap<SubClientId, Bedrock::PubSub::Subscription>> mClientOptionLockSubscriptions;
    ::ll::TypedStorage<8, 24, std::multimap<SubClientId, Bedrock::PubSub::Subscription>> mClientOptionObserverSubscriptions;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>> mPrimaryUserOptionLockSubscriptions;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>> mPrimaryUserOptionObserverSubscriptions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLanguageOptionSubscription;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>> mSignInSubscriptions;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>> mSignOutSubscriptions;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClientCommands>> mClientCommands;
    ::ll::TypedStorage<8, 8, std::unique_ptr<NetworkConnectionTypeChangeObserver>> mNetworkConnectionTypeChangeObserver;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IGameMultiplayerDisabledTextProvider>> mGameMultiplayerDisabledTextProvider;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::UserCacheManager>> mUserCacheManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DisplayLoggedErrorManager>> mMarketplaceErrorManager;
    ::ll::UntypedStorage<8, 8> mMarketplaceErrorManagerRegistrationToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<mce::RendererDebugLayerOutputManager>> mRendererDebugLayerOutputManager;
    ::ll::UntypedStorage<8, 8> mRendererDebugLayerOutputManagerRegistrationToken;
    ::ll::UntypedStorage<8, 16> mEntitlementCacheLoadResult;
    ::ll::TypedStorage<8, 8, std::unique_ptr<WatchdogTimer>> mEntitlementCacheTimer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<WorldTransferAgent>> mWorldTransferAgent;
    ::ll::UntypedStorage<8, 16> mUIProgressTips;
    ::ll::TypedStorage<8, 712, std::optional<std::variant<GameConnectionInfoEx, Social::MultiplayerGameInfo, ExperienceJoinRequestInfo, Realms::RealmId>>> mReconnectCookie;
    ::ll::UntypedStorage<8, 16> mRealmsServices;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Realms::RealmsSystem>> mRealmsSystem;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ISceneStack>> mSceneStack;
    ::ll::TypedStorage<8, 8, std::unique_ptr<EcoModeSystem>> mEcoModeSystem;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::Router>> mUIRouter;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MCGeometryAtlasStorage>> mGeometryAtlasStorage;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::DataProviderManager_DEPRECATED>> mDataProviderManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MultiPlayerRequestManager>> mMultiplayerRequestManager;
    ::ll::UntypedStorage<8, 8> mCachedScenes;
    ::ll::UntypedStorage<8, 48> mOreUIUnregisterUIRouter;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mUIRouterOnRouteChangedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mHttpLoggingSubscription;
    ::ll::UntypedStorage<8, 24> mReflectionCtx;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mMaxFrameRateSliderSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mStorageDirectoryChangedSubscriber;
    ::ll::TypedStorage<1, 1, bool> mIsWorldTransferInProgress;
    ::ll::TypedStorage<8, 8, double> mGameUpdateDurationInSeconds;
    ::ll::TypedStorage<8, 16, std::shared_ptr<void>> mCoroutinePolicySubscription;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MinecraftGame::FrameGapImpl>> mFrameGapData;
    ::ll::UntypedStorage<8, 24> mMultiplayerPlatformFactory;
    ::ll::UntypedStorage<8, 64> mCreateWorldSystem;
    ::ll::UntypedStorage<8, 64> mSendEventingInit;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGame();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MinecraftGame();

    virtual void initialize();

    virtual void update();

    virtual bool stop();

    virtual void processActivationArguments(::Bedrock::ActivationArguments const&);

    virtual ::AppSystemRegistry& getAppSystemRegistry();

    virtual ::EntityContext& getEntity() const;

    virtual void logoffAllSubclients();

    virtual void buildTreatmentPackStack(bool) const;

    virtual void queueSubclientRemoval(::SubClientId);

    virtual std::shared_ptr<mce::TextureGroup> getTextureGroup() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>> getResourceLoadManager();

    virtual void handleReloadUIDefinitions();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<IUIDefRepository>> getUIDefRepo() const;

    virtual bool canActivateKeyboard();

    virtual void releaseClientSubId(::SubClientId);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentTierManager>> getContentTierManager() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<DevConsoleLogger>> getDevConsoleLogger() const;

    virtual void setDisableInputForAllOtherClients(int, bool);

    virtual ::DeferredTasksManager<DeferredTaskCategory>& getDeferredTasks();

    virtual bool shouldShowRatingsPrompt() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ServerInstanceEventCoordinator>> getServerInstanceEventCoordinator();

    virtual bool isHostingLocalDedicatedServer() const;

    virtual bool isLeaveGameDone() const;

    virtual void destroyGame();

    virtual bool isInGame() const;

    virtual void startLeaveGame();

    virtual bool isAudioInitialized() const;

    virtual ::MusicManager const* getMusicManager() const;

    virtual ::MusicManager* getMusicManagerNonConst() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<SoundEngine>> getSoundEngine() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ITextBoxController>> getTextBoxController();

    virtual void setIsInGame(bool);

    virtual void createClientItemRegistry();

    virtual bool hasNetworkPrivileges(bool);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<IThirdPartyServerRepository>> getThirdPartyServerRepository();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const IThirdPartyServerRepository>> getThirdPartyServerRepository() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ControllerIDtoClientMap>> retrieveCIDToClientMap();

    virtual std::map<SubClientId, std::shared_ptr<IClientInstance>> const& getClientInstanceMap() const;

    virtual void joinMultiplayerWithAddress(::Social::GameConnectionInfo, bool, std::string const&, std::string const&, ::NetworkType, std::shared_ptr<bool>, ::PlayerJoinWorldContext);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<IOfferRepository>> getOfferRepository() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<TrialManager>> getTrialManager() const;

    virtual bool isTrialManagerInitialized() const;

    virtual ::InputMode getCurrentInputMode() const;

    virtual void handleInputPaneHidden();

    virtual bool getSuspended() const;

    virtual bool isResuming() const;

    virtual ulong getClientInstanceCount() const;

    virtual void setProfilerIsOn(bool);

    virtual ::LocalPlayer const* getPrimaryLocalPlayer() const;

    virtual ::LocalPlayer* getPrimaryLocalPlayer();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> getUserManager() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const IClientInstance>> getPrimaryClientInstance() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> getPrimaryClientInstance();

    virtual ::ItemRegistryRef getClientItemRegistry() const;

    virtual bool isPrimaryClientInstanceReady() const;

    virtual void ensureAllClientsAreLeaving() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ClientNetworkSystem>> getClientNetworkSystemPtr();

    virtual ::ClientNetworkSystem const& getClientNetworkSystem() const;

    virtual ::ClientNetworkSystem& getClientNetworkSystem();

    virtual bool hasAllValidCrossPlatformSkin() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const NewPlayerSystem>> getNewPlayerSystem() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<NewPlayerSystem>> getNewPlayerSystem();

    virtual void createAndUploadWorldToRealm(std::string const&, std::string const&, ::ContentIdentity const&, ::LevelSettings const&, ::Realms::World, std::function<void (Realms::World)>);

    virtual ::ILevelListCache& getLevelListCache();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FilePathManager>> getFilePathManager();

    virtual void setUseFontOverrides(bool);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const FontRepository>> getFontRepository() const;

    virtual void onClientLevelExit(::IClientInstance&, uint);

    virtual bool isLocalPlayer(::ActorUniqueID const&) const;

    virtual ::IMinecraftEventing& getEventing() const;

    virtual void reloadAnimationAndGeometryData(bool);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<GeometryGroup>> getGeometryGroup() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<BlockCullingGroup>> getBlockCullingGroup() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ClientBlockPipeline::SchematicsRepository>> getSchematicsRepository() const;

    virtual ::ParticleEffectGroup& getParticleEffectGroup() const;

    virtual ::DeferredLighting& getDeferredLighting() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>> getMultiplayerServiceManager() const;

    virtual ::IResourcePackRepository& getResourcePackRepository() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> getKeyProvider() const;

    virtual ::ResourcePackManager& getResourcePackManager() const;

    virtual ::ResourcePackManager& getServerResourcePackManager();

    virtual ::PackManifestFactory& getPackManifestFactory();

    virtual ::PlayerMessagingService& getPlayerMessagingService();

    virtual std::shared_ptr<SkinRepository> getSkinRepository() const;

    virtual ::PersonaRepository& getPersonaRepository() const;

    virtual ::MarketplaceServicesManager& getMarketplaceServicesManager() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<mce::TextureGroup>> getStoreCacheTextures() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<MinecraftGraphics>> getMinecraftGraphics();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<IUIRepository>> getUIRepository() const;

    virtual bool isPrimaryLevelCrossPlatformMultiplayer() const;

    virtual bool isPrimaryLevelMultiplayer() const;

    virtual std::string getMultiplayerDisabledTextTitle(::MultiplayerLockedContext) const;

    virtual std::string getMultiplayerDisabledTextBody(::MultiplayerLockedContext) const;

    virtual void setRenderingSize(int, int);

    virtual void recalculateScene();

    virtual void setUISizeAndScale(int, int, float);

    virtual bool isReadyToRender() const;

    virtual void onDimensionChanged();

    virtual void setLeaveGameInProgressAsReadyToContinue();

    virtual void onClientCreatedLevel(::IClientInstance&);

    virtual ulong generateClientId(bool, bool&, ulong, std::shared_ptr<Social::User>);

    virtual std::weak_ptr<RealmsAPI> getRealms();

    virtual ::Realms::ContentService& getRealmsContentService();

    virtual bool getMouseGrabbed() const;

    virtual void navigateToPlayScreenFriendsTab();

    virtual bool isInServer() const;

    virtual bool isInRealm() const;

    virtual bool isShowingLoadingScreen() const;

    virtual bool isRenderingLoadingScreen() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<StoreCatalogRepository>> getStoreCatalog() const;

    virtual ::ServiceDrivenImageRepository& getServiceImageRepository() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<LibraryRepository>> getLibraryRepository() const;

    virtual ::GameRenderer& getGameRenderer() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<TextureAtlas>> getTextureAtlas();

    virtual bool hasActorResourceDefinitionGroup() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const ActorResourceDefinitionGroup>> getActorResourceDefinitionGroup() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ActorResourceDefinitionGroup>> getActorResourceDefinitionGroupMutable();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<RenderControllerGroup>> getRenderControllerGroup();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const RenderControllerGroup>> getRenderControllerGroup() const;

    virtual int getMaxPlayerCount() const;

    virtual ::Bedrock::Threading::Async<Core::PathBuffer<std::string>> requestScreenshot(::ScreenshotOptions&);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>> getOreUIResourceAllowList();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<DateManager>> getDateManager() const;

    virtual ::PixelCalc const& getDpadScale() const;

    virtual void setKeyboardForcedHeight(float, bool);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> getMainSceneStack();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const ISceneStack>> getMainSceneStack() const;

    virtual ::OreUI::Router& getUIRouter();

    virtual ::OreUI::DataProviderManager_DEPRECATED& getDataProviderManager();

    virtual uint getUIRenderClientMask() const;

    virtual bool useMinecraftVersionOfXBLUI() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<PersonaService>> getPersonaService() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<GatheringManager>> getGatheringManager() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ContentCatalogService>> getContentCatalogService() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<FlightingService>> getFlightingService() const;

    virtual std::shared_ptr<FlightingService> getFlightingServicePtr() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const TreatmentPackDownloadMonitor>> getTreatmentPackDownloadMonitor() const;

    virtual ::SceneFactory& getPrimarySceneFactory() const;

    virtual ::Bedrock::NonOwnerPointer<MinecraftInputHandler> getInput() const;

    virtual void grabMouse();

    virtual void releaseMouse();

    virtual void refocusMouse(bool);

    virtual void setMouseType(::Bedrock::Input::PointerType);

    virtual void play(std::string const&, ::Vec3 const&, float, float);

    virtual void playUI(std::string const&, float, float);

    virtual void fadeOutMusic();

    virtual void onPlayerLoaded(::IClientInstance&, ::Player&);

    virtual bool checkForPiracy() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<CubemapBackgroundResources>> getCubemapBackgroundResources();

    virtual void setAppWillTerminate(bool);

    virtual ::ServerInstance* getServerInstance();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ServerInstance>> getServerInstanceNonOwnPtr();

    virtual void setLaunchedFromLegacyVersion(bool);

    virtual ::UIMeasureStrategy& getUIMeasureStrategy();

    virtual void registerUpsellScreen();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>> getWorldTemplateManager() const;

    virtual ::World::WorldSystem& getWorldSystem() const;

    virtual bool isWorldSystemReady() const;

    virtual ::Social::SocialSystem& getSocialSystem() const;

    virtual ::Bedrock::NonOwnerPointer<Parties::PartySystem> getPartySystem() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<Progress::ProgressTips>> getUIProgressTips() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::RealmsSystem>> getRealmsSystem() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>> getEntitlementManager();

    virtual ::IDlcValidation& getDlcValidation();

    virtual ::ServicesManager& getServicesManager();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<SunsettingManager>> getSunsettingManager();

    virtual void pauseContentDownloads();

    virtual void resumeContentDownloads();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<IExternalServerFile>> getExternalServer() const;

    virtual bool isStartingGame() const;

    virtual bool isSplitscreenJoinEnabled() const;

    virtual bool canAddSplitscreenSubClient(int) const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<LevelLoader>> getLevelLoader();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ExternalContentManager>> getContentManager();

    virtual std::shared_ptr<IClientInstance> tryGetClientInstanceFromPlayerUUID(::mce::UUID const&) const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<IContentAccessibilityProvider>> getAccessibilityProvider();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentAccessibilityProvider>> getAccessibilityProvider() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ContentAcquisition>> getContentAcquisition() const;

    virtual void onGameEventNotification(::ui::GameEventNotification);

    virtual void setRealmsLoadingLink(bool);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<IApp>> getApp();

    virtual void clearCache();

    virtual ::IContentManager& getResourceContentManager();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const EmoticonManager>> getEmoticonManager() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<TextToIconMapper>> getTextToIconMapper();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const TextToIconMapper>> getTextToIconMapper() const;

    virtual void onPrimaryUserReconnect(::Social::UserPlatformConnectionResult, bool);

    virtual void setSmoothFontStyle();

    virtual void setUIFontStyle();

    virtual void copyInternalSettingsFolderToExternalLocation() const;

    virtual void joinRealmFromInvite(::Realms::World const&);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::RealmsServices>> getRealmsServices();

    virtual std::weak_ptr<ClubsService> getClubsService();

    virtual std::shared_ptr<Realms::GenericRequestServiceHandler> getGenericRealmsService();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::SubscriptionService>> getRealmsSubscriptionService();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ActiveDirectoryIdentity>> getActiveDirectoryIdentity();

    virtual ::PackSourceFactory& getPackSourceFactory() const;

    virtual void displayActiveDirectoryLoginDialog();

    virtual void resetInput();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<Social::PresenceManager>> getPresenceManager();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<GuiData>> getPrimaryGuiData();

    virtual bool isPrimaryUserSigninInProgress() const;

    virtual void setupCommandParser(::IClientInstance&);

    virtual void stopSound(std::string const&);

    virtual void stopSounds();

    virtual ::PackDownloadManager& getPackDownloadManager();

    virtual ::Bedrock::NonOwnerPointer<LinkedAssetValidator> getLinkedAssetValidator() const;

    virtual void addSubClientInstanceAndAssociateToUser(int);

    virtual void forEachClientInstance(std::function<void (IClientInstance&)>);

    virtual bool isInitialized() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<SeasonsRenderer>> getSeasonsRenderer();

    virtual std::shared_ptr<ActorAnimationGroup> getActorAnimationGroup() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ActorAnimationControllerGroup>> getActorAnimationControllerGroup() const;

    virtual bool isMultiplayerServiceManagerReady() const;

    virtual void doPrimaryClientReadyWork(std::function<void ()>);

    virtual void doUserManagerReadyWork(std::function<void ()>);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ScreenshotRecorder>> getScreenshotRecorder();

    virtual ::Bedrock::NonOwnerPointer<ContentLogFileEndPoint> const getContentFileLogEndPoint() const;

    virtual ::Bedrock::NonOwnerPointer<LinkedAssetValidator> getLinkedAssetValidator();

    virtual ::Bedrock::NonOwnerPointer<EDUSystems> getEDUSystems();

    virtual ::Bedrock::NonOwnerPointer<const EDUSystems> getEDUSystems() const;

    virtual std::shared_ptr<const OptionRegistry> getPrimaryUserOptions() const;

    virtual std::shared_ptr<OptionRegistry> getPrimaryUserOptions();

    virtual ::Bedrock::PubSub::Subscription registerSplitScreenChangedListener(std::function<void (uchar)>) const;

    virtual uchar getSplitScreenCount() const;

    virtual ::IGameModuleApp& getGameModule();

    virtual bool isMusicEnabled() const;

    virtual void queueCustomMusic(std::string const&, float, float, ::MusicRepeatMode);

    virtual void playCustomMusic(std::string const&, float, float, ::MusicRepeatMode);

    virtual void stopCustomMusic(float);

    virtual void setMusicCommandVolumeMultiplier(float);

    virtual float calculateScreenSizeToResolutionScalar(int const, int const) const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const GlobalResourcesCrashRecovery>> GetGlobalResourcesCrashRecovery() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>> getLevelDbEnv();

    virtual ::Bedrock::NonOwnerPointer<ChunkSource> getClientGenChunkSource(::DimensionType const&);

    virtual bool isEditorModeEnabled() const;

    virtual void setResetCallbackObject(::ResetCallbackObject*);

    virtual void resetThreadCallbacks();

    virtual void shutdownServer();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ProfanityContext>> getProfanityContext();

    virtual double getGameUpdateDurationInSeconds() const;

    virtual void audioEngineOn();

    virtual void audioEngineOff();

    virtual ::Bedrock::Threading::Async<void> startLocalServerAsync(std::string const&, std::string const&, ::ContentIdentity const&, ::LevelSettings const&, ::StartIntent);

    virtual bool canStartLocalServer() const;

    virtual void onLowMemory(::LowMemorySeverity);

    virtual void onAppFocusLost();

    virtual void onAppFocusGained();

    virtual void onAppPaused();

    virtual void onAppUnpaused();

    virtual void setReconnectionCookie(std::optional<std::variant<GameConnectionInfoEx, Social::MultiplayerGameInfo, ExperienceJoinRequestInfo, Realms::RealmId>> const&);

    virtual std::optional<std::variant<GameConnectionInfoEx, Social::MultiplayerGameInfo, ExperienceJoinRequestInfo, Realms::RealmId>> getReconnectionCookie();

    virtual void onAppPreSuspended();

    virtual void onAppSuspended();

    virtual void onAppResumed();

    virtual void onDeviceLost();

    virtual void onAppSurfaceCreated();

    virtual void onAppSurfaceDestroyed();

    virtual void onOperationModeChanged(::OperationMode);

    virtual void playerListChanged();

    virtual void onLevelDestruction(std::string const&);

    virtual void setWorldTransferAction(std::variant<LocalWorldTransferActionFunc, ExternalWorldTransferActionFunc, RealmTransferActionFunc, std::monostate>&&);

    virtual std::variant<LocalWorldTransferActionFunc, ExternalWorldTransferActionFunc, RealmTransferActionFunc, std::monostate> const& getWorldTransferAction() const;

    virtual ::Bedrock::NonOwnerPointer<WorldTransferAgent> const getWorldTransferAgent() const;

    virtual void setIsWorldTransferInProgress(bool);

    virtual bool isWorldTransferInProgress() const;

    virtual void requestLeaveGame(bool, bool);

    virtual void requestLeaveThenJoinFriendsWorld(std::string_view);

    virtual void requestLeaveGameWithWorldThumbnail();

    virtual void requestLeaveGameWithWorldThumbnailThenJoinFriendsWorld(std::string_view);

    virtual void joinRealmsGame(::Realms::World const&, ::Social::GameConnectionInfo const&, ::PlayerJoinWorldContext);

    virtual void joinRealmFromConnectLink(::Realms::World const&, ::PlayerJoinWorldContext);

    virtual void joinRealm(::Realms::World const&, ::IMinecraftEventing::RealmConnectionFlow, ::PlayerJoinWorldContext);

    virtual ::Bedrock::Threading::Async<void> joinMultiplayerGame(::Social::MultiplayerGameInfo const&, ::PlayerJoinWorldContext, ::OnlineSafetyDialogVisibility);

    virtual void joinRemoteServerWithAddress(::Social::GameConnectionInfo, std::string const&, std::string const&, ::NetworkType, std::shared_ptr<bool>, ::PlayerJoinWorldContext);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<Minecraft>> getPrimaryMinecraft();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<Automation::AutomationClient>> getAutomationClient() const;

    virtual bool isDedicatedServer() const;

    virtual bool isEduMode() const;

    virtual void onNetworkMaxPlayersChanged(uint);

    virtual ::IGameModuleShared& getGameModuleShared();

    virtual void requestServerShutdown();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver>> getFileArchiver() const;

    virtual bool requestInGamePause(::SubClientId const&, bool);

    virtual void onActiveResourcePacksChanged(::ResourcePackManager&);

    virtual bool onFullPackStackInvalid();

    virtual void onLanguageSubpacksChanged();

    virtual void onBaseGamePackDownloadComplete();

    virtual void onPushNotificationReceived(::PushNotificationMessage const&);

    virtual void muteAudio();

    virtual void unMuteAudio();

    virtual void onForceCloudSave();

    virtual void onOptionsLoadBegin();

    virtual void onOptionsLoadComplete();

    virtual void onLanguageChanged(std::string const&, bool);

    virtual void onLanguageKeywordsLoadedFromPack(::PackManifest const&);

    virtual void onLanguagesLoaded();

    virtual std::unique_ptr<LocalServerLauncher::IGameInterface> createGameInterface();

    virtual std::unique_ptr<LocalServerLauncher::IServerInstanceBuilder> createServerBuilder();

    virtual std::unique_ptr<LocalServerLauncher::GameDependencies> createGameDependencies();

    virtual ::TaskGroup& _getServerInitTaskGroup();

    virtual bool isMultiPlayerInitialized() const;

    virtual bool checkMultiPlayerPermission(std::optional<Social::MultiplayerServiceIdentifier>);

    virtual bool isPlayingLevel() const;

    virtual void initImpl();

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<edu::auth::CredsLost> const&);

    virtual void onNotify(::edu::auth::CredentialsRefreshSuccess const&);

    virtual void onNotify(::edu::auth::CredentialsAcquired const&);

    virtual void completeServerStartup(std::shared_ptr<LocalServerLauncher::ServerInitData>, ::LocalServerLauncher::ServerLaunchResult&&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MinecraftGame(::MinecraftGameArguments&&);

    MCNAPI void _InitComplete();

    MCNAPI void _LoadRendererAssets();

    MCNAPI void _addSubClientInstanceAndAssociateToUserInternal(int, bool);

    MCNAPI void _beginReloadingResources();

    MCNAPI void _buildClientStack();

    MCNAPI void _buildClientStartupStack();

    MCNAPI bool _clientUpdate();

    MCNAPI void _configureLighting();

    MCNAPI ::LocalServerLauncher::Impl::AllDependencies _createAllDependencies();

    MCNAPI std::shared_ptr<ClientInstance> _createClientInstance(::SubClientId, ::LatencyGraphDisplay*, int);

    MCNAPI ::brstd::move_only_function<std::unique_ptr<IClientDimensionExtensions>(bool) const>
    _createDimensionExtensionsFactory(bool);

    MCNAPI std::unique_ptr<GameModuleClient> _createGameModuleClient(::SubClientId);

    MCNAPI void _createPartySystem();

    MCNAPI void _cycleRoundRobinClientSubId();

    MCNAPI std::unique_ptr<ResourcePackStack> _deserializeGlobalResourcePacks();

    MCNAPI void _deviceReinitialization(::SerialWorkList&, std::optional<dragon::framerenderer::DebugParameters>);

    MCNAPI void _finishReloadingResources(::ResourcePackManager&, bool);

    MCNAPI ::Core::PathBuffer<std::string> _getSwitchableMaterialList() const;

    MCNAPI ::Bedrock::Threading::Async<void> _handleMultiplayerServiceJoinResult(
        ::Social::MultiplayerServiceIdentifier const,
        ::Social::JoinGameStatus,
        ::Social::MultiplayerGameInfo const&,
        bool
    );

    MCNAPI ::SerialWorkList::WorkResult _initAudio();

    MCNAPI ::SerialWorkList::WorkResult _initCheckStorage();

    MCNAPI ::SerialWorkList::WorkResult _initClientNetworkSystem();

    MCNAPI ::SerialWorkList::WorkResult _initCrashReporting();

    MCNAPI ::SerialWorkList::WorkResult _initCreatePrimaryClient(std::shared_ptr<MinecraftGame::InitContext>);

    MCNAPI ::SerialWorkList::WorkResult _initDatabase();

    MCNAPI ::SerialWorkList::WorkResult _initDefaultFonts();

    MCNAPI ::SerialWorkList::WorkResult _initDeviceDebugConfig();

    MCNAPI ::SerialWorkList::WorkResult _initEventing();

    MCNAPI ::SerialWorkList::WorkResult _initFileSystemSpaceTracking();

    MCNAPI ::SerialWorkList::WorkResult _initFinish(std::shared_ptr<MinecraftGame::InitContext>&);

    MCNAPI ::SerialWorkList::WorkResult _initFontHandles();

    MCNAPI ::SerialWorkList::WorkResult _initFontMetadata();

    MCNAPI ::SerialWorkList::WorkResult _initHideSplashScreen();

    MCNAPI ::SerialWorkList::WorkResult _initHttp();

    MCNAPI ::SerialWorkList::WorkResult _initIssueHardwareCursorLoad();

    MCNAPI ::SerialWorkList::WorkResult _initLoadRendererAssets();

    MCNAPI ::SerialWorkList::WorkResult _initLoadingBarMaterials();

    MCNAPI ::SerialWorkList::WorkResult _initLogging();

    MCNAPI void _initMinecraftGame();

    MCNAPI ::SerialWorkList::WorkResult _initMultiplayerMgr();

    MCNAPI ::SerialWorkList::WorkResult _initMultiplayerRequestHandler();

    MCNAPI ::SerialWorkList::WorkResult _initNetworkSessionOwner();

    MCNAPI ::SerialWorkList::WorkResult _initNewPlayerSystem();

    MCNAPI ::SerialWorkList::WorkResult _initNotifyOnActiveResourcePacksChanged();

    MCNAPI ::SerialWorkList::WorkResult _initOnGameSessionReset();

    MCNAPI ::SerialWorkList::WorkResult _initOreUIAssets();

    MCNAPI ::SerialWorkList::WorkResult _initOreUIDataProviderManager();

    MCNAPI ::SerialWorkList::WorkResult _initOreUIRendering();

    MCNAPI ::SerialWorkList::WorkResult _initOreUISystem(std::shared_ptr<MinecraftGame::InitContext>);

    MCNAPI ::SerialWorkList::WorkResult _initOreUIViewsCoordinator();

    MCNAPI ::SerialWorkList::WorkResult _initPacks();

    MCNAPI ::SerialWorkList::WorkResult _initPartySystem();

    MCNAPI void _initPerMachineOptionObservers();

    MCNAPI void _initPerUserOptionObservers(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&);

    MCNAPI ::SerialWorkList::WorkResult _initPostA();

    MCNAPI ::SerialWorkList::WorkResult _initPostB();

    MCNAPI ::SerialWorkList::WorkResult _initPostC();

    MCNAPI ::SerialWorkList::WorkResult _initPostE();

    MCNAPI ::SerialWorkList::WorkResult _initPostFontAsync();

    MCNAPI ::SerialWorkList::WorkResult _initPreCacheOutOfGameViews();

    MCNAPI ::SerialWorkList::WorkResult _initPrimaryClientComplete(std::shared_ptr<MinecraftGame::InitContext>);

    MCNAPI ::SerialWorkList::WorkResult _initPrimaryIdentity();

    MCNAPI ::SerialWorkList::WorkResult _initProgressTips();

    MCNAPI ::SerialWorkList::WorkResult _initPushAlwaysActiveScreen();

    MCNAPI ::SerialWorkList::WorkResult _initRealmsSystem();

    MCNAPI ::SerialWorkList::WorkResult _initRepopulateLevelInfoCache();

    MCNAPI ::SerialWorkList::WorkResult _initResourceLoader();

    MCNAPI void _initServicesManager();

    MCNAPI ::SerialWorkList::WorkResult _initSocialSystem();

    MCNAPI ::SerialWorkList::WorkResult _initStep1();

    MCNAPI ::SerialWorkList::WorkResult _initStep2();

    MCNAPI ::SerialWorkList::WorkResult _initStep2A();

    MCNAPI ::SerialWorkList::WorkResult _initStep2B();

    MCNAPI ::SerialWorkList::WorkResult _initStep3();

    MCNAPI ::SerialWorkList::WorkResult _initStep5();

    MCNAPI ::SerialWorkList::WorkResult _initStorageMigration();

    MCNAPI ::SerialWorkList::WorkResult _initTTS();

    MCNAPI ::SerialWorkList::WorkResult _initTestClientInterface();

    MCNAPI ::SerialWorkList::WorkResult _initTimePlayedNotifier();

    MCNAPI ::SerialWorkList::WorkResult _initTriggerSignIn();

    MCNAPI ::SerialWorkList::WorkResult _initUILoadAsyncWait();

    MCNAPI ::SerialWorkList::WorkResult _initUpdateAppLaunchedCount();

    MCNAPI ::SerialWorkList::WorkResult _initUpdateFontsBasedOffOfOverrideEnable();

    MCNAPI ::SerialWorkList::WorkResult _initUser();

    MCNAPI ::SerialWorkList::WorkResult _initUserComplete();

    MCNAPI ::SerialWorkList::WorkResult _initWaitForContentManager();

    MCNAPI ::SerialWorkList::WorkResult _initWaitForDefaultFontsToLoad();

    MCNAPI ::SerialWorkList::WorkResult _initWaitForDiscoveryService();

    MCNAPI ::SerialWorkList::WorkResult _initWaitForEntitlementCacheLoad();

    MCNAPI ::SerialWorkList::WorkResult _initWaitForFontMetadataToLoad();

    MCNAPI ::SerialWorkList::WorkResult _initWaitForFrameBuilder();

    MCNAPI ::SerialWorkList::WorkResult _initWaitForInitialServicePacks();

    MCNAPI ::SerialWorkList::WorkResult _initWaitForLocalization();

    MCNAPI ::SerialWorkList::WorkResult _initWaitForMainMenuResources();

    MCNAPI ::SerialWorkList::WorkResult _initWaitForOfferLicense();

    MCNAPI ::SerialWorkList::WorkResult _initWaitForOfferRepo();

    MCNAPI ::SerialWorkList::WorkResult _initWaitForOreUIAssets() const;

    MCNAPI ::SerialWorkList::WorkResult _initWaitForPrimaryUser();

    MCNAPI ::SerialWorkList::WorkResult _initWaitForRepopulateLevelInfoCache();

    MCNAPI ::SerialWorkList::WorkResult _initWaitForResourceRepository();

    MCNAPI ::SerialWorkList::WorkResult _initWaitForSkinRepo();

    MCNAPI ::SerialWorkList::WorkResult _initWaitForWorldTemplateManager();

    MCNAPI ::SerialWorkList::WorkResult _initWorldSystem();

    MCNAPI ::SerialWorkList::WorkResult _initializeFrameBuilder();

    MCNAPI bool _isGameplayPaused();

    MCNAPI void _joinMultiplayerAfterTransportLayerDetermined(
        ::Social::GameConnectionInfo,
        bool,
        std::string const&,
        std::string const&,
        ::NetworkType,
        ::PlayerJoinWorldContext,
        ::TransportLayer
    );

    MCNAPI ::Bedrock::Threading::Async<void> _joinMultiplayerGame(
        ::Social::MultiplayerGameInfo const&,
        std::string const&,
        ::PlayerJoinWorldContext,
        ::OnlineSafetyDialogVisibility
    );

    MCNAPI ::SerialWorkList::WorkResult _loadGlobalResourcePacks();

    MCNAPI void _loadInitialPackResources(::ResourcePackManager&, bool);

    MCNAPI void _loadLanguageData();

    MCNAPI void _loadLastGlobalResourcePacksFromFile(bool);

    MCNAPI ::SerialWorkList::WorkResult _notifyOnFullVanillaPackOnStack();

    MCNAPI void _onActiveResourcePacksChanged(::ResourcePackManager&, bool);

    MCNAPI ::SerialWorkList::WorkResult _onDeviceRestoreFinish();

    MCNAPI void _onEntitlementsChanged();

    MCNAPI void _onEntitlementsChangedNotifyUI();

    MCNAPI void _onInitRemoteSystem(std::function<void()>);

    MCNAPI void _onPrimaryUserConnectComplete(::Social::UserPlatformConnectionResult, bool, bool);

    MCNAPI ::SerialWorkList::WorkResult _onResumeBegin();

    MCNAPI ::SerialWorkList::WorkResult _onResumeFinish();

    MCNAPI ::SerialWorkList::WorkResult _onResumeHttp();

    MCNAPI ::SerialWorkList::WorkResult _onResumePrimaryClient();

    MCNAPI ::SerialWorkList::WorkResult _onResumeQueueFontReloadTextures();

    MCNAPI ::SerialWorkList::WorkResult _onResumeQueueReloadActors();

    MCNAPI ::SerialWorkList::WorkResult _onResumeQueueReloadAnimation();

    MCNAPI ::SerialWorkList::WorkResult _onResumeQueueReloadParticleEffects();

    MCNAPI ::SerialWorkList::WorkResult _onResumeQueueReloadTextures();

    MCNAPI ::SerialWorkList::WorkResult _onResumeQueueReloadTexturesAtlas();

    MCNAPI ::SerialWorkList::WorkResult _onResumeReloadDefaultLighting();

    MCNAPI ::SerialWorkList::WorkResult _onResumeRestartServices();

    MCNAPI ::SerialWorkList::WorkResult _onResumeWaitFontReloadTextures();

    MCNAPI ::SerialWorkList::WorkResult _onResumeWaitPreviousResourceLoads();

    MCNAPI ::SerialWorkList::WorkResult _onResumeWaitReloadActors();

    MCNAPI ::SerialWorkList::WorkResult _onResumeWaitReloadAnimation();

    MCNAPI ::SerialWorkList::WorkResult _onResumeWaitReloadParticleEffects();

    MCNAPI ::SerialWorkList::WorkResult _onResumeWaitReloadTextures();

    MCNAPI ::SerialWorkList::WorkResult _onResumeWaitReloadTexturesAtlas();

    MCNAPI void _onSplitScreenChanged();

    MCNAPI void _onTTSOptionChanged();

    MCNAPI void _onTTSOptionChanged(bool);

    MCNAPI void _onTextureAtlasStatus(::TextureAtlasStatus const&);

    MCNAPI void _onUserSigninXboxLive(uint);

    MCNAPI void _performNetworkReadyActions();

    MCNAPI void _preCacheOutOfGameViews();

    MCNAPI void _recomputeResolution();

    MCNAPI void _registerClientOptionObserver(::SubClientId const, ::Option*, std::function<void(const Option&)>);

    MCNAPI void _registerPrimaryUserOptionLock(::Option*, std::function<void(bool&)>);

    MCNAPI void _registerPrimaryUserOptionObserver(::Option*, std::function<void(const Option&)>);

    MCNAPI void _reloadLightingTextures();

    MCNAPI void _removePendingSubclients();

    MCNAPI void _setupRenderer();

    MCNAPI void _terminateRenderer();

    MCNAPI void _tryFireResourceLoadSession();

    MCNAPI void _unregisterOnInitUriListeners();

    MCNAPI void _update();

    MCNAPI void _updateBiomeBlendingAndAtmosphericScattering(float, float, ::DimensionType);

    MCNAPI void _updateDeferredLightingPresets();

    MCNAPI void _updateLightingModel();

    MCNAPI void _updateProfilerLite();

    MCNAPI void _updateTextureAtlasPBRData(::TextureAtlas const&, bool);

    MCNAPI ::SerialWorkList::WorkResult _waitForAudio();

    MCNAPI ::SerialWorkList::WorkResult _waitForFileSystemSpaceTracking();

    MCNAPI ::SerialWorkList::WorkResult _waitForLoadRendererAssets();

    MCNAPI ::SerialWorkList::WorkResult _waitForStorageMigration();

    MCNAPI void adjustClientsUISizeAndScale();

    MCNAPI void cleanReloadMaterials();

    MCNAPI void doInitializationCompleteWork(std::function<void()>);

    MCNAPI void endFrame();

    MCNAPI ::Bedrock::NonOwnerPointer<ServerNetworkHandler> getServerNetworkHandler();

    MCNAPI void handleShowUpsellScreen(bool);

    MCNAPI void initEventing();

    MCNAPI bool isInEDUMultiplayerSession();

    MCNAPI bool isServerVisible();

    MCNAPI void onTick();

    MCNAPI bool primaryLevelExists() const;

    MCNAPI void startFrame();

    MCNAPI void tickInput();

    MCNAPI bool tryGetIdForNewSubClient(int, ::SubClientId&, bool const) const;

    MCNAPI void updateAudio(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&, ::Timer const&);

    MCNAPI void updateGraphics(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&, ::Timer const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MinecraftGameArguments&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initialize();

    MCNAPI void $update();

    MCNAPI bool $stop();

    MCNAPI void $processActivationArguments(::Bedrock::ActivationArguments const&);

    MCNAPI ::AppSystemRegistry& $getAppSystemRegistry();

    MCNAPI ::EntityContext& $getEntity() const;

    MCNAPI void $logoffAllSubclients();

    MCNAPI void $buildTreatmentPackStack(bool) const;

    MCNAPI void $queueSubclientRemoval(::SubClientId);

    MCNAPI std::shared_ptr<mce::TextureGroup> $getTextureGroup() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>> $getResourceLoadManager();

    MCNAPI void $handleReloadUIDefinitions();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<IUIDefRepository>> $getUIDefRepo() const;

    MCNAPI bool $canActivateKeyboard();

    MCNAPI void $releaseClientSubId(::SubClientId);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentTierManager>> $getContentTierManager() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<DevConsoleLogger>> $getDevConsoleLogger() const;

    MCNAPI void $setDisableInputForAllOtherClients(int, bool);

    MCNAPI ::DeferredTasksManager<DeferredTaskCategory>& $getDeferredTasks();

    MCNAPI bool $shouldShowRatingsPrompt() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ServerInstanceEventCoordinator>>
    $getServerInstanceEventCoordinator();

    MCNAPI bool $isHostingLocalDedicatedServer() const;

    MCNAPI bool $isLeaveGameDone() const;

    MCNAPI void $destroyGame();

    MCNAPI bool $isInGame() const;

    MCNAPI void $startLeaveGame();

    MCNAPI bool $isAudioInitialized() const;

    MCNAPI ::MusicManager const* $getMusicManager() const;

    MCNAPI ::MusicManager* $getMusicManagerNonConst() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<SoundEngine>> $getSoundEngine() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ITextBoxController>> $getTextBoxController();

    MCNAPI void $setIsInGame(bool);

    MCNAPI void $createClientItemRegistry();

    MCNAPI bool $hasNetworkPrivileges(bool);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<IThirdPartyServerRepository>> $getThirdPartyServerRepository();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const IThirdPartyServerRepository>>
    $getThirdPartyServerRepository() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ControllerIDtoClientMap>> $retrieveCIDToClientMap();

    MCNAPI std::map<SubClientId, std::shared_ptr<IClientInstance>> const& $getClientInstanceMap() const;

    MCNAPI void $joinMultiplayerWithAddress(
        ::Social::GameConnectionInfo,
        bool,
        std::string const&,
        std::string const&,
        ::NetworkType,
        std::shared_ptr<bool>,
        ::PlayerJoinWorldContext
    );

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<IOfferRepository>> $getOfferRepository() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<TrialManager>> $getTrialManager() const;

    MCNAPI ::InputMode $getCurrentInputMode() const;

    MCNAPI void $handleInputPaneHidden();

    MCNAPI bool $getSuspended() const;

    MCNAPI bool $isResuming() const;

    MCNAPI ulong $getClientInstanceCount() const;

    MCNAPI void $setProfilerIsOn(bool);

    MCNAPI ::LocalPlayer const* $getPrimaryLocalPlayer() const;

    MCNAPI ::LocalPlayer* $getPrimaryLocalPlayer();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> $getUserManager() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const IClientInstance>> $getPrimaryClientInstance() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> $getPrimaryClientInstance();

    MCNAPI ::ItemRegistryRef $getClientItemRegistry() const;

    MCNAPI bool $isPrimaryClientInstanceReady() const;

    MCNAPI void $ensureAllClientsAreLeaving() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ClientNetworkSystem>> $getClientNetworkSystemPtr();

    MCNAPI ::ClientNetworkSystem const& $getClientNetworkSystem() const;

    MCNAPI ::ClientNetworkSystem& $getClientNetworkSystem();

    MCNAPI bool $hasAllValidCrossPlatformSkin() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const NewPlayerSystem>> $getNewPlayerSystem() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<NewPlayerSystem>> $getNewPlayerSystem();

    MCNAPI void $createAndUploadWorldToRealm(
        std::string const&,
        std::string const&,
        ::ContentIdentity const&,
        ::LevelSettings const&,
        ::Realms::World,
        std::function<void(Realms::World)>
    );

    MCNAPI ::ILevelListCache& $getLevelListCache();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FilePathManager>> $getFilePathManager();

    MCNAPI void $setUseFontOverrides(bool);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const FontRepository>> $getFontRepository() const;

    MCNAPI void $onClientLevelExit(::IClientInstance&, uint);

    MCNAPI bool $isLocalPlayer(::ActorUniqueID const&) const;

    MCNAPI ::IMinecraftEventing& $getEventing() const;

    MCNAPI void $reloadAnimationAndGeometryData(bool);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<GeometryGroup>> $getGeometryGroup() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<BlockCullingGroup>> $getBlockCullingGroup() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ClientBlockPipeline::SchematicsRepository>>
    $getSchematicsRepository() const;

    MCNAPI ::ParticleEffectGroup& $getParticleEffectGroup() const;

    MCNAPI ::DeferredLighting& $getDeferredLighting() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>>
    $getMultiplayerServiceManager() const;

    MCNAPI ::IResourcePackRepository& $getResourcePackRepository() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> $getKeyProvider() const;

    MCNAPI ::ResourcePackManager& $getResourcePackManager() const;

    MCNAPI ::ResourcePackManager& $getServerResourcePackManager();

    MCNAPI ::PackManifestFactory& $getPackManifestFactory();

    MCNAPI ::PlayerMessagingService& $getPlayerMessagingService();

    MCNAPI std::shared_ptr<SkinRepository> $getSkinRepository() const;

    MCNAPI ::PersonaRepository& $getPersonaRepository() const;

    MCNAPI ::MarketplaceServicesManager& $getMarketplaceServicesManager() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<mce::TextureGroup>> $getStoreCacheTextures() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<MinecraftGraphics>> $getMinecraftGraphics();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<IUIRepository>> $getUIRepository() const;

    MCNAPI bool $isPrimaryLevelCrossPlatformMultiplayer() const;

    MCNAPI bool $isPrimaryLevelMultiplayer() const;

    MCNAPI std::string $getMultiplayerDisabledTextTitle(::MultiplayerLockedContext) const;

    MCNAPI std::string $getMultiplayerDisabledTextBody(::MultiplayerLockedContext) const;

    MCNAPI void $setRenderingSize(int, int);

    MCNAPI void $recalculateScene();

    MCNAPI void $setUISizeAndScale(int, int, float);

    MCNAPI bool $isReadyToRender() const;

    MCNAPI void $onDimensionChanged();

    MCNAPI void $setLeaveGameInProgressAsReadyToContinue();

    MCNAPI void $onClientCreatedLevel(::IClientInstance&);

    MCNAPI ulong $generateClientId(bool, bool&, ulong, std::shared_ptr<Social::User>);

    MCNAPI std::weak_ptr<RealmsAPI> $getRealms();

    MCNAPI ::Realms::ContentService& $getRealmsContentService();

    MCNAPI bool $getMouseGrabbed() const;

    MCNAPI void $navigateToPlayScreenFriendsTab();

    MCNAPI bool $isInServer() const;

    MCNAPI bool $isInRealm() const;

    MCNAPI bool $isShowingLoadingScreen() const;

    MCNAPI bool $isRenderingLoadingScreen() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<StoreCatalogRepository>> $getStoreCatalog() const;

    MCNAPI ::ServiceDrivenImageRepository& $getServiceImageRepository() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<LibraryRepository>> $getLibraryRepository() const;

    MCNAPI ::GameRenderer& $getGameRenderer() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<TextureAtlas>> $getTextureAtlas();

    MCNAPI bool $hasActorResourceDefinitionGroup() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const ActorResourceDefinitionGroup>>
    $getActorResourceDefinitionGroup() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ActorResourceDefinitionGroup>>
    $getActorResourceDefinitionGroupMutable();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<RenderControllerGroup>> $getRenderControllerGroup();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const RenderControllerGroup>> $getRenderControllerGroup() const;

    MCNAPI int $getMaxPlayerCount() const;

    MCNAPI ::Bedrock::Threading::Async<Core::PathBuffer<std::string>> $requestScreenshot(::ScreenshotOptions&);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>> $getOreUIResourceAllowList();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<DateManager>> $getDateManager() const;

    MCNAPI ::PixelCalc const& $getDpadScale() const;

    MCNAPI void $setKeyboardForcedHeight(float, bool);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> $getMainSceneStack();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const ISceneStack>> $getMainSceneStack() const;

    MCNAPI ::OreUI::Router& $getUIRouter();

    MCNAPI ::OreUI::DataProviderManager_DEPRECATED& $getDataProviderManager();

    MCNAPI uint $getUIRenderClientMask() const;

    MCNAPI bool $useMinecraftVersionOfXBLUI() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<PersonaService>> $getPersonaService() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<GatheringManager>> $getGatheringManager() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ContentCatalogService>> $getContentCatalogService() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<FlightingService>> $getFlightingService() const;

    MCNAPI std::shared_ptr<FlightingService> $getFlightingServicePtr() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const TreatmentPackDownloadMonitor>>
    $getTreatmentPackDownloadMonitor() const;

    MCNAPI ::SceneFactory& $getPrimarySceneFactory() const;

    MCNAPI ::Bedrock::NonOwnerPointer<MinecraftInputHandler> $getInput() const;

    MCNAPI void $grabMouse();

    MCNAPI void $releaseMouse();

    MCNAPI void $refocusMouse(bool);

    MCNAPI void $setMouseType(::Bedrock::Input::PointerType);

    MCNAPI void $play(std::string const&, ::Vec3 const&, float, float);

    MCNAPI void $playUI(std::string const&, float, float);

    MCNAPI void $fadeOutMusic();

    MCNAPI void $onPlayerLoaded(::IClientInstance&, ::Player&);

    MCNAPI bool $checkForPiracy() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<CubemapBackgroundResources>> $getCubemapBackgroundResources();

    MCNAPI void $setAppWillTerminate(bool);

    MCNAPI ::ServerInstance* $getServerInstance();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ServerInstance>> $getServerInstanceNonOwnPtr();

    MCNAPI void $setLaunchedFromLegacyVersion(bool);

    MCNAPI ::UIMeasureStrategy& $getUIMeasureStrategy();

    MCNAPI void $registerUpsellScreen();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>> $getWorldTemplateManager() const;

    MCNAPI ::World::WorldSystem& $getWorldSystem() const;

    MCNAPI bool $isWorldSystemReady() const;

    MCNAPI ::Social::SocialSystem& $getSocialSystem() const;

    MCNAPI ::Bedrock::NonOwnerPointer<Parties::PartySystem> $getPartySystem() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Progress::ProgressTips>> $getUIProgressTips() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::RealmsSystem>> $getRealmsSystem() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>> $getEntitlementManager();

    MCNAPI ::IDlcValidation& $getDlcValidation();

    MCNAPI ::ServicesManager& $getServicesManager();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<SunsettingManager>> $getSunsettingManager();

    MCNAPI void $pauseContentDownloads();

    MCNAPI void $resumeContentDownloads();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<IExternalServerFile>> $getExternalServer() const;

    MCNAPI bool $isStartingGame() const;

    MCNAPI bool $isSplitscreenJoinEnabled() const;

    MCNAPI bool $canAddSplitscreenSubClient(int) const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<LevelLoader>> $getLevelLoader();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ExternalContentManager>> $getContentManager();

    MCNAPI std::shared_ptr<IClientInstance> $tryGetClientInstanceFromPlayerUUID(::mce::UUID const&) const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<IContentAccessibilityProvider>> $getAccessibilityProvider();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentAccessibilityProvider>>
    $getAccessibilityProvider() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ContentAcquisition>> $getContentAcquisition() const;

    MCNAPI void $onGameEventNotification(::ui::GameEventNotification);

    MCNAPI void $setRealmsLoadingLink(bool);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<IApp>> $getApp();

    MCNAPI void $clearCache();

    MCNAPI ::IContentManager& $getResourceContentManager();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const EmoticonManager>> $getEmoticonManager() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<TextToIconMapper>> $getTextToIconMapper();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const TextToIconMapper>> $getTextToIconMapper() const;

    MCNAPI void $onPrimaryUserReconnect(::Social::UserPlatformConnectionResult, bool);

    MCNAPI void $setSmoothFontStyle();

    MCNAPI void $setUIFontStyle();

    MCNAPI void $copyInternalSettingsFolderToExternalLocation() const;

    MCNAPI void $joinRealmFromInvite(::Realms::World const&);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::RealmsServices>> $getRealmsServices();

    MCNAPI std::weak_ptr<ClubsService> $getClubsService();

    MCNAPI std::shared_ptr<Realms::GenericRequestServiceHandler> $getGenericRealmsService();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::SubscriptionService>> $getRealmsSubscriptionService();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ActiveDirectoryIdentity>> $getActiveDirectoryIdentity();

    MCNAPI ::PackSourceFactory& $getPackSourceFactory() const;

    MCNAPI void $displayActiveDirectoryLoginDialog();

    MCNAPI void $resetInput();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Social::PresenceManager>> $getPresenceManager();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<GuiData>> $getPrimaryGuiData();

    MCNAPI bool $isPrimaryUserSigninInProgress() const;

    MCNAPI void $setupCommandParser(::IClientInstance&);

    MCNAPI void $stopSound(std::string const&);

    MCNAPI void $stopSounds();

    MCNAPI ::PackDownloadManager& $getPackDownloadManager();

    MCNAPI ::Bedrock::NonOwnerPointer<LinkedAssetValidator> $getLinkedAssetValidator() const;

    MCNAPI void $addSubClientInstanceAndAssociateToUser(int);

    MCNAPI void $forEachClientInstance(std::function<void(IClientInstance&)>);

    MCNAPI bool $isInitialized() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<SeasonsRenderer>> $getSeasonsRenderer();

    MCNAPI std::shared_ptr<ActorAnimationGroup> $getActorAnimationGroup() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ActorAnimationControllerGroup>>
    $getActorAnimationControllerGroup() const;

    MCNAPI bool $isMultiplayerServiceManagerReady() const;

    MCNAPI void $doPrimaryClientReadyWork(std::function<void()>);

    MCNAPI void $doUserManagerReadyWork(std::function<void()>);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ScreenshotRecorder>> $getScreenshotRecorder();

    MCNAPI ::Bedrock::NonOwnerPointer<ContentLogFileEndPoint> const $getContentFileLogEndPoint() const;

    MCNAPI ::Bedrock::NonOwnerPointer<EDUSystems> $getEDUSystems();

    MCNAPI ::Bedrock::NonOwnerPointer<const EDUSystems> $getEDUSystems() const;

    MCNAPI std::shared_ptr<const OptionRegistry> $getPrimaryUserOptions() const;

    MCNAPI std::shared_ptr<OptionRegistry> $getPrimaryUserOptions();

    MCNAPI ::Bedrock::PubSub::Subscription $registerSplitScreenChangedListener(std::function<void(uchar)>) const;

    MCNAPI uchar $getSplitScreenCount() const;

    MCNAPI ::IGameModuleApp& $getGameModule();

    MCNAPI bool $isMusicEnabled() const;

    MCNAPI void $queueCustomMusic(std::string const&, float, float, ::MusicRepeatMode);

    MCNAPI void $playCustomMusic(std::string const&, float, float, ::MusicRepeatMode);

    MCNAPI void $stopCustomMusic(float);

    MCNAPI void $setMusicCommandVolumeMultiplier(float);

    MCNAPI float $calculateScreenSizeToResolutionScalar(int const, int const) const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const GlobalResourcesCrashRecovery>>
    $GetGlobalResourcesCrashRecovery() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>> $getLevelDbEnv();

    MCNAPI ::Bedrock::NonOwnerPointer<ChunkSource> $getClientGenChunkSource(::DimensionType const&);

    MCNAPI bool $isEditorModeEnabled() const;

    MCNAPI void $setResetCallbackObject(::ResetCallbackObject*);

    MCNAPI void $resetThreadCallbacks();

    MCNAPI void $shutdownServer();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ProfanityContext>> $getProfanityContext();

    MCNAPI double $getGameUpdateDurationInSeconds() const;

    MCNAPI void $audioEngineOn();

    MCNAPI void $audioEngineOff();

    MCNAPI ::Bedrock::Threading::Async<void> $startLocalServerAsync(
        std::string const&,
        std::string const&,
        ::ContentIdentity const&,
        ::LevelSettings const&,
        ::StartIntent
    );

    MCNAPI bool $canStartLocalServer() const;

    MCNAPI void $onLowMemory(::LowMemorySeverity);

    MCNAPI void $onAppFocusLost();

    MCNAPI void $onAppFocusGained();

    MCNAPI void $onAppPaused();

    MCNAPI void $onAppUnpaused();

    MCNAPI void $setReconnectionCookie(
        std::optional<std::variant<
            GameConnectionInfoEx,
            Social::MultiplayerGameInfo,
            ExperienceJoinRequestInfo,
            Realms::RealmId>> const&
    );

    MCNAPI std::optional<
        std::variant<GameConnectionInfoEx, Social::MultiplayerGameInfo, ExperienceJoinRequestInfo, Realms::RealmId>>
    $getReconnectionCookie();

    MCNAPI void $onAppPreSuspended();

    MCNAPI void $onAppSuspended();

    MCNAPI void $onAppResumed();

    MCNAPI void $onDeviceLost();

    MCNAPI void $onAppSurfaceCreated();

    MCNAPI void $onAppSurfaceDestroyed();

    MCNAPI void $onOperationModeChanged(::OperationMode);

    MCNAPI void $playerListChanged();

    MCNAPI void $onLevelDestruction(std::string const&);

    MCNAPI void $setWorldTransferAction(
        std::variant<
            LocalWorldTransferActionFunc,
            ExternalWorldTransferActionFunc,
            RealmTransferActionFunc,
            std::monostate>&&
    );

    MCNAPI std::variant<
        LocalWorldTransferActionFunc,
        ExternalWorldTransferActionFunc,
        RealmTransferActionFunc,
        std::monostate> const&
    $getWorldTransferAction() const;

    MCNAPI ::Bedrock::NonOwnerPointer<WorldTransferAgent> const $getWorldTransferAgent() const;

    MCNAPI void $setIsWorldTransferInProgress(bool);

    MCNAPI bool $isWorldTransferInProgress() const;

    MCNAPI void $requestLeaveGame(bool, bool);

    MCNAPI void $requestLeaveThenJoinFriendsWorld(std::string_view);

    MCNAPI void $requestLeaveGameWithWorldThumbnail();

    MCNAPI void $requestLeaveGameWithWorldThumbnailThenJoinFriendsWorld(std::string_view);

    MCNAPI void $joinRealmsGame(::Realms::World const&, ::Social::GameConnectionInfo const&, ::PlayerJoinWorldContext);

    MCNAPI void $joinRealmFromConnectLink(::Realms::World const&, ::PlayerJoinWorldContext);

    MCNAPI void $joinRealm(::Realms::World const&, ::IMinecraftEventing::RealmConnectionFlow, ::PlayerJoinWorldContext);

    MCNAPI ::Bedrock::Threading::Async<void> $joinMultiplayerGame(
        ::Social::MultiplayerGameInfo const&,
        ::PlayerJoinWorldContext,
        ::OnlineSafetyDialogVisibility
    );

    MCNAPI void $joinRemoteServerWithAddress(
        ::Social::GameConnectionInfo,
        std::string const&,
        std::string const&,
        ::NetworkType,
        std::shared_ptr<bool>,
        ::PlayerJoinWorldContext
    );

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Minecraft>> $getPrimaryMinecraft();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Automation::AutomationClient>> $getAutomationClient() const;

    MCNAPI bool $isDedicatedServer() const;

    MCNAPI bool $isEduMode() const;

    MCNAPI void $onNetworkMaxPlayersChanged(uint);

    MCNAPI ::IGameModuleShared& $getGameModuleShared();

    MCNAPI void $requestServerShutdown();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver>> $getFileArchiver() const;

    MCNAPI bool $requestInGamePause(::SubClientId const&, bool);

    MCNAPI void $onActiveResourcePacksChanged(::ResourcePackManager&);

    MCNAPI bool $onFullPackStackInvalid();

    MCNAPI void $onLanguageSubpacksChanged();

    MCNAPI void $onBaseGamePackDownloadComplete();

    MCNAPI void $onPushNotificationReceived(::PushNotificationMessage const&);

    MCNAPI void $muteAudio();

    MCNAPI void $unMuteAudio();

    MCNAPI void $onForceCloudSave();

    MCNAPI void $onOptionsLoadBegin();

    MCNAPI void $onOptionsLoadComplete();

    MCNAPI void $onLanguageChanged(std::string const&, bool);

    MCNAPI void $onLanguageKeywordsLoadedFromPack(::PackManifest const&);

    MCNAPI void $onLanguagesLoaded();

    MCNAPI std::unique_ptr<LocalServerLauncher::IGameInterface> $createGameInterface();

    MCNAPI std::unique_ptr<LocalServerLauncher::IServerInstanceBuilder> $createServerBuilder();

    MCNAPI std::unique_ptr<LocalServerLauncher::GameDependencies> $createGameDependencies();

    MCNAPI ::TaskGroup& $_getServerInitTaskGroup();

    MCNAPI bool $isMultiPlayerInitialized() const;

    MCNAPI bool $checkMultiPlayerPermission(std::optional<Social::MultiplayerServiceIdentifier>);

    MCNAPI bool $isPlayingLevel() const;

    MCNAPI void $initImpl();

    MCNAPI void $onNotify(::edu::auth::GenericCredentialsEvent<edu::auth::CredsLost> const&);

    MCNAPI void $onNotify(::edu::auth::CredentialsRefreshSuccess const&);

    MCNAPI void $onNotify(::edu::auth::CredentialsAcquired const&);

    MCNAPI void $completeServerStartup(
        std::shared_ptr<LocalServerLauncher::ServerInitData>,
        ::LocalServerLauncher::ServerLaunchResult&&
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
