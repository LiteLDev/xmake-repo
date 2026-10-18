#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/certificates/identity/edu/CredentialsObserver.h"
#include "mc/certificates/identity/edu/GenericCredentialsEvent.h"
#include "mc/client/events/OnlineSafetyDialogVisibility.h"
#include "mc/client/game/DeferredTaskCategory.h"
#include "mc/client/game/IMinecraftGame.h"
#include "mc/client/game/IMultiPlayerServices.h"
#include "mc/client/game/SerialWorkList.h"
#include "mc/client/game/StartIntent.h"
#include "mc/client/game/local_server_launcher/ILocalServerLauncherImpl.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/options/OptionsObserver.h"
#include "mc/client/renderer/texture/TextureAtlasStatus.h"
#include "mc/client/social/JoinGameStatus.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/common/App.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/application/LowMemorySeverity.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/OperationMode.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/DeferredTasksManager.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/PointerType.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/events/NetworkType.h"
#include "mc/locale/I18nObserver.h"
#include "mc/network/TransportLayer.h"
#include "mc/platform/MultiplayerLockedContext.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/resources/ResourcePackListener.h"
#include "mc/sound/MusicRepeatMode.h"
#include "mc/world/level/LevelListener.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryIdentity;
class ActorAnimationControllerGroup;
class ActorAnimationGroup;
class ActorResourceDefinitionGroup;
class AppSystemRegistry;
class BlockCullingGroup;
class ChunkSource;
class ClientInstance;
class ClientNetworkSystem;
class ClubsService;
class ContentAcquisition;
class ContentCatalogService;
class ContentIdentity;
class ContentLogFileEndPoint;
class CubemapBackgroundResources;
class DateManager;
class DeferredLighting;
class DevConsoleLogger;
class EDUSystems;
class EmoticonManager;
class EntityContext;
class ExternalContentManager;
class FileArchiver;
class FlightingService;
class FontRepository;
class GameModuleClient;
class GameRenderer;
class GatheringManager;
class GeometryGroup;
class GlobalResourcesCrashRecovery;
class GuiData;
class IApp;
class IClientDimensionExtensions;
class IClientInstance;
class IContentAccessibilityProvider;
class IContentKeyProvider;
class IContentManager;
class IContentTierManager;
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
class ItemRegistryRef;
class LatencyGraphDisplay;
class LevelDbEnv;
class LevelLoader;
class LevelSettings;
class LibraryRepository;
class LinkedAssetValidator;
class LocalPlayer;
class MarketplaceServicesManager;
class Minecraft;
class MinecraftGraphics;
class MinecraftInputHandler;
class MusicManager;
class NewPlayerSystem;
class Option;
class OptionRegistry;
class PackDownloadManager;
class PackManifest;
class PackManifestFactory;
class PackSourceFactory;
class ParticleEffectGroup;
class PersonaRepository;
class PersonaService;
class PixelCalc;
class Player;
class PlayerMessagingService;
class ProfanityContext;
class PushNotificationMessage;
class RealmsAPI;
class RenderControllerGroup;
class ResetCallbackObject;
class ResourceLoadManager;
class ResourcePackManager;
class ResourcePackStack;
class SceneFactory;
class ScreenshotRecorder;
class SeasonsRenderer;
class SerialWorkList;
class ServerInstance;
class ServerInstanceEventCoordinator;
class ServerNetworkHandler;
class ServiceDrivenImageRepository;
class ServicesManager;
class SkinRepository;
class SoundEngine;
class StoreCatalogRepository;
class SunsettingManager;
class TaskGroup;
class TextToIconMapper;
class TextureAtlas;
class Timer;
class TreatmentPackDownloadMonitor;
class TrialManager;
class UIMeasureStrategy;
class Vec3;
class WorldTemplateManager;
class WorldTransferAgent;
struct ActorUniqueID;
struct ControllerIDtoClientMap;
struct DimensionType;
struct ExperienceJoinRequestInfo;
struct ExternalWorldTransferActionFunc;
struct GameConnectionInfoEx;
struct LocalWorldTransferActionFunc;
struct MinecraftGameArguments;
struct PlayerJoinWorldContext;
struct RealmTransferActionFunc;
struct ScreenshotOptions;
namespace Automation { class AutomationClient; }
namespace Bedrock { class ActivationArguments; }
namespace Bedrock::PubSub { class Subscription; }
namespace ClientBlockPipeline { class SchematicsRepository; }
namespace Core { class FilePathManager; }
namespace LocalServerLauncher { class IGameInterface; }
namespace LocalServerLauncher { class IServerInstanceBuilder; }
namespace LocalServerLauncher { struct GameDependencies; }
namespace LocalServerLauncher { struct ServerInitData; }
namespace LocalServerLauncher { struct ServerLaunchResult; }
namespace LocalServerLauncher::Impl { struct AllDependencies; }
namespace OreUI { class DataProviderManager_DEPRECATED; }
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class Router; }
namespace Parties { class PartySystem; }
namespace Progress { class ProgressTips; }
namespace Realms { class ContentService; }
namespace Realms { class GenericRequestServiceHandler; }
namespace Realms { class RealmsServices; }
namespace Realms { class RealmsSystem; }
namespace Realms { class SubscriptionService; }
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace Social { class MultiplayerGameInfo; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class PresenceManager; }
namespace Social { class SocialSystem; }
namespace Social { class User; }
namespace World { class WorldSystem; }
namespace dragon::framerenderer { struct DebugParameters; }
namespace edu::auth { struct CredentialsAcquired; }
namespace edu::auth { struct CredentialsRefreshSuccess; }
namespace edu::auth { struct CredsLost; }
namespace mce { class TextureGroup; }
namespace mce { class UUID; }
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
#else // @header-generator platform
class MinecraftGame {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // MinecraftGame inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct FrameGapImpl;
#else // @header-generator platform
#endif // @header-generator platform
    struct InitContext;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct FrameGapImpl;
#endif // @header-generator platform
    // clang-format on

    // MinecraftGame inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class SurfaceState : int {
        Valid = 0,
        Lost  = 1,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class SuspendState : int {
        Suspending = 0,
        Suspended  = 1,
        Resuming   = 2,
        Running    = 3,
    };
#else // @header-generator platform
    enum class SuspendState : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class SuspendState : int {
        Suspending = 0,
        Suspended  = 1,
        Resuming   = 2,
        Running    = 3,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class DeviceLostState : int {
        Valid      = 0,
        Lost       = 1,
        Recovering = 2,
    };
#else // @header-generator platform
    enum class DeviceLostState : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class DeviceLostState : int {
        Valid      = 0,
        Lost       = 1,
        Recovering = 2,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class SurfaceState : int {
        Valid = 0,
        Lost  = 1,
    };
#else // @header-generator platform
    enum class SurfaceState : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class WorkList : uint64 {
        AppInitialize = 0,
        AppResume     = 1,
        AppDeviceLost = 2,
        COUNT         = 3,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class WorkList : uint64 {
        AppInitialize = 0,
        AppResume     = 1,
        AppDeviceLost = 2,
        Count         = 3,
    };
#else // @header-generator platform
    enum class WorkList : uint64 {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct FrameGapImpl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mFrameGapStopwatch;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct InitContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk1f2a2b;
        ::ll::UntypedStorage<8, 16> mUnkc9621b;
        // NOLINTEND
#else // @header-generator platform
    struct InitContext {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    public:
        // prevent constructor by default
        InitContext& operator=(InitContext const&);
        InitContext(InitContext const&);
        InitContext();
    };

    struct FrameGapImpl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk2970b7;
        // NOLINTEND

    public:
        // prevent constructor by default
        FrameGapImpl& operator=(FrameGapImpl const&);
        FrameGapImpl(FrameGapImpl const&);
        FrameGapImpl();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk31cb40;
    ::ll::UntypedStorage<8, 64>  mUnk26362f;
    ::ll::UntypedStorage<8, 8>   mUnk5833c3;
    ::ll::UntypedStorage<8, 8>   mUnk707e20;
    ::ll::UntypedStorage<8, 8>   mUnk77bae9;
    ::ll::UntypedStorage<8, 8>   mUnk39dbf1;
    ::ll::UntypedStorage<8, 8>   mUnkb9a1e2;
    ::ll::UntypedStorage<8, 8>   mUnka617fc;
    ::ll::UntypedStorage<8, 8>   mUnk847dc8;
    ::ll::UntypedStorage<8, 8>   mUnk1a8ba7;
    ::ll::UntypedStorage<8, 8>   mUnk8c1a51;
    ::ll::UntypedStorage<8, 8>   mUnkdcd0a8;
    ::ll::UntypedStorage<8, 8>   mUnk27a9f1;
    ::ll::UntypedStorage<8, 8>   mUnk6449d7;
    ::ll::UntypedStorage<8, 8>   mUnk18dd91;
    ::ll::UntypedStorage<8, 8>   mUnke812cf;
    ::ll::UntypedStorage<8, 8>   mUnk102e50;
    ::ll::UntypedStorage<8, 8>   mUnkd0fa73;
    ::ll::UntypedStorage<8, 8>   mUnk30cf6e;
    ::ll::UntypedStorage<8, 8>   mUnkf2bb2d;
    ::ll::UntypedStorage<1, 1>   mUnk73dd14;
    ::ll::UntypedStorage<1, 1>   mUnk8622d0;
    ::ll::UntypedStorage<8, 16>  mUnke052b6;
    ::ll::UntypedStorage<8, 8>   mUnk79ddba;
    ::ll::UntypedStorage<8, 8>   mUnkf926be;
    ::ll::UntypedStorage<8, 8>   mUnk37afa1;
    ::ll::UntypedStorage<8, 8>   mUnk68dc1e;
    ::ll::UntypedStorage<8, 16>  mUnka2869f;
    ::ll::UntypedStorage<8, 8>   mUnkde38fc;
    ::ll::UntypedStorage<8, 8>   mUnk9a183a;
    ::ll::UntypedStorage<8, 8>   mUnk46def3;
    ::ll::UntypedStorage<8, 8>   mUnkc587de;
    ::ll::UntypedStorage<8, 8>   mUnk4a17b1;
    ::ll::UntypedStorage<8, 8>   mUnk812bde;
    ::ll::UntypedStorage<8, 32>  mUnkb501e6;
    ::ll::UntypedStorage<8, 8>   mUnk8f8079;
    ::ll::UntypedStorage<8, 8>   mUnkcd6826;
    ::ll::UntypedStorage<8, 16>  mUnk5849e3;
    ::ll::UntypedStorage<8, 16>  mUnk336443;
    ::ll::UntypedStorage<1, 1>   mUnkb6d61e;
    ::ll::UntypedStorage<8, 16>  mUnkd61d74;
    ::ll::UntypedStorage<4, 4>   mUnkda7647;
    ::ll::UntypedStorage<4, 4>   mUnk730c95;
    ::ll::UntypedStorage<1, 1>   mUnk391e21;
    ::ll::UntypedStorage<4, 4>   mUnk859534;
    ::ll::UntypedStorage<8, 8>   mUnk8b857f;
    ::ll::UntypedStorage<8, 8>   mUnkeb3d6b;
    ::ll::UntypedStorage<8, 16>  mUnk8598e2;
    ::ll::UntypedStorage<8, 32>  mUnk29d8a4;
    ::ll::UntypedStorage<8, 16>  mUnk8120e2;
    ::ll::UntypedStorage<1, 1>   mUnkbf9e1f;
    ::ll::UntypedStorage<1, 1>   mUnkf1c360;
    ::ll::UntypedStorage<8, 8>   mUnkcc0494;
    ::ll::UntypedStorage<8, 8>   mUnkc32677;
    ::ll::UntypedStorage<8, 8>   mUnkfb38cb;
    ::ll::UntypedStorage<1, 1>   mUnk2d6ae9;
    ::ll::UntypedStorage<1, 1>   mUnk549470;
    ::ll::UntypedStorage<4, 4>   mUnkdaeaa4;
    ::ll::UntypedStorage<4, 4>   mUnk978a98;
    ::ll::UntypedStorage<1, 1>   mUnk7186c4;
    ::ll::UntypedStorage<1, 1>   mUnkeeb15c;
    ::ll::UntypedStorage<1, 1>   mUnk21487c;
    ::ll::UntypedStorage<1, 1>   mUnk7f0094;
    ::ll::UntypedStorage<1, 1>   mUnk1f7e9d;
    ::ll::UntypedStorage<1, 1>   mUnk71b5c7;
    ::ll::UntypedStorage<8, 32>  mUnk570845;
    ::ll::UntypedStorage<4, 4>   mUnk785de7;
    ::ll::UntypedStorage<8, 416> mUnke04be5;
    ::ll::UntypedStorage<1, 1>   mUnk19eccc;
    ::ll::UntypedStorage<4, 4>   mUnk97e7f8;
    ::ll::UntypedStorage<8, 16>  mUnk61cb9f;
    ::ll::UntypedStorage<1, 1>   mUnk3ebcf8;
    ::ll::UntypedStorage<1, 1>   mUnk39e2bc;
    ::ll::UntypedStorage<1, 1>   mUnked6187;
    ::ll::UntypedStorage<1, 1>   mUnk9e21e6;
    ::ll::UntypedStorage<1, 1>   mUnkfed6cd;
    ::ll::UntypedStorage<1, 1>   mUnk41cbb8;
    ::ll::UntypedStorage<4, 4>   mUnk9b7c5f;
    ::ll::UntypedStorage<1, 1>   mUnkc8c391;
    ::ll::UntypedStorage<1, 1>   mUnka7b938;
    ::ll::UntypedStorage<1, 1>   mUnk5907ad;
    ::ll::UntypedStorage<1, 1>   mUnk6f26ef;
    ::ll::UntypedStorage<8, 56>  mUnk2fd9a7;
    ::ll::UntypedStorage<8, 8>   mUnke44711;
    ::ll::UntypedStorage<8, 80>  mUnk27b53a;
    ::ll::UntypedStorage<8, 8>   mUnk3ee8f3;
    ::ll::UntypedStorage<8, 16>  mUnk5d44d0;
    ::ll::UntypedStorage<1, 1>   mUnk64a982;
    ::ll::UntypedStorage<1, 1>   mUnk456e9b;
    ::ll::UntypedStorage<1, 1>   mUnkd57772;
    ::ll::UntypedStorage<1, 1>   mUnk780cef;
    ::ll::UntypedStorage<8, 8>   mUnkbbeca7;
    ::ll::UntypedStorage<8, 8>   mUnk523cee;
    ::ll::UntypedStorage<8, 40>  mUnka60eca;
    ::ll::UntypedStorage<8, 32>  mUnk78c4dd;
    ::ll::UntypedStorage<1, 1>   mUnka2f794;
    ::ll::UntypedStorage<1, 1>   mUnk90b4e5;
    ::ll::UntypedStorage<8, 16>  mUnk3fa9bf;
    ::ll::UntypedStorage<8, 8>   mUnkfa9b14;
    ::ll::UntypedStorage<8, 8>   mUnk975fa0;
    ::ll::UntypedStorage<8, 8>   mUnkc95a9f;
    ::ll::UntypedStorage<8, 16>  mUnk44f519;
    ::ll::UntypedStorage<8, 8>   mUnka426aa;
    ::ll::UntypedStorage<8, 16>  mUnkd412af;
    ::ll::UntypedStorage<8, 16>  mUnk333c36;
    ::ll::UntypedStorage<8, 8>   mUnkab5b49;
    ::ll::UntypedStorage<8, 8>   mUnk2d070e;
    ::ll::UntypedStorage<8, 8>   mUnkffc4a2;
    ::ll::UntypedStorage<8, 8>   mUnk87a54d;
    ::ll::UntypedStorage<8, 8>   mUnk80cd0e;
    ::ll::UntypedStorage<8, 8>   mUnk692520;
    ::ll::UntypedStorage<8, 8>   mUnkb8db74;
    ::ll::UntypedStorage<8, 8>   mUnkb69251;
    ::ll::UntypedStorage<8, 8>   mUnk138dbc;
    ::ll::UntypedStorage<8, 8>   mUnk125782;
    ::ll::UntypedStorage<8, 8>   mUnk6585d8;
    ::ll::UntypedStorage<8, 8>   mUnk116bf2;
    ::ll::UntypedStorage<8, 8>   mUnkf25a9b;
    ::ll::UntypedStorage<8, 8>   mUnk75183c;
    ::ll::UntypedStorage<8, 8>   mUnk984c5b;
    ::ll::UntypedStorage<8, 16>  mUnk795ad2;
    ::ll::UntypedStorage<8, 8>   mUnkd9da77;
    ::ll::UntypedStorage<8, 16>  mUnkcc1ee6;
    ::ll::UntypedStorage<8, 8>   mUnk291774;
    ::ll::UntypedStorage<8, 8>   mUnk8f0421;
    ::ll::UntypedStorage<8, 16>  mUnk9ac038;
    ::ll::UntypedStorage<8, 64>  mUnk33501c;
    ::ll::UntypedStorage<8, 8>   mUnk95a9d2;
    ::ll::UntypedStorage<8, 8>   mUnk78243e;
    ::ll::UntypedStorage<8, 8>   mUnkb0966b;
    ::ll::UntypedStorage<8, 8>   mUnke4850d;
    ::ll::UntypedStorage<8, 8>   mUnk949250;
    ::ll::UntypedStorage<8, 8>   mUnk94c9dc;
    ::ll::UntypedStorage<8, 8>   mUnk56924c;
    ::ll::UntypedStorage<8, 8>   mUnk7c70a9;
    ::ll::UntypedStorage<8, 8>   mUnka6f4b7;
    ::ll::UntypedStorage<8, 8>   mUnk4c8c20;
    ::ll::UntypedStorage<8, 16>  mUnkde6f9f;
    ::ll::UntypedStorage<8, 16>  mUnk51caaa;
    ::ll::UntypedStorage<8, 16>  mUnk88dd50;
    ::ll::UntypedStorage<8, 8>   mUnkf13f9f;
    ::ll::UntypedStorage<8, 8>   mUnk46f031;
    ::ll::UntypedStorage<8, 8>   mUnkad7e31;
    ::ll::UntypedStorage<8, 8>   mUnk41ce20;
    ::ll::UntypedStorage<8, 8>   mUnk5cf030;
    ::ll::UntypedStorage<8, 8>   mUnkb9503e;
    ::ll::UntypedStorage<8, 8>   mUnk9c023b;
    ::ll::UntypedStorage<8, 8>   mUnk5315ca;
    ::ll::UntypedStorage<8, 8>   mUnk276668;
    ::ll::UntypedStorage<8, 8>   mUnk3ec43f;
    ::ll::UntypedStorage<8, 8>   mUnkb5e444;
    ::ll::UntypedStorage<8, 16>  mUnk36c9d2;
    ::ll::UntypedStorage<8, 8>   mUnk91e453;
    ::ll::UntypedStorage<8, 8>   mUnk56d657;
    ::ll::UntypedStorage<8, 8>   mUnkc1e9f3;
    ::ll::UntypedStorage<8, 48>  mUnka02940;
    ::ll::UntypedStorage<8, 16>  mUnk748223;
    ::ll::UntypedStorage<8, 16>  mUnkec6beb;
    ::ll::UntypedStorage<8, 8>   mUnk55dcf8;
    ::ll::UntypedStorage<8, 8>   mUnk585275;
    ::ll::UntypedStorage<8, 16>  mUnk5f5935;
    ::ll::UntypedStorage<8, 8>   mUnkd12853;
    ::ll::UntypedStorage<8, 8>   mUnk44d437;
    ::ll::UntypedStorage<8, 8>   mUnk13a102;
    ::ll::UntypedStorage<8, 16>  mUnk4877d7;
    ::ll::UntypedStorage<8, 8>   mUnkd72bcd;
    ::ll::UntypedStorage<8, 8>   mUnk6c5fec;
    ::ll::UntypedStorage<8, 16>  mUnk2b5c1a;
    ::ll::UntypedStorage<8, 16>  mUnkdaad93;
    ::ll::UntypedStorage<8, 8>   mUnk2a83b2;
    ::ll::UntypedStorage<8, 8>   mUnkd10826;
    ::ll::UntypedStorage<8, 8>   mUnk64ddee;
    ::ll::UntypedStorage<8, 64>  mUnkd24a7a;
    ::ll::UntypedStorage<8, 8>   mUnkec79fd;
    ::ll::UntypedStorage<8, 768> mUnk1ff378;
    ::ll::UntypedStorage<8, 8>   mUnk74222f;
    ::ll::UntypedStorage<8, 8>   mUnk468478;
    ::ll::UntypedStorage<8, 8>   mUnkea13b7;
    ::ll::UntypedStorage<8, 936> mUnk9947a0;
    ::ll::UntypedStorage<8, 16>  mUnkbf42d0;
    ::ll::UntypedStorage<8, 16>  mUnk469d3c;
    ::ll::UntypedStorage<8, 8>   mUnkf245c7;
    ::ll::UntypedStorage<8, 64>  mUnk30b039;
    ::ll::UntypedStorage<8, 8>   mUnk6906a6;
    ::ll::UntypedStorage<8, 8>   mUnka198d7;
    ::ll::UntypedStorage<8, 64>  mUnk63da8b;
    ::ll::UntypedStorage<8, 64>  mUnk19e15f;
    ::ll::UntypedStorage<8, 8>   mUnk68bd55;
    ::ll::UntypedStorage<8, 8>   mUnkd56e6e;
    ::ll::UntypedStorage<8, 64>  mUnk6331f9;
    ::ll::UntypedStorage<8, 64>  mUnkfb3c1e;
    ::ll::UntypedStorage<8, 16>  mUnkc74988;
    ::ll::UntypedStorage<8, 8>   mUnk4764de;
    ::ll::UntypedStorage<8, 8>   mUnk2db41b;
    ::ll::UntypedStorage<8, 64>  mUnk4282e8;
    ::ll::UntypedStorage<8, 8>   mUnk313b8d;
    ::ll::UntypedStorage<8, 16>  mUnka4d1d6;
    ::ll::UntypedStorage<8, 16>  mUnk4a4bbd;
    ::ll::UntypedStorage<8, 8>   mUnkb98e22;
    ::ll::UntypedStorage<8, 64>  mUnk358786;
    ::ll::UntypedStorage<8, 8>   mUnk633776;
    ::ll::UntypedStorage<8, 8>   mUnkc61c3a;
    ::ll::UntypedStorage<8, 8>   mUnk910337;
    ::ll::UntypedStorage<8, 8>   mUnkd6ff96;
    ::ll::UntypedStorage<8, 8>   mUnk51e772;
    ::ll::UntypedStorage<8, 8>   mUnkf2c3d8;
    ::ll::UntypedStorage<8, 64>  mUnkc5fc6f;
    ::ll::UntypedStorage<8, 8>   mUnk7e94f8;
    ::ll::UntypedStorage<8, 8>   mUnkf60a71;
    ::ll::UntypedStorage<8, 16>  mUnk9f4932;
    ::ll::UntypedStorage<8, 8>   mUnk93ccfd;
    ::ll::UntypedStorage<1, 1>   mUnk4d836f;
    ::ll::UntypedStorage<8, 16>  mUnk626810;
    ::ll::UntypedStorage<8, 8>   mUnkce7b8c;
    ::ll::UntypedStorage<8, 8>   mUnka05418;
    ::ll::UntypedStorage<8, 16>  mUnkfb7cce;
    ::ll::UntypedStorage<8, 8>   mUnk17a5e5;
    ::ll::UntypedStorage<8, 8>   mUnk1d082c;
    ::ll::UntypedStorage<8, 8>   mUnk721c07;
    ::ll::UntypedStorage<8, 8>   mUnk75c011;
    ::ll::UntypedStorage<8, 8>   mUnk662066;
    ::ll::UntypedStorage<8, 8>   mUnka63939;
    ::ll::UntypedStorage<8, 8>   mUnkd68cd6;
    ::ll::UntypedStorage<8, 16>  mUnkd0c917;
    ::ll::UntypedStorage<8, 8>   mUnka64c85;
    ::ll::UntypedStorage<8, 8>   mUnk31922c;
    ::ll::UntypedStorage<8, 8>   mUnkb92250;
    ::ll::UntypedStorage<8, 8>   mUnkc46d8a;
    ::ll::UntypedStorage<8, 8>   mUnk3dc5d4;
    ::ll::UntypedStorage<8, 8>   mUnk6622a0;
    ::ll::UntypedStorage<8, 16>  mUnke27718;
    ::ll::UntypedStorage<8, 16>  mUnk88d837;
    ::ll::UntypedStorage<8, 16>  mUnk9599c5;
    ::ll::UntypedStorage<8, 8>   mUnk1498bc;
    ::ll::UntypedStorage<8, 16>  mUnkc84d4d;
    ::ll::UntypedStorage<8, 8>   mUnkeee60b;
    ::ll::UntypedStorage<8, 8>   mUnk7757ed;
    ::ll::UntypedStorage<8, 8>   mUnk8b5a69;
    ::ll::UntypedStorage<8, 16>  mUnk8a114f;
    ::ll::UntypedStorage<8, 8>   mUnk2c648f;
    ::ll::UntypedStorage<8, 8>   mUnkef66f4;
    ::ll::UntypedStorage<8, 8>   mUnk5cb7cc;
    ::ll::UntypedStorage<8, 456> mUnke5c301;
    ::ll::UntypedStorage<8, 8>   mUnkd18639;
    ::ll::UntypedStorage<8, 8>   mUnk67d5dd;
    ::ll::UntypedStorage<8, 8>   mUnkc0bd78;
    ::ll::UntypedStorage<8, 8>   mUnk8ac119;
    ::ll::UntypedStorage<8, 16>  mUnkddfaa0;
    ::ll::UntypedStorage<8, 8>   mUnk82663e;
    ::ll::UntypedStorage<8, 8>   mUnkb6a170;
    ::ll::UntypedStorage<8, 8>   mUnk8673bc;
    ::ll::UntypedStorage<8, 8>   mUnk1187d6;
    ::ll::UntypedStorage<8, 8>   mUnk807b24;
    ::ll::UntypedStorage<8, 8>   mUnke45c86;
    ::ll::UntypedStorage<8, 8>   mUnk1cf921;
    ::ll::UntypedStorage<8, 8>   mUnk70c996;
    ::ll::UntypedStorage<8, 8>   mUnk89400e;
    ::ll::UntypedStorage<8, 8>   mUnk946503;
    ::ll::UntypedStorage<8, 8>   mUnk781ed2;
    ::ll::UntypedStorage<8, 8>   mUnk871dc6;
    ::ll::UntypedStorage<8, 8>   mUnkf2f2ba;
    ::ll::UntypedStorage<8, 8>   mUnkde4441;
    ::ll::UntypedStorage<8, 8>   mUnk8f12bc;
    ::ll::UntypedStorage<8, 8>   mUnkc2e1c6;
    ::ll::UntypedStorage<8, 8>   mUnk3ed686;
    ::ll::UntypedStorage<8, 8>   mUnk45b4b1;
    ::ll::UntypedStorage<8, 8>   mUnk777677;
    ::ll::UntypedStorage<8, 8>   mUnk1d6e6b;
    ::ll::UntypedStorage<8, 8>   mUnk7fca88;
    ::ll::UntypedStorage<8, 8>   mUnk71d6b7;
    ::ll::UntypedStorage<8, 8>   mUnk8d4567;
    ::ll::UntypedStorage<8, 8>   mUnkfdb8ca;
    ::ll::UntypedStorage<8, 8>   mUnkf68a87;
    ::ll::UntypedStorage<8, 8>   mUnk45501b;
    ::ll::UntypedStorage<8, 8>   mUnk10c987;
    ::ll::UntypedStorage<8, 48>  mUnk3703bb;
    ::ll::UntypedStorage<8, 8>   mUnkdd5b99;
    ::ll::UntypedStorage<8, 16>  mUnk1c3779;
    ::ll::UntypedStorage<8, 16>  mUnk4b4e23;
    ::ll::UntypedStorage<8, 24>  mUnk698964;
    ::ll::UntypedStorage<8, 24>  mUnk8d1118;
    ::ll::UntypedStorage<8, 16>  mUnk99fad5;
    ::ll::UntypedStorage<8, 24>  mUnk4f11c0;
    ::ll::UntypedStorage<8, 24>  mUnk205f41;
    ::ll::UntypedStorage<8, 8>   mUnk952a89;
    ::ll::UntypedStorage<8, 8>   mUnk2ac62b;
    ::ll::UntypedStorage<8, 8>   mUnk185e8d;
    ::ll::UntypedStorage<8, 8>   mUnk94b524;
    ::ll::UntypedStorage<8, 8>   mUnk308f25;
    ::ll::UntypedStorage<8, 8>   mUnk5dd8f3;
    ::ll::UntypedStorage<8, 8>   mUnkceb4ab;
    ::ll::UntypedStorage<8, 8>   mUnk50a24d;
    ::ll::UntypedStorage<8, 16>  mUnk976824;
    ::ll::UntypedStorage<8, 8>   mUnkcd32cf;
    ::ll::UntypedStorage<8, 8>   mUnk32d240;
    ::ll::UntypedStorage<8, 16>  mUnkaa8c49;
    ::ll::UntypedStorage<8, 872> mUnk6546c2;
    ::ll::UntypedStorage<8, 16>  mUnka3a452;
    ::ll::UntypedStorage<8, 8>   mUnk7f0a19;
    ::ll::UntypedStorage<8, 8>   mUnk93ada3;
    ::ll::UntypedStorage<8, 8>   mUnk67f34e;
    ::ll::UntypedStorage<8, 8>   mUnkc456b9;
    ::ll::UntypedStorage<8, 8>   mUnk804e62;
    ::ll::UntypedStorage<8, 8>   mUnk92ee4c;
    ::ll::UntypedStorage<8, 8>   mUnke4e7c9;
    ::ll::UntypedStorage<8, 8>   mUnk5e4634;
    ::ll::UntypedStorage<8, 64>  mUnk12c89f;
    ::ll::UntypedStorage<8, 16>  mUnk42b15f;
    ::ll::UntypedStorage<8, 16>  mUnka8e328;
    ::ll::UntypedStorage<8, 24>  mUnkba1560;
    ::ll::UntypedStorage<8, 16>  mUnk3bcf80;
    ::ll::UntypedStorage<8, 16>  mUnka14281;
    ::ll::UntypedStorage<1, 1>   mUnkd46ea8;
    ::ll::UntypedStorage<8, 8>   mUnk205ada;
    ::ll::UntypedStorage<8, 16>  mUnk41bdf3;
    ::ll::UntypedStorage<8, 16>  mUnkad2805;
    ::ll::UntypedStorage<8, 16>  mUnk6b22bf;
    ::ll::UntypedStorage<8, 64>  mUnkf160e9;
    ::ll::UntypedStorage<8, 64>  mUnk19d968;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGame& operator=(MinecraftGame const&);
    MinecraftGame(MinecraftGame const&);
    MinecraftGame();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initialize() /*override*/;

    virtual ~MinecraftGame() /*override*/ = default;

    virtual bool stop() /*override*/;

    virtual void processActivationArguments(::Bedrock::ActivationArguments const& args) /*override*/;

    virtual void audioEngineOn() /*override*/;

    virtual void audioEngineOff() /*override*/;

    virtual void update() /*override*/;

    virtual void play(::std::string const& name, ::Vec3 const& pos, float volume, float pitch) /*override*/;

    virtual void playUI(::std::string const& name, float volume, float pitch) /*override*/;

    virtual void stopSound(::std::string const& name) /*override*/;

    virtual void stopSounds() /*override*/;

    virtual void setUISizeAndScale(int w, int h, float forcedGuiScale) /*override*/;

    virtual void setRenderingSize(int w, int h) /*override*/;

    virtual void recalculateScene() /*override*/;

    virtual void setSmoothFontStyle() /*override*/;

    virtual void setUIFontStyle() /*override*/;

    virtual ::Bedrock::Threading::Async<void> startLocalServerAsync(
        ::std::string const&     levelId,
        ::std::string const&     levelName,
        ::ContentIdentity const& premiumTemplateContentIdentity,
        ::LevelSettings const&   settings,
        ::StartIntent            startIntent
    ) /*override*/;

    virtual void createAndUploadWorldToRealm(
        ::std::string const&                   levelId,
        ::std::string const&                   levelName,
        ::ContentIdentity const&               premiumTemplateContentIdentity,
        ::LevelSettings const&                 settings,
        ::Realms::World                        world,
        ::std::function<void(::Realms::World)> callback
    ) /*override*/;

    virtual bool canStartLocalServer() const /*override*/;

    virtual bool isAudioInitialized() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::SoundEngine> getSoundEngine() const /*override*/;

    virtual ::MusicManager const* getMusicManager() const /*override*/;

    virtual ::MusicManager* getMusicManagerNonConst() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ITextBoxController> getTextBoxController() /*override*/;

    virtual void onLowMemory(::LowMemorySeverity) /*override*/;

    virtual void onAppFocusLost() /*override*/;

    virtual void onAppFocusGained() /*override*/;

    virtual void onAppPaused() /*override*/;

    virtual void onAppUnpaused() /*override*/;

    virtual void setReconnectionCookie(
        ::std::optional<::std::variant<
            ::GameConnectionInfoEx,
            ::Social::MultiplayerGameInfo,
            ::ExperienceJoinRequestInfo,
            ::Realms::RealmId>> const& reconnectCookie
    ) /*override*/;

    virtual ::std::optional<::std::variant<
        ::GameConnectionInfoEx,
        ::Social::MultiplayerGameInfo,
        ::ExperienceJoinRequestInfo,
        ::Realms::RealmId>>
    getReconnectionCookie() /*override*/;

    virtual void onAppPreSuspended() /*override*/;

    virtual void onAppSuspended() /*override*/;

    virtual void onAppResumed() /*override*/;

    virtual void onDeviceLost() /*override*/;

    virtual void onAppSurfaceCreated() /*override*/;

    virtual void onAppSurfaceDestroyed() /*override*/;

    virtual void onOperationModeChanged(::OperationMode newMode) /*override*/;

    virtual bool hasNetworkPrivileges(bool onlyWifiAllowed) /*override*/;

    virtual void onPlayerLoaded(::IClientInstance& client, ::Player& player) /*override*/;

    virtual void onDimensionChanged() /*override*/;

    virtual void setDisableInputForAllOtherClients(int id, bool disableStatus) /*override*/;

    virtual void onGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    virtual void playerListChanged() /*override*/;

    virtual void onLevelDestruction(::std::string const& levelId) /*override*/;

    virtual void setWorldTransferAction(
        ::std::variant<
            ::LocalWorldTransferActionFunc,
            ::ExternalWorldTransferActionFunc,
            ::RealmTransferActionFunc,
            ::std::monostate>&& worldTransferAction
    ) /*override*/;

    virtual ::std::variant<
        ::LocalWorldTransferActionFunc,
        ::ExternalWorldTransferActionFunc,
        ::RealmTransferActionFunc,
        ::std::monostate> const&
    getWorldTransferAction() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::WorldTransferAgent> const getWorldTransferAgent() const /*override*/;

    virtual void setIsWorldTransferInProgress(bool isWorldTransferInProgress) /*override*/;

    virtual bool isWorldTransferInProgress() const /*override*/;

    virtual void setResetCallbackObject(::ResetCallbackObject* obj) /*override*/;

    virtual void requestLeaveGame(bool switchScreen, bool sync) /*override*/;

    virtual void requestLeaveThenJoinFriendsWorld(::std::string_view serverId) /*override*/;

    virtual void requestLeaveGameWithWorldThumbnail() /*override*/;

    virtual void requestLeaveGameWithWorldThumbnailThenJoinFriendsWorld(::std::string_view serverId) /*override*/;

    virtual void startLeaveGame() /*override*/;

    virtual bool isLeaveGameDone() const /*override*/;

    virtual void destroyGame() /*override*/;

    virtual void setupCommandParser(::IClientInstance& client) /*override*/;

    virtual void onClientCreatedLevel(::IClientInstance& client) /*override*/;

    virtual ::GameRenderer& getGameRenderer() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository> getUIDefRepo() const /*override*/;

    virtual void joinRealmsGame(
        ::Realms::World const&              realm,
        ::Social::GameConnectionInfo const& gameConnection,
        ::PlayerJoinWorldContext            context
    ) /*override*/;

    virtual void joinRealmFromInvite(::Realms::World const& world) /*override*/;

    virtual void joinRealmFromConnectLink(::Realms::World const& world, ::PlayerJoinWorldContext context) /*override*/;

    virtual void setRealmsLoadingLink(bool state) /*override*/;

    virtual void joinRealm(
        ::Realms::World const&                    world,
        ::IMinecraftEventing::RealmConnectionFlow telemetryEventingConnectionFlow,
        ::PlayerJoinWorldContext                  context
    ) /*override*/;

    virtual ::Bedrock::Threading::Async<void> joinMultiplayerGame(
        ::Social::MultiplayerGameInfo const& gameInfo,
        ::PlayerJoinWorldContext             context,
        ::OnlineSafetyDialogVisibility       onlineSafetyDialogVisibility
    ) /*override*/;

    virtual void joinMultiplayerWithAddress(
        ::Social::GameConnectionInfo gameConnection,
        bool                         joiningLocalServer,
        ::std::string const&         serverName,
        ::std::string const&         worldName,
        ::NetworkType                networkTypeOverride,
        ::std::shared_ptr<bool>      userCancelled,
        ::PlayerJoinWorldContext     context
    ) /*override*/;

    virtual void joinRemoteServerWithAddress(
        ::Social::GameConnectionInfo gameConnection,
        ::std::string const&         serverName,
        ::std::string const&         worldName,
        ::NetworkType                networkTypeOverride,
        ::std::shared_ptr<bool>      userCancelled,
        ::PlayerJoinWorldContext     context
    ) /*override*/;

    virtual bool isLocalPlayer(::ActorUniqueID const& id) const /*override*/;

    virtual void setLeaveGameInProgressAsReadyToContinue() /*override*/;

    virtual bool isPrimaryClientInstanceReady() const /*override*/;

    virtual void ensureAllClientsAreLeaving() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> getPrimaryClientInstance() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IClientInstance const> getPrimaryClientInstance() const /*override*/;

    virtual ::ItemRegistryRef getClientItemRegistry() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::NewPlayerSystem> getNewPlayerSystem() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::NewPlayerSystem const> getNewPlayerSystem() const /*override*/;

    virtual ::std::map<::SubClientId, ::std::shared_ptr<::IClientInstance>> const& getClientInstanceMap() const
        /*override*/;

    virtual ::std::shared_ptr<::IClientInstance> tryGetClientInstanceFromPlayerUUID(::mce::UUID const& playerId) const
        /*override*/;

    virtual uint getUIRenderClientMask() const /*override*/;

    virtual uint64 getClientInstanceCount() const /*override*/;

    virtual void forEachClientInstance(::std::function<void(::IClientInstance&)> callback) /*override*/;

    virtual ::LocalPlayer* getPrimaryLocalPlayer() /*override*/;

    virtual ::LocalPlayer const* getPrimaryLocalPlayer() const /*override*/;

    virtual bool isPrimaryLevelCrossPlatformMultiplayer() const /*override*/;

    virtual bool isPrimaryLevelMultiplayer() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GuiData> getPrimaryGuiData() /*override*/;

    virtual ::std::shared_ptr<::OptionRegistry> getPrimaryUserOptions() /*override*/;

    virtual ::std::shared_ptr<::OptionRegistry const> getPrimaryUserOptions() const /*override*/;

    virtual bool isPrimaryUserSigninInProgress() const /*override*/;

    virtual void resetInput() /*override*/;

    virtual ::PixelCalc const& getDpadScale() const /*override*/;

    virtual void setKeyboardForcedHeight(float height, bool isShowSignal) /*override*/;

    virtual bool canActivateKeyboard() /*override*/;

    virtual void reloadAnimationAndGeometryData(bool sync) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> getGeometryGroup() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::BlockCullingGroup> getBlockCullingGroup() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ClientBlockPipeline::SchematicsRepository> getSchematicsRepository() const
        /*override*/;

    virtual ::ParticleEffectGroup& getParticleEffectGroup() const /*override*/;

    virtual ::DeferredLighting& getDeferredLighting() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ContentAcquisition> getContentAcquisition() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IOfferRepository> getOfferRepository() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::TrialManager> getTrialManager() const /*override*/;

    virtual bool isTrialManagerInitialized() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PersonaService> getPersonaService() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GatheringManager> getGatheringManager() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> getContentCatalogService() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> getStoreCatalog() const /*override*/;

    virtual ::ServiceDrivenImageRepository& getServiceImageRepository() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::LibraryRepository> getLibraryRepository() const /*override*/;

    virtual ::std::shared_ptr<::ActorAnimationGroup> getActorAnimationGroup() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorAnimationControllerGroup> getActorAnimationControllerGroup() const
        /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository const> getThirdPartyServerRepository() const
        /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository> getThirdPartyServerRepository() /*override*/;

    virtual ::std::shared_ptr<::SkinRepository> getSkinRepository() const /*override*/;

    virtual ::PersonaRepository& getPersonaRepository() const /*override*/;

    virtual ::MarketplaceServicesManager& getMarketplaceServicesManager() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> getWorldTemplateManager() const /*override*/;

    virtual ::World::WorldSystem& getWorldSystem() const /*override*/;

    virtual bool isWorldSystemReady() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsSystem> getRealmsSystem() const /*override*/;

    virtual ::Social::SocialSystem& getSocialSystem() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::Parties::PartySystem> getPartySystem() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Progress::ProgressTips> getUIProgressTips() const /*override*/;

    virtual ::IResourcePackRepository& getResourcePackRepository() const /*override*/;

    virtual ::ResourcePackManager& getResourcePackManager() const /*override*/;

    virtual ::ResourcePackManager& getServerResourcePackManager() /*override*/;

    virtual ::PackManifestFactory& getPackManifestFactory() /*override*/;

    virtual ::PlayerMessagingService& getPlayerMessagingService() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> getKeyProvider() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider const> getAccessibilityProvider() const
        /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider> getAccessibilityProvider() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> getContentTierManager() const /*override*/;

    virtual ::PackSourceFactory& getPackSourceFactory() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> getResourceLoadManager() /*override*/;

    virtual ::ILevelListCache& getLevelListCache() /*override*/;

    virtual bool hasAllValidCrossPlatformSkin() const /*override*/;

    virtual ::PackDownloadManager& getPackDownloadManager() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> getLinkedAssetValidator() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> getLinkedAssetValidator() /*override*/;

    virtual bool isMultiplayerServiceManagerReady() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> getMultiplayerServiceManager() const
        /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> getUserManager() const /*override*/;

    virtual ::IMinecraftEventing& getEventing() const /*override*/;

    virtual ::ServerInstance* getServerInstance() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ServerInstance> getServerInstanceNonOwnPtr() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ClientNetworkSystem> getClientNetworkSystemPtr() /*override*/;

    virtual ::ClientNetworkSystem& getClientNetworkSystem() /*override*/;

    virtual ::ClientNetworkSystem const& getClientNetworkSystem() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ActiveDirectoryIdentity> getActiveDirectoryIdentity() /*override*/;

    virtual void clearCache() /*override*/;

    virtual void releaseClientSubId(::SubClientId subid) /*override*/;

    virtual bool isStartingGame() const /*override*/;

    virtual bool isSplitscreenJoinEnabled() const /*override*/;

    virtual bool canAddSplitscreenSubClient(int controllerId) const /*override*/;

    virtual void addSubClientInstanceAndAssociateToUser(int controllerId) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> retrieveCIDToClientMap() /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    registerSplitScreenChangedListener(::std::function<void(uchar)> callback) const /*override*/;

    virtual uchar getSplitScreenCount() const /*override*/;

    virtual float calculateScreenSizeToResolutionScalar(int const width, int const height) const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GlobalResourcesCrashRecovery const> GetGlobalResourcesCrashRecovery() const
        /*override*/;

    virtual bool isReadyToRender() const /*override*/;

    virtual bool isShowingLoadingScreen() const /*override*/;

    virtual bool isRenderingLoadingScreen() const /*override*/;

    virtual void registerUpsellScreen() /*override*/;

    virtual ::SceneFactory& getPrimarySceneFactory() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> getMainSceneStack() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> getMainSceneStack() /*override*/;

    virtual ::OreUI::Router& getUIRouter() /*override*/;

    virtual ::OreUI::DataProviderManager_DEPRECATED& getDataProviderManager() /*override*/;

    virtual ::std::weak_ptr<::RealmsAPI> getRealms() /*override*/;

    virtual ::Realms::ContentService& getRealmsContentService() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsServices> getRealmsServices() /*override*/;

    virtual ::std::weak_ptr<::ClubsService> getClubsService() /*override*/;

    virtual ::std::shared_ptr<::Realms::GenericRequestServiceHandler> getGenericRealmsService() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Realms::SubscriptionService> getRealmsSubscriptionService() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::PresenceManager> getPresenceManager() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::EDUSystems> getEDUSystems() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::EDUSystems const> getEDUSystems() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Minecraft> getPrimaryMinecraft() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Automation::AutomationClient> getAutomationClient() const /*override*/;

    virtual bool isDedicatedServer() const /*override*/;

    virtual bool isEduMode() const /*override*/;

    virtual void onNetworkMaxPlayersChanged(uint newMaxPlayerCount) /*override*/;

    virtual ::IGameModuleApp& getGameModule() /*override*/;

    virtual ::IGameModuleShared& getGameModuleShared() /*override*/;

    virtual void requestServerShutdown() /*override*/;

    virtual void setLaunchedFromLegacyVersion(bool launchedFromLegacyVersion) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FileArchiver> getFileArchiver() const /*override*/;

    virtual bool requestInGamePause(::SubClientId const& subClient, bool status) /*override*/;

    virtual ::InputMode getCurrentInputMode() const /*override*/;

    virtual void handleInputPaneHidden() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelLoader> getLevelLoader() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ExternalContentManager> getContentManager() /*override*/;

    virtual ::IContentManager& getResourceContentManager() /*override*/;

    virtual ::std::string getMultiplayerDisabledTextTitle(::MultiplayerLockedContext context) const /*override*/;

    virtual ::std::string getMultiplayerDisabledTextBody(::MultiplayerLockedContext context) const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IExternalServerFile> getExternalServer() const /*override*/;

    virtual ::std::shared_ptr<::mce::TextureGroup> getTextureGroup() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::mce::TextureGroup> getStoreCacheTextures() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::MinecraftGraphics> getMinecraftGraphics() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::TextureAtlas> getTextureAtlas() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IUIRepository> getUIRepository() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::SeasonsRenderer> getSeasonsRenderer() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> getFilePathManager() /*override*/;

    virtual void setUseFontOverrides(bool useOverrides) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FontRepository const> getFontRepository() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::EmoticonManager const> getEmoticonManager() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::TextToIconMapper const> getTextToIconMapper() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::TextToIconMapper> getTextToIconMapper() /*override*/;

    virtual bool getMouseGrabbed() const /*override*/;

    virtual void navigateToPlayScreenFriendsTab() /*override*/;

    virtual bool hasActorResourceDefinitionGroup() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup const> getActorResourceDefinitionGroup() const
        /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::RenderControllerGroup const> getRenderControllerGroup() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::RenderControllerGroup> getRenderControllerGroup() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup>
    getActorResourceDefinitionGroupMutable() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> getOreUIResourceAllowList() /*override*/;

    virtual ::Bedrock::Threading::Async<::Core::PathBuffer<::std::string>>
    requestScreenshot(::ScreenshotOptions& screenshotOptions) /*override*/;

    virtual void onActiveResourcePacksChanged(::ResourcePackManager& mgr) /*override*/;

    virtual bool onFullPackStackInvalid() /*override*/;

    virtual void onLanguageSubpacksChanged() /*override*/;

    virtual void onBaseGamePackDownloadComplete() /*override*/;

    virtual void displayActiveDirectoryLoginDialog() /*override*/;

    virtual void handleReloadUIDefinitions() /*override*/;

    virtual void onPushNotificationReceived(::PushNotificationMessage const& msg) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FlightingService> getFlightingService() const /*override*/;

    virtual ::std::shared_ptr<::FlightingService> getFlightingServicePtr() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::TreatmentPackDownloadMonitor const> getTreatmentPackDownloadMonitor() const
        /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> getEntitlementManager() /*override*/;

    virtual ::IDlcValidation& getDlcValidation() /*override*/;

    virtual ::ServicesManager& getServicesManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::SunsettingManager> getSunsettingManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::DateManager> getDateManager() const /*override*/;

    virtual void grabMouse() /*override*/;

    virtual void releaseMouse() /*override*/;

    virtual void muteAudio() /*override*/;

    virtual void unMuteAudio() /*override*/;

    virtual uint64 generateClientId(
        bool                              forceReset,
        bool&                             generatedNewId,
        uint64                            clientIdModifier,
        ::std::shared_ptr<::Social::User> user
    ) /*override*/;

    virtual bool isHostingLocalDedicatedServer() const /*override*/;

    virtual void shutdownServer() /*override*/;

    virtual void pauseContentDownloads() /*override*/;

    virtual void resumeContentDownloads() /*override*/;

    virtual ::UIMeasureStrategy& getUIMeasureStrategy() /*override*/;

    virtual void copyInternalSettingsFolderToExternalLocation() const /*override*/;

    virtual void onClientLevelExit(::IClientInstance& exitClient, uint exitCode) /*override*/;

    virtual void resetThreadCallbacks() /*override*/;

    virtual bool isInGame() const /*override*/;

    virtual bool isInServer() const /*override*/;

    virtual bool isInRealm() const /*override*/;

    virtual void fadeOutMusic() /*override*/;

    virtual bool isInitialized() const /*override*/;

    virtual bool useMinecraftVersionOfXBLUI() const /*override*/;

    virtual int getMaxPlayerCount() const /*override*/;

    virtual void setProfilerIsOn(bool val) /*override*/;

    virtual void
    onPrimaryUserReconnect(::Social::UserPlatformConnectionResult status, bool isUserInitiated) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources> getCubemapBackgroundResources() /*override*/;

    virtual void setAppWillTerminate(bool willTerminate) /*override*/;

    virtual ::DeferredTasksManager<::DeferredTaskCategory>& getDeferredTasks() /*override*/;

    virtual void onForceCloudSave() /*override*/;

    virtual void onOptionsLoadBegin() /*override*/;

    virtual void onOptionsLoadComplete() /*override*/;

    virtual bool shouldShowRatingsPrompt() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ServerInstanceEventCoordinator>
    getServerInstanceEventCoordinator() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IApp> getApp() /*override*/;

    virtual bool getSuspended() const /*override*/;

    virtual bool isResuming() const /*override*/;

    virtual void doPrimaryClientReadyWork(::std::function<void()> workFn) /*override*/;

    virtual void doUserManagerReadyWork(::std::function<void()> workFn) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ScreenshotRecorder> getScreenshotRecorder() /*override*/;

    virtual bool isEditorModeEnabled() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::ContentLogFileEndPoint> const getContentFileLogEndPoint() const /*override*/;

    virtual bool isMusicEnabled() const /*override*/;

    virtual void queueCustomMusic(
        ::std::string const& eventName,
        float                volume,
        float                fadeoutSeconds,
        ::MusicRepeatMode    playMode
    ) /*override*/;

    virtual void playCustomMusic(
        ::std::string const& eventName,
        float                volume,
        float                fadeoutSeconds,
        ::MusicRepeatMode    playMode
    ) /*override*/;

    virtual void setMusicCommandVolumeMultiplier(float volumeMultiplier) /*override*/;

    virtual void stopCustomMusic(float fadeoutSeconds) /*override*/;

    virtual ::EntityContext& getEntity() const /*override*/;

    virtual ::AppSystemRegistry& getAppSystemRegistry() /*override*/;

    virtual void onLanguageChanged(::std::string const& code, bool languageSystemInitializing) /*override*/;

    virtual void onLanguageKeywordsLoadedFromPack(::PackManifest const& manifest) /*override*/;

    virtual void onLanguagesLoaded() /*override*/;

    virtual void buildTreatmentPackStack(bool fireEvents) const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv> getLevelDbEnv() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::ChunkSource>
    getClientGenChunkSource(::DimensionType const& dimensionType) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> getProfanityContext() /*override*/;

    virtual double getGameUpdateDurationInSeconds() const /*override*/;

    virtual void queueSubclientRemoval(::SubClientId subid) /*override*/;

    virtual void logoffAllSubclients() /*override*/;

    virtual void setIsInGame(bool isInGame) /*override*/;

    virtual void createClientItemRegistry() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::MinecraftInputHandler> getInput() const /*override*/;

    virtual ::std::unique_ptr<::LocalServerLauncher::IGameInterface> createGameInterface() /*override*/;

    virtual ::std::unique_ptr<::LocalServerLauncher::IServerInstanceBuilder> createServerBuilder() /*override*/;

    virtual ::std::unique_ptr<::LocalServerLauncher::GameDependencies> createGameDependencies() /*override*/;

    virtual ::TaskGroup& _getServerInitTaskGroup() /*override*/;

    virtual bool isMultiPlayerInitialized() const /*override*/;

    virtual bool
    checkMultiPlayerPermission(::std::optional<::Social::MultiplayerServiceIdentifier> service) /*override*/;

    virtual bool isPlayingLevel() const /*override*/;

    virtual void initImpl() /*override*/;

    virtual void refocusMouse(bool lostMouse) /*override*/;

    virtual void setMouseType(::Bedrock::Input::PointerType type) /*override*/;

    virtual void onNotify(::edu::auth::CredentialsAcquired const& state) /*override*/;

    virtual void onNotify(::edu::auth::CredentialsRefreshSuccess const& state) /*override*/;

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsLost> const& state) /*override*/;

    virtual bool checkForPiracy() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::DevConsoleLogger> getDevConsoleLogger() const /*override*/;

    virtual void completeServerStartup(
        ::std::shared_ptr<::LocalServerLauncher::ServerInitData> serverInitData,
        ::LocalServerLauncher::ServerLaunchResult&&              result
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MinecraftGame(::MinecraftGameArguments&& args);

    MCAPI void _InitComplete();

    MCAPI void _LoadRendererAssets();

    MCAPI void _addSubClientInstanceAndAssociateToUserInternal(int controllerId, bool isInitialCheck);

    MCAPI void _beginReloadingResources();

    MCAPI void _buildClientStack();

    MCAPI void _buildClientStartupStack();

    MCAPI bool _clientUpdate();

    MCAPI void _configureLighting();

    MCAPI ::LocalServerLauncher::Impl::AllDependencies _createAllDependencies();

    MCAPI ::std::shared_ptr<::ClientInstance>
    _createClientInstance(::SubClientId id, ::LatencyGraphDisplay* latencyDisplay, int controller);

    MCAPI ::brstd::move_only_function<::std::unique_ptr<::IClientDimensionExtensions>(bool) const>
    _createDimensionExtensionsFactory(bool isClientSide);

    MCAPI ::std::unique_ptr<::GameModuleClient> _createGameModuleClient(::SubClientId id);

    MCAPI void _createPartySystem();

    MCAPI void _cycleRoundRobinClientSubId();

    MCAPI ::std::unique_ptr<::ResourcePackStack> _deserializeGlobalResourcePacks();

    MCAPI void _deviceReinitialization(
        ::SerialWorkList&                                         workList,
        ::std::optional<::dragon::framerenderer::DebugParameters> initDebugOptions
    );

    MCAPI void _finishReloadingResources(::ResourcePackManager& mgr, bool fullVanillaPackOnStack);

    MCAPI ::Bedrock::Threading::Async<void> _handleMultiplayerServiceJoinResult(
        ::Social::MultiplayerServiceIdentifier const gameServiceProvider,
        ::Social::JoinGameStatus                     succeeded,
        ::Social::MultiplayerGameInfo const&         newGame,
        bool                                         isLan
    );

    MCAPI ::SerialWorkList::WorkResult _initAudio();

    MCAPI ::SerialWorkList::WorkResult _initCheckStorage();

    MCAPI ::SerialWorkList::WorkResult _initClientNetworkSystem();

    MCAPI ::SerialWorkList::WorkResult _initCrashReporting();

    MCAPI ::SerialWorkList::WorkResult
    _initCreatePrimaryClient(::std::shared_ptr<::MinecraftGame::InitContext> initContext);

    MCAPI ::SerialWorkList::WorkResult _initDatabase();

    MCAPI ::SerialWorkList::WorkResult _initDefaultFonts();

    MCAPI ::SerialWorkList::WorkResult _initDeviceDebugConfig();

    MCAPI ::SerialWorkList::WorkResult _initEventing();

    MCAPI ::SerialWorkList::WorkResult _initFileSystemSpaceTracking();

    MCAPI ::SerialWorkList::WorkResult _initFinish(::std::shared_ptr<::MinecraftGame::InitContext>& initContext);

    MCAPI ::SerialWorkList::WorkResult _initFontHandles();

    MCAPI ::SerialWorkList::WorkResult _initFontMetadata();

    MCAPI ::SerialWorkList::WorkResult _initHideSplashScreen();

    MCAPI ::SerialWorkList::WorkResult _initHttp();

    MCAPI ::SerialWorkList::WorkResult _initIssueHardwareCursorLoad();

    MCAPI ::SerialWorkList::WorkResult _initLoadRendererAssets();

    MCAPI ::SerialWorkList::WorkResult _initLoadingBarMaterials();

    MCAPI ::SerialWorkList::WorkResult _initLogging();

    MCAPI void _initMinecraftGame();

    MCAPI ::SerialWorkList::WorkResult _initMultiplayerMgr();

    MCAPI ::SerialWorkList::WorkResult _initMultiplayerRequestHandler();

    MCAPI ::SerialWorkList::WorkResult _initNetworkSessionOwner();

    MCAPI ::SerialWorkList::WorkResult _initNewPlayerSystem();

    MCAPI ::SerialWorkList::WorkResult _initNotifyOnActiveResourcePacksChanged();

    MCAPI ::SerialWorkList::WorkResult _initOnGameSessionReset();

    MCAPI ::SerialWorkList::WorkResult _initOreUIAssets();

    MCAPI ::SerialWorkList::WorkResult _initOreUIDataProviderManager();

    MCAPI ::SerialWorkList::WorkResult _initOreUIRendering();

    MCAPI ::SerialWorkList::WorkResult _initOreUISystem(::std::shared_ptr<::MinecraftGame::InitContext> initContext);

    MCAPI ::SerialWorkList::WorkResult _initOreUIViewsCoordinator();

    MCAPI ::SerialWorkList::WorkResult _initPacks();

    MCAPI ::SerialWorkList::WorkResult _initPartySystem();

    MCAPI void _initPerMachineOptionObservers();

    MCAPI void _initPerUserOptionObservers(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);

    MCAPI ::SerialWorkList::WorkResult _initPostA();

    MCAPI ::SerialWorkList::WorkResult _initPostB();

    MCAPI ::SerialWorkList::WorkResult _initPostC();

    MCAPI ::SerialWorkList::WorkResult _initPostE();

    MCAPI ::SerialWorkList::WorkResult _initPostFontAsync();

    MCAPI ::SerialWorkList::WorkResult _initPreCacheOutOfGameViews();

    MCAPI ::SerialWorkList::WorkResult
    _initPrimaryClientComplete(::std::shared_ptr<::MinecraftGame::InitContext> initContext);

    MCAPI ::SerialWorkList::WorkResult _initPrimaryIdentity();

    MCAPI ::SerialWorkList::WorkResult _initProgressTips();

    MCAPI ::SerialWorkList::WorkResult _initPushAlwaysActiveScreen();

    MCAPI ::SerialWorkList::WorkResult _initRealmsSystem();

    MCAPI ::SerialWorkList::WorkResult _initRepopulateLevelInfoCache();

    MCAPI ::SerialWorkList::WorkResult _initResourceLoader();

    MCAPI void _initServicesManager();

    MCAPI ::SerialWorkList::WorkResult _initSocialSystem();

    MCAPI ::SerialWorkList::WorkResult _initStep1();

    MCAPI ::SerialWorkList::WorkResult _initStep2();

    MCAPI ::SerialWorkList::WorkResult _initStep2A();

    MCAPI ::SerialWorkList::WorkResult _initStep2B();

    MCAPI ::SerialWorkList::WorkResult _initStep3();

    MCAPI ::SerialWorkList::WorkResult _initStep5();

    MCFOLD ::SerialWorkList::WorkResult _initStorageMigration();

    MCAPI ::SerialWorkList::WorkResult _initTTS();

    MCAPI ::SerialWorkList::WorkResult _initTestClientInterface();

    MCAPI ::SerialWorkList::WorkResult _initTimePlayedNotifier();

    MCAPI ::SerialWorkList::WorkResult _initTriggerSignIn();

    MCAPI ::SerialWorkList::WorkResult _initUILoadAsyncWait();

    MCAPI ::SerialWorkList::WorkResult _initUpdateAppLaunchedCount();

    MCAPI ::SerialWorkList::WorkResult _initUpdateFontsBasedOffOfOverrideEnable();

    MCAPI ::SerialWorkList::WorkResult _initUser();

    MCAPI ::SerialWorkList::WorkResult _initUserComplete();

    MCAPI ::SerialWorkList::WorkResult _initWaitForContentManager();

    MCAPI ::SerialWorkList::WorkResult _initWaitForDefaultFontsToLoad();

    MCAPI ::SerialWorkList::WorkResult _initWaitForDiscoveryService();

    MCAPI ::SerialWorkList::WorkResult _initWaitForEntitlementCacheLoad();

    MCAPI ::SerialWorkList::WorkResult _initWaitForFontMetadataToLoad();

    MCAPI ::SerialWorkList::WorkResult _initWaitForFrameBuilder();

    MCAPI ::SerialWorkList::WorkResult _initWaitForInitialServicePacks();

    MCAPI ::SerialWorkList::WorkResult _initWaitForLocalization();

    MCAPI ::SerialWorkList::WorkResult _initWaitForMainMenuResources();

    MCAPI ::SerialWorkList::WorkResult _initWaitForOfferLicense();

    MCAPI ::SerialWorkList::WorkResult _initWaitForOfferRepo();

    MCAPI ::SerialWorkList::WorkResult _initWaitForOreUIAssets() const;

    MCAPI ::SerialWorkList::WorkResult _initWaitForPrimaryUser();

    MCAPI ::SerialWorkList::WorkResult _initWaitForRepopulateLevelInfoCache();

    MCAPI ::SerialWorkList::WorkResult _initWaitForResourceRepository();

    MCAPI ::SerialWorkList::WorkResult _initWaitForSkinRepo();

    MCAPI ::SerialWorkList::WorkResult _initWaitForWorldTemplateManager();

    MCAPI ::SerialWorkList::WorkResult _initWorldSystem();

    MCAPI ::SerialWorkList::WorkResult _initializeFrameBuilder();

    MCAPI bool _isGameplayPaused();

    MCAPI void _joinMultiplayerAfterTransportLayerDetermined(
        ::Social::GameConnectionInfo gameConnection,
        bool                         joiningLocalServer,
        ::std::string const&         serverName,
        ::std::string const&         worldName,
        ::NetworkType                networkTypeOverride,
        ::PlayerJoinWorldContext     context,
        ::TransportLayer             serverTransportLayer
    );

    MCAPI ::Bedrock::Threading::Async<void> _joinMultiplayerGame(
        ::Social::MultiplayerGameInfo const& gameToJoin,
        ::std::string const&                 multiplayerCorrelationId,
        ::PlayerJoinWorldContext             context,
        ::OnlineSafetyDialogVisibility       onlineSafetyDialogVisibility
    );

    MCAPI ::SerialWorkList::WorkResult _loadGlobalResourcePacks();

    MCAPI void _loadInitialPackResources(::ResourcePackManager& mgr, bool fullVanillaPackOnStack);

    MCAPI void _loadLanguageData();

    MCAPI void _loadLastGlobalResourcePacksFromFile(bool waitForUIReload);

    MCAPI ::SerialWorkList::WorkResult _notifyOnFullVanillaPackOnStack();

    MCAPI void _onActiveResourcePacksChanged(::ResourcePackManager& mgr, bool fullVanillaPackOnStack);

    MCAPI ::SerialWorkList::WorkResult _onDeviceRestoreFinish();

    MCAPI void _onEntitlementsChanged();

    MCAPI void _onEntitlementsChangedNotifyUI();

    MCAPI void _onInitRemoteSystem(::std::function<void()> syncCompleteCallback);

    MCAPI void _onPrimaryUserConnectComplete(
        ::Social::UserPlatformConnectionResult status,
        bool                                   runStartScreen,
        bool                                   userInitiated
    );

    MCAPI ::SerialWorkList::WorkResult _onResumeBegin();

    MCAPI ::SerialWorkList::WorkResult _onResumeFinish();

    MCAPI ::SerialWorkList::WorkResult _onResumeHttp();

    MCAPI ::SerialWorkList::WorkResult _onResumePrimaryClient();

    MCAPI ::SerialWorkList::WorkResult _onResumeQueueFontReloadTextures();

    MCAPI ::SerialWorkList::WorkResult _onResumeQueueReloadActors();

    MCAPI ::SerialWorkList::WorkResult _onResumeQueueReloadAnimation();

    MCAPI ::SerialWorkList::WorkResult _onResumeQueueReloadParticleEffects();

    MCAPI ::SerialWorkList::WorkResult _onResumeQueueReloadTextures();

    MCAPI ::SerialWorkList::WorkResult _onResumeQueueReloadTexturesAtlas();

    MCAPI ::SerialWorkList::WorkResult _onResumeReloadDefaultLighting();

    MCAPI ::SerialWorkList::WorkResult _onResumeRestartServices();

    MCAPI ::SerialWorkList::WorkResult _onResumeWaitFontReloadTextures();

    MCAPI ::SerialWorkList::WorkResult _onResumeWaitPreviousResourceLoads();

    MCAPI ::SerialWorkList::WorkResult _onResumeWaitReloadActors();

    MCAPI ::SerialWorkList::WorkResult _onResumeWaitReloadAnimation();

    MCAPI ::SerialWorkList::WorkResult _onResumeWaitReloadParticleEffects();

    MCAPI ::SerialWorkList::WorkResult _onResumeWaitReloadTextures();

    MCAPI ::SerialWorkList::WorkResult _onResumeWaitReloadTexturesAtlas();

    MCAPI void _onSplitScreenChanged();

    MCAPI void _onTTSOptionChanged();

    MCAPI void _onTTSOptionChanged(bool enabled);

    MCAPI void _onTextureAtlasStatus(::TextureAtlasStatus const& status);

    MCAPI void _onUserSigninXboxLive(uint userId);

    MCAPI void _performNetworkReadyActions();

    MCAPI void _preCacheOutOfGameViews();

    MCAPI void _recomputeResolution();

    MCAPI void _registerClientOptionObserver(
        ::SubClientId const                    clientId,
        ::Option*                              option,
        ::std::function<void(::Option const&)> onValueChangeCallback
    );

    MCAPI void _registerPrimaryUserOptionLock(::Option* option, ::std::function<void(bool&)> isModifiableCondition);

    MCAPI void
    _registerPrimaryUserOptionObserver(::Option* option, ::std::function<void(::Option const&)> onValueChangeCallback);

    MCAPI void _reloadLightingTextures();

    MCAPI void _removePendingSubclients();

    MCAPI void _setupFrameBuilderOptimizer();

    MCAPI void _setupRenderer();

    MCAPI void _terminateRenderer();

    MCAPI void _tryFireResourceLoadSession();

    MCAPI void _unregisterOnInitUriListeners();

    MCAPI void _update();

    MCAPI void _updateBiomeBlendingAndAtmosphericScattering(
        float           timeOfDay,
        float           intensityMultiplier,
        ::DimensionType dimensionId
    );

    MCAPI void _updateDeferredLightingPresets();

    MCAPI void _updateLightingModel();

    MCAPI void _updateProfilerLite();

    MCAPI void _updateTextureAtlasPBRData(::TextureAtlas const& textureAtlas, bool terrain);

    MCAPI ::SerialWorkList::WorkResult _waitForAudio();

    MCAPI ::SerialWorkList::WorkResult _waitForFileSystemSpaceTracking();

    MCAPI ::SerialWorkList::WorkResult _waitForLoadRendererAssets();

    MCAPI ::SerialWorkList::WorkResult _waitForStorageMigration();

    MCAPI void adjustClientsUISizeAndScale();

    MCAPI void cleanReloadMaterials();

    MCAPI void doInitializationCompleteWork(::std::function<void()> workFn);

    MCAPI void endFrame();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> getClientInstance(::SubClientId subid);

    MCAPI ::Bedrock::NonOwnerPointer<::ServerNetworkHandler> getServerNetworkHandler();

    MCAPI void handleShowUpsellScreen(bool timeExpired);

    MCAPI void initEventing();

    MCAPI bool isInEDUMultiplayerSession();

    MCAPI bool isServerVisible();

    MCAPI void onTick();

    MCAPI bool primaryLevelExists() const;

    MCAPI void startFrame();

    MCAPI void tickInput();

    MCAPI bool
    tryGetIdForNewSubClient(int controllerId, ::SubClientId& outNewClientId, bool const isInitialCheck) const;

    MCAPI void updateAudio(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client, ::Timer const& timer);

    MCAPI void updateGraphics(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client, ::Timer const& timer);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MinecraftGameArguments&& args);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initialize();

    MCAPI bool $stop();

    MCAPI void $processActivationArguments(::Bedrock::ActivationArguments const& args);

    MCAPI void $audioEngineOn();

    MCAPI void $audioEngineOff();

    MCAPI void $update();

    MCAPI void $play(::std::string const& name, ::Vec3 const& pos, float volume, float pitch);

    MCAPI void $playUI(::std::string const& name, float volume, float pitch);

    MCAPI void $stopSound(::std::string const& name);

    MCAPI void $stopSounds();

    MCAPI void $setUISizeAndScale(int w, int h, float forcedGuiScale);

    MCAPI void $setRenderingSize(int w, int h);

    MCAPI void $recalculateScene();

    MCAPI void $setSmoothFontStyle();

    MCAPI void $setUIFontStyle();

    MCAPI ::Bedrock::Threading::Async<void> $startLocalServerAsync(
        ::std::string const&     levelId,
        ::std::string const&     levelName,
        ::ContentIdentity const& premiumTemplateContentIdentity,
        ::LevelSettings const&   settings,
        ::StartIntent            startIntent
    );

    MCAPI void $createAndUploadWorldToRealm(
        ::std::string const&                   levelId,
        ::std::string const&                   levelName,
        ::ContentIdentity const&               premiumTemplateContentIdentity,
        ::LevelSettings const&                 settings,
        ::Realms::World                        world,
        ::std::function<void(::Realms::World)> callback
    );

    MCAPI bool $canStartLocalServer() const;

    MCAPI bool $isAudioInitialized() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::SoundEngine> $getSoundEngine() const;

    MCAPI ::MusicManager const* $getMusicManager() const;

    MCAPI ::MusicManager* $getMusicManagerNonConst() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ITextBoxController> $getTextBoxController();

    MCAPI void $onLowMemory(::LowMemorySeverity);

    MCAPI void $onAppFocusLost();

    MCAPI void $onAppFocusGained();

    MCAPI void $onAppPaused();

    MCAPI void $onAppUnpaused();

    MCAPI void $setReconnectionCookie(
        ::std::optional<::std::variant<
            ::GameConnectionInfoEx,
            ::Social::MultiplayerGameInfo,
            ::ExperienceJoinRequestInfo,
            ::Realms::RealmId>> const& reconnectCookie
    );

    MCAPI ::std::optional<::std::variant<
        ::GameConnectionInfoEx,
        ::Social::MultiplayerGameInfo,
        ::ExperienceJoinRequestInfo,
        ::Realms::RealmId>>
    $getReconnectionCookie();

    MCAPI void $onAppPreSuspended();

    MCAPI void $onAppSuspended();

    MCAPI void $onAppResumed();

    MCAPI void $onDeviceLost();

    MCAPI void $onAppSurfaceCreated();

    MCAPI void $onAppSurfaceDestroyed();

    MCAPI void $onOperationModeChanged(::OperationMode newMode);

    MCAPI bool $hasNetworkPrivileges(bool onlyWifiAllowed);

    MCAPI void $onPlayerLoaded(::IClientInstance& client, ::Player& player);

    MCAPI void $onDimensionChanged();

    MCAPI void $setDisableInputForAllOtherClients(int id, bool disableStatus);

    MCAPI void $onGameEventNotification(::ui::GameEventNotification notification);

    MCAPI void $playerListChanged();

    MCAPI void $onLevelDestruction(::std::string const& levelId);

    MCAPI void $setWorldTransferAction(
        ::std::variant<
            ::LocalWorldTransferActionFunc,
            ::ExternalWorldTransferActionFunc,
            ::RealmTransferActionFunc,
            ::std::monostate>&& worldTransferAction
    );

    MCAPI ::std::variant<
        ::LocalWorldTransferActionFunc,
        ::ExternalWorldTransferActionFunc,
        ::RealmTransferActionFunc,
        ::std::monostate> const&
    $getWorldTransferAction() const;

    MCAPI ::Bedrock::NonOwnerPointer<::WorldTransferAgent> const $getWorldTransferAgent() const;

    MCAPI void $setIsWorldTransferInProgress(bool isWorldTransferInProgress);

    MCAPI bool $isWorldTransferInProgress() const;

    MCAPI void $setResetCallbackObject(::ResetCallbackObject* obj);

    MCAPI void $requestLeaveGame(bool switchScreen, bool sync);

    MCAPI void $requestLeaveThenJoinFriendsWorld(::std::string_view serverId);

    MCAPI void $requestLeaveGameWithWorldThumbnail();

    MCAPI void $requestLeaveGameWithWorldThumbnailThenJoinFriendsWorld(::std::string_view serverId);

    MCAPI void $startLeaveGame();

    MCAPI bool $isLeaveGameDone() const;

    MCAPI void $destroyGame();

    MCAPI void $setupCommandParser(::IClientInstance& client);

    MCAPI void $onClientCreatedLevel(::IClientInstance& client);

    MCAPI ::GameRenderer& $getGameRenderer() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository> $getUIDefRepo() const;

    MCAPI void $joinRealmsGame(
        ::Realms::World const&              realm,
        ::Social::GameConnectionInfo const& gameConnection,
        ::PlayerJoinWorldContext            context
    );

    MCAPI void $joinRealmFromInvite(::Realms::World const& world);

    MCAPI void $joinRealmFromConnectLink(::Realms::World const& world, ::PlayerJoinWorldContext context);

    MCAPI void $setRealmsLoadingLink(bool state);

    MCAPI void $joinRealm(
        ::Realms::World const&                    world,
        ::IMinecraftEventing::RealmConnectionFlow telemetryEventingConnectionFlow,
        ::PlayerJoinWorldContext                  context
    );

    MCAPI ::Bedrock::Threading::Async<void> $joinMultiplayerGame(
        ::Social::MultiplayerGameInfo const& gameInfo,
        ::PlayerJoinWorldContext             context,
        ::OnlineSafetyDialogVisibility       onlineSafetyDialogVisibility
    );

    MCAPI void $joinMultiplayerWithAddress(
        ::Social::GameConnectionInfo gameConnection,
        bool                         joiningLocalServer,
        ::std::string const&         serverName,
        ::std::string const&         worldName,
        ::NetworkType                networkTypeOverride,
        ::std::shared_ptr<bool>      userCancelled,
        ::PlayerJoinWorldContext     context
    );

    MCAPI void $joinRemoteServerWithAddress(
        ::Social::GameConnectionInfo gameConnection,
        ::std::string const&         serverName,
        ::std::string const&         worldName,
        ::NetworkType                networkTypeOverride,
        ::std::shared_ptr<bool>      userCancelled,
        ::PlayerJoinWorldContext     context
    );

    MCAPI bool $isLocalPlayer(::ActorUniqueID const& id) const;

    MCAPI void $setLeaveGameInProgressAsReadyToContinue();

    MCAPI bool $isPrimaryClientInstanceReady() const;

    MCAPI void $ensureAllClientsAreLeaving() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> $getPrimaryClientInstance();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IClientInstance const> $getPrimaryClientInstance() const;

    MCAPI ::ItemRegistryRef $getClientItemRegistry() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::NewPlayerSystem> $getNewPlayerSystem();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::NewPlayerSystem const> $getNewPlayerSystem() const;

    MCAPI ::std::map<::SubClientId, ::std::shared_ptr<::IClientInstance>> const& $getClientInstanceMap() const;

    MCAPI ::std::shared_ptr<::IClientInstance> $tryGetClientInstanceFromPlayerUUID(::mce::UUID const& playerId) const;

    MCAPI uint $getUIRenderClientMask() const;

    MCAPI uint64 $getClientInstanceCount() const;

    MCAPI void $forEachClientInstance(::std::function<void(::IClientInstance&)> callback);

    MCAPI ::LocalPlayer* $getPrimaryLocalPlayer();

    MCAPI ::LocalPlayer const* $getPrimaryLocalPlayer() const;

    MCAPI bool $isPrimaryLevelCrossPlatformMultiplayer() const;

    MCAPI bool $isPrimaryLevelMultiplayer() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::GuiData> $getPrimaryGuiData();

    MCAPI ::std::shared_ptr<::OptionRegistry> $getPrimaryUserOptions();

    MCAPI ::std::shared_ptr<::OptionRegistry const> $getPrimaryUserOptions() const;

    MCAPI bool $isPrimaryUserSigninInProgress() const;

    MCAPI void $resetInput();

    MCAPI ::PixelCalc const& $getDpadScale() const;

    MCAPI void $setKeyboardForcedHeight(float height, bool isShowSignal);

    MCAPI bool $canActivateKeyboard();

    MCAPI void $reloadAnimationAndGeometryData(bool sync);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> $getGeometryGroup() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::BlockCullingGroup> $getBlockCullingGroup() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ClientBlockPipeline::SchematicsRepository> $getSchematicsRepository() const;

    MCAPI ::ParticleEffectGroup& $getParticleEffectGroup() const;

    MCFOLD ::DeferredLighting& $getDeferredLighting() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ContentAcquisition> $getContentAcquisition() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IOfferRepository> $getOfferRepository() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::TrialManager> $getTrialManager() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::PersonaService> $getPersonaService() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::GatheringManager> $getGatheringManager() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> $getContentCatalogService() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> $getStoreCatalog() const;

    MCAPI ::ServiceDrivenImageRepository& $getServiceImageRepository() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::LibraryRepository> $getLibraryRepository() const;

    MCAPI ::std::shared_ptr<::ActorAnimationGroup> $getActorAnimationGroup() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ActorAnimationControllerGroup> $getActorAnimationControllerGroup() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository const> $getThirdPartyServerRepository() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository> $getThirdPartyServerRepository();

    MCAPI ::std::shared_ptr<::SkinRepository> $getSkinRepository() const;

    MCAPI ::PersonaRepository& $getPersonaRepository() const;

    MCAPI ::MarketplaceServicesManager& $getMarketplaceServicesManager() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> $getWorldTemplateManager() const;

    MCAPI ::World::WorldSystem& $getWorldSystem() const;

    MCAPI bool $isWorldSystemReady() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsSystem> $getRealmsSystem() const;

    MCAPI ::Social::SocialSystem& $getSocialSystem() const;

    MCAPI ::Bedrock::NonOwnerPointer<::Parties::PartySystem> $getPartySystem() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Progress::ProgressTips> $getUIProgressTips() const;

    MCAPI ::IResourcePackRepository& $getResourcePackRepository() const;

    MCAPI ::ResourcePackManager& $getResourcePackManager() const;

    MCAPI ::ResourcePackManager& $getServerResourcePackManager();

    MCAPI ::PackManifestFactory& $getPackManifestFactory();

    MCAPI ::PlayerMessagingService& $getPlayerMessagingService();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> $getKeyProvider() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider const> $getAccessibilityProvider() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider> $getAccessibilityProvider();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> $getContentTierManager() const;

    MCAPI ::PackSourceFactory& $getPackSourceFactory() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> $getResourceLoadManager();

    MCAPI ::ILevelListCache& $getLevelListCache();

    MCAPI bool $hasAllValidCrossPlatformSkin() const;

    MCFOLD ::PackDownloadManager& $getPackDownloadManager();

    MCAPI ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> $getLinkedAssetValidator() const;

    MCAPI bool $isMultiplayerServiceManagerReady() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> $getMultiplayerServiceManager() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> $getUserManager() const;

    MCAPI ::IMinecraftEventing& $getEventing() const;

    MCAPI ::ServerInstance* $getServerInstance();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ServerInstance> $getServerInstanceNonOwnPtr();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ClientNetworkSystem> $getClientNetworkSystemPtr();

    MCAPI ::ClientNetworkSystem& $getClientNetworkSystem();

    MCAPI ::ClientNetworkSystem const& $getClientNetworkSystem() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ActiveDirectoryIdentity> $getActiveDirectoryIdentity();

    MCAPI void $clearCache();

    MCAPI void $releaseClientSubId(::SubClientId subid);

    MCAPI bool $isStartingGame() const;

    MCAPI bool $isSplitscreenJoinEnabled() const;

    MCAPI bool $canAddSplitscreenSubClient(int controllerId) const;

    MCAPI void $addSubClientInstanceAndAssociateToUser(int controllerId);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> $retrieveCIDToClientMap();

    MCAPI ::Bedrock::PubSub::Subscription
    $registerSplitScreenChangedListener(::std::function<void(uchar)> callback) const;

    MCAPI uchar $getSplitScreenCount() const;

    MCAPI float $calculateScreenSizeToResolutionScalar(int const width, int const height) const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::GlobalResourcesCrashRecovery const> $GetGlobalResourcesCrashRecovery() const;

    MCAPI bool $isReadyToRender() const;

    MCAPI bool $isShowingLoadingScreen() const;

    MCAPI bool $isRenderingLoadingScreen() const;

    MCAPI void $registerUpsellScreen();

    MCAPI ::SceneFactory& $getPrimarySceneFactory() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> $getMainSceneStack() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> $getMainSceneStack();

    MCAPI ::OreUI::Router& $getUIRouter();

    MCAPI ::OreUI::DataProviderManager_DEPRECATED& $getDataProviderManager();

    MCAPI ::std::weak_ptr<::RealmsAPI> $getRealms();

    MCAPI ::Realms::ContentService& $getRealmsContentService();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsServices> $getRealmsServices();

    MCAPI ::std::weak_ptr<::ClubsService> $getClubsService();

    MCAPI ::std::shared_ptr<::Realms::GenericRequestServiceHandler> $getGenericRealmsService();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Realms::SubscriptionService> $getRealmsSubscriptionService();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Social::PresenceManager> $getPresenceManager();

    MCAPI ::Bedrock::NonOwnerPointer<::EDUSystems> $getEDUSystems();

    MCAPI ::Bedrock::NonOwnerPointer<::EDUSystems const> $getEDUSystems() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Minecraft> $getPrimaryMinecraft();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Automation::AutomationClient> $getAutomationClient() const;

    MCFOLD bool $isDedicatedServer() const;

    MCFOLD bool $isEduMode() const;

    MCAPI void $onNetworkMaxPlayersChanged(uint newMaxPlayerCount);

    MCAPI ::IGameModuleApp& $getGameModule();

    MCAPI ::IGameModuleShared& $getGameModuleShared();

    MCAPI void $requestServerShutdown();

    MCAPI void $setLaunchedFromLegacyVersion(bool launchedFromLegacyVersion);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FileArchiver> $getFileArchiver() const;

    MCAPI bool $requestInGamePause(::SubClientId const& subClient, bool status);

    MCAPI ::InputMode $getCurrentInputMode() const;

    MCAPI void $handleInputPaneHidden();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::LevelLoader> $getLevelLoader();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ExternalContentManager> $getContentManager();

    MCAPI ::IContentManager& $getResourceContentManager();

    MCAPI ::std::string $getMultiplayerDisabledTextTitle(::MultiplayerLockedContext context) const;

    MCAPI ::std::string $getMultiplayerDisabledTextBody(::MultiplayerLockedContext context) const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IExternalServerFile> $getExternalServer() const;

    MCAPI ::std::shared_ptr<::mce::TextureGroup> $getTextureGroup() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::mce::TextureGroup> $getStoreCacheTextures() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::MinecraftGraphics> $getMinecraftGraphics();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::TextureAtlas> $getTextureAtlas();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IUIRepository> $getUIRepository() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::SeasonsRenderer> $getSeasonsRenderer();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> $getFilePathManager();

    MCAPI void $setUseFontOverrides(bool useOverrides);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FontRepository const> $getFontRepository() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::EmoticonManager const> $getEmoticonManager() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::TextToIconMapper const> $getTextToIconMapper() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::TextToIconMapper> $getTextToIconMapper();

    MCAPI bool $getMouseGrabbed() const;

    MCAPI void $navigateToPlayScreenFriendsTab();

    MCAPI bool $hasActorResourceDefinitionGroup() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup const> $getActorResourceDefinitionGroup() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::RenderControllerGroup const> $getRenderControllerGroup() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::RenderControllerGroup> $getRenderControllerGroup();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> $getActorResourceDefinitionGroupMutable();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> $getOreUIResourceAllowList();

    MCAPI ::Bedrock::Threading::Async<::Core::PathBuffer<::std::string>>
    $requestScreenshot(::ScreenshotOptions& screenshotOptions);

    MCAPI void $onActiveResourcePacksChanged(::ResourcePackManager& mgr);

    MCAPI bool $onFullPackStackInvalid();

    MCAPI void $onLanguageSubpacksChanged();

    MCAPI void $onBaseGamePackDownloadComplete();

    MCAPI void $displayActiveDirectoryLoginDialog();

    MCAPI void $handleReloadUIDefinitions();

    MCAPI void $onPushNotificationReceived(::PushNotificationMessage const& msg);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FlightingService> $getFlightingService() const;

    MCAPI ::std::shared_ptr<::FlightingService> $getFlightingServicePtr() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::TreatmentPackDownloadMonitor const> $getTreatmentPackDownloadMonitor() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> $getEntitlementManager();

    MCAPI ::IDlcValidation& $getDlcValidation();

    MCAPI ::ServicesManager& $getServicesManager();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::SunsettingManager> $getSunsettingManager();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::DateManager> $getDateManager() const;

    MCAPI void $grabMouse();

    MCAPI void $releaseMouse();

    MCAPI void $muteAudio();

    MCAPI void $unMuteAudio();

    MCAPI uint64 $generateClientId(
        bool                              forceReset,
        bool&                             generatedNewId,
        uint64                            clientIdModifier,
        ::std::shared_ptr<::Social::User> user
    );

    MCAPI bool $isHostingLocalDedicatedServer() const;

    MCAPI void $shutdownServer();

    MCAPI void $pauseContentDownloads();

    MCAPI void $resumeContentDownloads();

    MCAPI ::UIMeasureStrategy& $getUIMeasureStrategy();

    MCFOLD void $copyInternalSettingsFolderToExternalLocation() const;

    MCAPI void $onClientLevelExit(::IClientInstance& exitClient, uint exitCode);

    MCAPI void $resetThreadCallbacks();

    MCAPI bool $isInGame() const;

    MCAPI bool $isInServer() const;

    MCAPI bool $isInRealm() const;

    MCAPI void $fadeOutMusic();

    MCAPI bool $isInitialized() const;

    MCFOLD bool $useMinecraftVersionOfXBLUI() const;

    MCAPI int $getMaxPlayerCount() const;

    MCAPI void $setProfilerIsOn(bool val);

    MCAPI void $onPrimaryUserReconnect(::Social::UserPlatformConnectionResult status, bool isUserInitiated);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources> $getCubemapBackgroundResources();

    MCAPI void $setAppWillTerminate(bool willTerminate);

    MCAPI ::DeferredTasksManager<::DeferredTaskCategory>& $getDeferredTasks();

    MCFOLD void $onForceCloudSave();

    MCAPI void $onOptionsLoadBegin();

    MCAPI void $onOptionsLoadComplete();

    MCAPI bool $shouldShowRatingsPrompt() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ServerInstanceEventCoordinator> $getServerInstanceEventCoordinator();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IApp> $getApp();

    MCAPI bool $getSuspended() const;

    MCAPI bool $isResuming() const;

    MCAPI void $doPrimaryClientReadyWork(::std::function<void()> workFn);

    MCAPI void $doUserManagerReadyWork(::std::function<void()> workFn);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ScreenshotRecorder> $getScreenshotRecorder();

    MCAPI bool $isEditorModeEnabled() const;

    MCAPI ::Bedrock::NonOwnerPointer<::ContentLogFileEndPoint> const $getContentFileLogEndPoint() const;

    MCAPI bool $isMusicEnabled() const;

    MCAPI void
    $queueCustomMusic(::std::string const& eventName, float volume, float fadeoutSeconds, ::MusicRepeatMode playMode);

    MCAPI void
    $playCustomMusic(::std::string const& eventName, float volume, float fadeoutSeconds, ::MusicRepeatMode playMode);

    MCAPI void $setMusicCommandVolumeMultiplier(float volumeMultiplier);

    MCAPI void $stopCustomMusic(float fadeoutSeconds);

    MCAPI ::EntityContext& $getEntity() const;

    MCAPI ::AppSystemRegistry& $getAppSystemRegistry();

    MCAPI void $onLanguageChanged(::std::string const& code, bool languageSystemInitializing);

    MCFOLD void $onLanguageKeywordsLoadedFromPack(::PackManifest const& manifest);

    MCFOLD void $onLanguagesLoaded();

    MCAPI void $buildTreatmentPackStack(bool fireEvents) const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv> $getLevelDbEnv();

    MCAPI ::Bedrock::NonOwnerPointer<::ChunkSource> $getClientGenChunkSource(::DimensionType const& dimensionType);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> $getProfanityContext();

    MCAPI double $getGameUpdateDurationInSeconds() const;

    MCAPI void $queueSubclientRemoval(::SubClientId subid);

    MCAPI void $logoffAllSubclients();

    MCAPI void $setIsInGame(bool isInGame);

    MCAPI void $createClientItemRegistry();

    MCAPI ::Bedrock::NonOwnerPointer<::MinecraftInputHandler> $getInput() const;

    MCAPI ::std::unique_ptr<::LocalServerLauncher::IGameInterface> $createGameInterface();

    MCAPI ::std::unique_ptr<::LocalServerLauncher::IServerInstanceBuilder> $createServerBuilder();

    MCAPI ::std::unique_ptr<::LocalServerLauncher::GameDependencies> $createGameDependencies();

    MCAPI ::TaskGroup& $_getServerInitTaskGroup();

    MCAPI bool $isMultiPlayerInitialized() const;

    MCAPI bool $checkMultiPlayerPermission(::std::optional<::Social::MultiplayerServiceIdentifier> service);

    MCAPI bool $isPlayingLevel() const;

    MCAPI void $initImpl();

    MCAPI void $refocusMouse(bool lostMouse);

    MCAPI void $setMouseType(::Bedrock::Input::PointerType type);

    MCAPI void $onNotify(::edu::auth::CredentialsAcquired const& state);

    MCFOLD void $onNotify(::edu::auth::CredentialsRefreshSuccess const& state);

    MCFOLD void $onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsLost> const& state);

    MCAPI bool $checkForPiracy() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::DevConsoleLogger> $getDevConsoleLogger() const;

    MCAPI void $completeServerStartup(
        ::std::shared_ptr<::LocalServerLauncher::ServerInitData> serverInitData,
        ::LocalServerLauncher::ServerLaunchResult&&              result
    );
    // NOLINTEND
#else // @header-generator platform
    struct FrameGapImpl {};
#endif // @header-generator platform
#endif // @header-generator platform
};
