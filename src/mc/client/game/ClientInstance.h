#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/client/game/ClientGameSetupResult.h"
#include "mc/client/game/ClientInstanceArguments.h"
#include "mc/client/game/ClientInstanceState.h"
#include "mc/client/game/ConnectionContext.h"
#include "mc/client/game/ControlOptionType.h"
#include "mc/client/game/DiskStatus.h"
#include "mc/client/game/IClientInstance.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/StoreNavigationOrigin.h"
#include "mc/client/gui/oreui/Telemetry.h"
#include "mc/client/gui/screens/controllers/InventoryTabIndex.h"
#include "mc/client/gui/screens/controllers/MarketplacePassTabIndex.h"
#include "mc/client/gui/screens/models/PlayScreenDefaultTab.h"
#include "mc/client/options/SplitScreenDirection.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/connection/UIReturnTarget.h"
#include "mc/client/store/StoreErrorCodes.h"
#include "mc/client/util/ClipboardProxy.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/file/LevelStorageState.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/StorageAreaStateListener.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/CrashDumpLogStringID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/core_graphics/math/Rect.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/PointerType.h"
#include "mc/deps/input/WYSIWIGData.h"
#include "mc/deps/input/enums/WYSIWYGState.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/deps/renderer/Camera.h"
#include "mc/deps/renderer/MatrixStack.h"
#include "mc/deps/renderer/ShaderColor.h"
#include "mc/deps/renderer/ViewportInfo.h"
#include "mc/events/NetworkType.h"
#include "mc/input/ClientPlayMode.h"
#include "mc/network/GameConnectionInfo.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/connection/DisconnectionStage.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/util/ProfanityFilterContext.h"
#include "mc/world/GameCallbacks.h"
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/player/PlayerListener.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class Actor;
class ActorAnimationGroup;
class ActorBlockRenderer;
class ActorRenderDispatcher;
class ActorResourceDefinitionGroup;
class BlockActorRenderDispatcher;
class BlockCullingGroup;
class BlockSource;
class BlockTessellator;
class BuildActionIntention;
class CachedScenes;
class CameraRegistry;
class ClientHitDetectCoordinator;
class ClientInputHandler;
class ClientInstanceEventCoordinator;
class ClientLevel;
class ClientMoveInputHandler;
class ClientNetworkEventCoordinator;
class ClientNetworkSystem;
class ClientRequirementVerifier;
class ClientScriptEventCoordinator;
class ClientScriptManager;
class ContentCatalogService;
class DateManager;
class DeferredLighting;
class DevConsoleLogger;
class DisconnectionRequestHandler;
class EDUSystems;
class EducationOptions;
class EntityContext;
class EntitySystems;
class FileDataRequest;
class FogDefinitionRegistry;
class FogManager;
class FontHandle;
class FrameUpdateContext;
class GameMode;
class GameModuleClient;
class GameRenderer;
class GeometryGroup;
class GuiData;
class GuidedFlowManager;
class HitDetectEventListener;
class HitDetectSystem;
class HitResult;
class HudIconActorRenderer;
class IAdvancedGraphicsOptions;
class IClientInstances;
class IConnectionEventing;
class IContentKeyProvider;
class IGameConnectionListener;
class IMinecraftEventing;
class IMinecraftGame;
class IOptionRegistry;
class IReadWriteOptions;
class IResourcePackRepository;
class ISceneStack;
class ITTSEventManager;
class IUIRepository;
class ItemInHandRenderer;
class ItemRegistryRef;
class ItemRenderer;
class KeyboardManager;
class LatencyGraphDisplay;
class LegacyClientNetworkHandler;
class Level;
class LevelListener;
class LevelRenderer;
class LevelRendererCameraProxy;
class LightTexture;
class LinkedAssetValidator;
class LocalPlayer;
class LoopbackPacketSender;
class MarketplaceServicesManager;
class Minecraft;
class MinecraftCommands;
class MinecraftGraphics;
class MinecraftInputHandler;
class MinecraftKeyboardManager;
class MobEffectsLayout;
class MusicManager;
class NetworkSessionOwner;
class Option;
class OptionRegistry;
class PackManifestFactory;
class PacketSender;
class PauseNotificationManager;
class PersonaClient;
class PersonaRepository;
class PixelCalc;
class Player;
class PlayerAuthentication;
class PlayerReportHandler;
class ProfanityContext;
class ResourcePackManager;
class SceneFactory;
class SceneStack;
class ScreenContext;
class ScreenLoadTimeTracker;
class Skin;
class SkinRepository;
class SoundEngine;
class StoreCatalogItem;
class StoreCatalogRepository;
class TTSEventManager;
class TaskGroup;
class TextToSpeechClient;
class TextureShiftManager;
class ToastManager;
class TrialManager;
class UIEventCoordinator;
class VideoCaptureSessionManager;
class WorldTransferAgent;
struct ActorUniqueID;
struct ClientInstanceArguments;
struct ClientInstanceInitArguments;
struct ConnectionContextInfo;
struct DisconnectionErrorDetails;
struct DisconnectionScreenParams;
struct ListenerState;
struct LocalPlayerChangedConnector;
struct PacksInfoData;
struct PlayerJoinWorldContext;
struct RawGameServerToken;
struct ScreenSizeData;
struct ScreenshotOptions;
struct ServerSupportedAuthenticationTypes;
struct SplitScreenInfo;
namespace ApplicationSignal { class ClipboardCopy; }
namespace ApplicationSignal { class ClipboardPasteRequest; }
namespace Automation { class AutomationClient; }
namespace Bedrock::Http { class Status; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace OreUI { class ITelemetry; }
namespace OreUI { class Router; }
namespace OreUI { class SceneProvider; }
namespace PlayerCapabilities { struct IClientController; }
namespace Realms { struct World; }
namespace Scripting { class ScriptEngine; }
namespace Settings { class IRegistry; }
namespace Social { class IUserManager; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class User; }
namespace World { class WorldSystem; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Texture; }
namespace mce { class TextureGroup; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

class ClientInstance : public ::IClientInstance,
                       public ::Core::StorageAreaStateListener,
                       public ::GameCallbacks,
                       public ::PlayerListener,
                       public ::std::enable_shared_from_this<ClientInstance> {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/client/game/ClientGameSetupResult.h"
#include "mc/client/game/ClientInstanceState.h"
#include "mc/client/game/ControlOptionType.h"
#include "mc/client/game/DiskStatus.h"
#include "mc/client/game/IClientInstance.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/StoreNavigationOrigin.h"
#include "mc/client/gui/screens/controllers/InventoryTabIndex.h"
#include "mc/client/gui/screens/controllers/MarketplacePassTabIndex.h"
#include "mc/client/gui/screens/models/PlayScreenDefaultTab.h"
#include "mc/client/options/SplitScreenDirection.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/connection/UIReturnTarget.h"
#include "mc/client/store/StoreErrorCodes.h"
#include "mc/client/util/ClipboardProxy.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/file/LevelStorageState.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/StorageAreaStateListener.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core_graphics/math/Rect.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/PointerType.h"
#include "mc/deps/input/enums/WYSIWYGState.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/deps/renderer/MatrixStack.h"
#include "mc/events/NetworkType.h"
#include "mc/input/ClientPlayMode.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/ProfanityFilterContext.h"
#include "mc/world/GameCallbacks.h"
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/player/PlayerListener.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class Actor;
class ActorAnimationGroup;
class ActorBlockRenderer;
class ActorRenderDispatcher;
class ActorResourceDefinitionGroup;
class BlockActorRenderDispatcher;
class BlockCullingGroup;
class BlockSource;
class BlockTessellator;
class BuildActionIntention;
class CachedScenes;
class CameraRegistry;
class ClientHitDetectCoordinator;
class ClientInputHandler;
class ClientInstanceEventCoordinator;
class ClientLevel;
class ClientMoveInputHandler;
class ClientNetworkEventCoordinator;
class ClientNetworkSystem;
class ClientRequirementVerifier;
class ClientScriptEventCoordinator;
class ClientScriptManager;
class DateManager;
class DeferredLighting;
class DevConsoleLogger;
class DisconnectionRequestHandler;
class EDUSystems;
class EntityContext;
class EntitySystems;
class FileDataRequest;
class FogDefinitionRegistry;
class FogManager;
class FontHandle;
class FrameUpdateContext;
class GameModuleClient;
class GameRenderer;
class GeometryGroup;
class GuiData;
class GuidedFlowManager;
class HitDetectSystem;
class HitResult;
class HudIconActorRenderer;
class IClientInstances;
class IConnectionEventing;
class IContentKeyProvider;
class IGameConnectionListener;
class IMinecraftEventing;
class IMinecraftGame;
class IOptionRegistry;
class IReadWriteOptions;
class IResourcePackRepository;
class ISceneStack;
class ITTSEventManager;
class IUIRepository;
class ItemInHandRenderer;
class ItemRegistryRef;
class ItemRenderer;
class KeyboardManager;
class LatencyGraphDisplay;
class LegacyClientNetworkHandler;
class Level;
class LevelRenderer;
class LevelRendererCameraProxy;
class LightTexture;
class LinkedAssetValidator;
class LocalPlayer;
class MarketplaceServicesManager;
class Minecraft;
class MinecraftGraphics;
class MinecraftInputHandler;
class MobEffectsLayout;
class MusicManager;
class Option;
class OptionRegistry;
class PackManifestFactory;
class PacketSender;
class PersonaClient;
class PersonaRepository;
class PixelCalc;
class Player;
class PlayerAuthentication;
class PlayerReportHandler;
class ProfanityContext;
class ResourcePackManager;
class SceneFactory;
class ScreenContext;
class ScreenLoadTimeTracker;
class ShaderColor;
class SkinRepository;
class SoundEngine;
class StoreCatalogItem;
class StoreCatalogRepository;
class TaskGroup;
class TextToSpeechClient;
class ToastManager;
class TrialManager;
class UIEventCoordinator;
class Vec2;
class Vec3;
class WeakEntityRef;
class WorldTransferAgent;
struct ActorUniqueID;
struct ClientInstanceArguments;
struct ClientInstanceInitArguments;
struct ConnectionContextInfo;
struct DisconnectionScreenParams;
struct ListenerState;
struct LocalPlayerChangedConnector;
struct PacksInfoData;
struct PlayerJoinWorldContext;
struct RawGameServerToken;
struct ScreenshotOptions;
struct ServerSupportedAuthenticationTypes;
struct SplitScreenInfo;
namespace ApplicationSignal { class ClipboardCopy; }
namespace ApplicationSignal { class ClipboardPasteRequest; }
namespace Automation { class AutomationClient; }
namespace Bedrock::Http { class Status; }
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Editor { class IEditorManager; }
namespace Editor { class IEditorPlayer; }
namespace OreUI { class ITelemetry; }
namespace OreUI { class Router; }
namespace OreUI { class SceneProvider; }
namespace OreUI { class UIBlockThumbnailAtlasManager; }
namespace PlayerCapabilities { struct IClientController; }
namespace Realms { struct World; }
namespace Scripting { class ScriptEngine; }
namespace Settings { class IRegistry; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class User; }
namespace World { class WorldSystem; }
namespace mce { class Camera; }
namespace mce { class Texture; }
namespace mce { class TextureGroup; }
namespace mce { struct ViewportInfo; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

class ClientInstance : public ::IClientInstance,
                       public ::Core::StorageAreaStateListener,
                       public ::GameCallbacks,
                       public ::PlayerListener,
                       public ::std::enable_shared_from_this<::ClientInstance> {
#else // @header-generator platform
class ClientInstance {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // ClientInstance inner types declare
    // clang-format off
    struct ClientRenderResources;
    struct ClientDestroyBlockState;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct mBehaviorCommandStatusCallback;
    struct mCreditsCallback;
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
    // clang-format on

    // ClientInstance inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ClientRenderResources {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::mce::Texture*>    mUITexture;
        ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mUICursorTexture;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ClientRenderResources {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::mce::Texture*>    mUITexture;
        ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mUICursorTexture;
        // NOLINTEND
    };
#else // @header-generator platform
    struct ClientRenderResources {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct ClientDestroyBlockState {
    public:
        // ClientDestroyBlockState inner types define
        using Callback = std::function<void()>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Player&>          mPlayer;
        ::ll::TypedStorage<8, 8, ::GameMode&>        mGameMode;
        ::ll::TypedStorage<1, 1, bool>               mDestroyButtonDown;
        ::ll::TypedStorage<8, 8, ::HitResult const&> mHit;
        ::ll::UntypedStorage<8, 48>                  mClearInProgressBAI;
        ::ll::UntypedStorage<8, 48>                  mStopDestroying;
        ::ll::UntypedStorage<8, 48>                  mVibrate;
        // NOLINTEND

    public:
        // prevent constructor by default
        ClientDestroyBlockState& operator=(ClientDestroyBlockState const&);
        ClientDestroyBlockState(ClientDestroyBlockState const&);
        ClientDestroyBlockState();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ClientDestroyBlockState();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, ::ClientInstanceState> mClientState;
    ::ll::UntypedStorage<8, 64> mCreateLevelRenderer;
    ::ll::UntypedStorage<8, 64> mInitCommands;
    ::ll::UntypedStorage<8, 64> mCreateLegacyClientNetworkHandler;
    ::ll::UntypedStorage<8, 24> mEventing;
    ::ll::TypedStorage<8, 8, ::LevelListener&> mLevelListener;
    ::ll::UntypedStorage<8, 24> mAdvancedGraphicsOptions;
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&> mMinecraftGame;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Minecraft>> mMinecraft;
    ::ll::TypedStorage<1, 1, bool> mIsFullVanillaPackOnStack;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LevelRenderer>> mLevelRenderer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LightTexture>> mLightTexture;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LoopbackPacketSender>> mPacketSender;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClientMoveInputHandler>> mClientMoveInputHandler;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClientInputHandler>> mClientInputHandler;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MinecraftKeyboardManager>> mKeyboardManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<HitDetectSystem>> mHitDetectSystem;
    ::ll::TypedStorage<8, 16, std::shared_ptr<PlayerAuthentication>> mPlayerAuthentication;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SceneFactory>> mSceneFactory;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CachedScenes>> mCachesScenes;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mCameraRef;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mCameraTargetRef;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mLocalUser;
    ::ll::UntypedStorage<8, 40> mLocalPlayerPublisher;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BuildActionIntention>> mInProgressBai;
    ::ll::TypedStorage<4, 4, ::ClientPlayMode> mPlayMode;
    ::ll::TypedStorage<1, 1, bool> mTickedLastFrame;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mOpenControllerDisconnectScreen;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mHandlingControllerDisconnect;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mConnectGamepadScreenActive;
    ::ll::TypedStorage<4, 4, ::PlayScreenDefaultTab> mDefaultPlayscreenTab;
    ::ll::TypedStorage<8, 24, std::string> mLastPlayScreenRouteBeforeGameplay;
    ::ll::TypedStorage<1, 1, bool> mInGameInputEnabled;
    ::ll::TypedStorage<1, 1, bool> mIsInUpdate;
    ::ll::UntypedStorage<8, 48> mCreditsCallback;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNoBlockBreakUntil;
    ::ll::TypedStorage<4, 24, ::mce::ViewportInfo> mViewportInfo;
    ::ll::TypedStorage<8, 40, ::ClientInstance::ClientRenderResources> mClientRenderResources;
    ::ll::TypedStorage<8, 8, ::mce::Texture*> mLevelTexture;
    ::ll::TypedStorage<8, 536, ::mce::Camera> mCamera;
    ::ll::TypedStorage<4, 20, ::ShaderColor> mShaderColor;
    ::ll::TypedStorage<4, 20, ::ShaderColor> mDarkShaderColor;
    ::ll::TypedStorage<4, 12, ::Vec3> mLastPointerLocation;
    ::ll::TypedStorage<8, 40, ::WYSIWIGData> mWYSIWYGData;
    ::ll::TypedStorage<8, 24, std::map<int, Vec2>> mTouchPointerLocations;
    ::ll::TypedStorage<4, 4, int> mActionPointerId;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SceneStack>> mSceneStack;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::Router>> mUIRouter;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContentCatalogService>> mServerService;
    ::ll::TypedStorage<8, 16, std::shared_ptr<TextToSpeechClient>> mTextToSpeechClient;
    ::ll::TypedStorage<8, 16, std::shared_ptr<TTSEventManager>> mTTSEventManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockTessellator>> mBlockTessellator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockActorRenderDispatcher>> mBlockEntityRenderDispatcher;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ActorRenderDispatcher>> mActorRenderDispatcher;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorBlockRenderer>> mEntityBlockRenderer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ItemInHandRenderer>> mItemInHandRenderer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ItemRenderer>> mItemRenderer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<HudIconActorRenderer>> mHudIconActorRenderer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<GuiData>> mGuiData;
    ::ll::TypedStorage<8, 8, std::unique_ptr<GuidedFlowManager>> mGuidedFlowManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MobEffectsLayout>> mMobEffectsLayout;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ToastManager>> mToastManager;
    ::ll::TypedStorage<1, 1, ::SubClientId const> mClientSubId;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClipboardProxy<ApplicationSignal::ClipboardCopy, ApplicationSignal::ClipboardPasteRequest>>> mClipboardManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PersonaClient>> mPersonaClient;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FogDefinitionRegistry>> mFogDefinitionRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FogManager>> mFogManager;
    ::ll::TypedStorage<1, 1, bool> mIsSceneStackChanging;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScreenLoadTimeTracker>> mScreenLoadTimeTracker;
    ::ll::TypedStorage<4, 4, float> mRemoteServerTime;
    ::ll::TypedStorage<4, 4, float> mRemoteNetworkTime;
    ::ll::TypedStorage<8, 16, std::shared_ptr<PlayerReportHandler>> mPlayerReportHandler;
    ::ll::TypedStorage<1, 1, bool> mHasSwitchedScreen;
    ::ll::TypedStorage<1, 1, bool> mShouldLeaveGame;
    ::ll::TypedStorage<1, 1, bool> mPreparingToLeaveGame;
    ::ll::TypedStorage<1, 1, bool> mIsLeavingGame;
    ::ll::TypedStorage<1, 1, bool> mSyncLeaveGame;
    ::ll::TypedStorage<1, 1, bool> mDestroyingGame;
    ::ll::TypedStorage<1, 1, bool> mShuttingDown;
    ::ll::TypedStorage<8, 648, std::optional<Social::GameConnectionInfo>> mConnectionInfo;
    ::ll::TypedStorage<1, 1, bool> mUsingTripodNow;
    ::ll::TypedStorage<1, 1, bool> mDisconnectionRequestInProgress;
    ::ll::TypedStorage<4, 4, std::atomic<int>> mCriticalDiskTelemetrySentCount;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mUnrecoverableErrorTelemetrySent;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mServerConnectionTime;
    ::ll::TypedStorage<4, 4, int> mServerPingTime;
    ::ll::TypedStorage<8, 48, std::deque<std::string>> mSentMessageHistory;
    ::ll::TypedStorage<8, 48, std::deque<std::string>> mDevConsoleMessageHistory;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IGameConnectionListener>> mGameConnectionListener;
    ::ll::UntypedStorage<8, 48> mBehaviorCommandStatusCallback;
    ::ll::UntypedStorage<8, 16> mUIEventCoordinator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClientHitDetectCoordinator>> mHitEventCoordinator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClientNetworkEventCoordinator>> mClientNetworkEventCoordinator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<HitDetectEventListener>> mHitDetectEventListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClientScriptEventCoordinator>> mClientScriptEventCoordinator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<EducationOptions>> mEducationOptions;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Core::FileStorageArea>> mStorageArea;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mPrevCursorPos;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mCurrentCursorPos;
    ::ll::TypedStorage<4, 4, float> mCursorPosAlpha;
    ::ll::TypedStorage<8, 8, ::LatencyGraphDisplay*> mLatencyGraphDisplay;
    ::ll::TypedStorage<8, 8, std::unique_ptr<GameModuleClient>> mGameModule;
    ::ll::UntypedStorage<8, 24> mEventCoordinator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClientScriptManager>> mClientScriptManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mEnableClientScriptOptionObserver;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlayerCapabilities::IClientController>> mClientCapabilities;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::SceneProvider>> mSceneProvider;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ui::ScreenTechStackSelector>> mScreenTechStackSelector;
    ::ll::TypedStorage<8, 24, ::OreUI::Telemetry> mOreUITelemetry;
    ::ll::UntypedStorage<1, 16> mUIBlockThumbnailAtlasManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ClientRequirementVerifier>> mClientRequirementVerifier;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DisconnectionRequestHandler>> mDisconnectionRequestHandler;
    ::ll::UntypedStorage<8, 8> mEditorManager;
    ::ll::TypedStorage<8, 232, ::ConnectionContext> mConnectionContext;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mControlTipsTimeElapsedStart;
    ::ll::UntypedStorage<8, 24> mNetworkSessionOwner;
    ::ll::UntypedStorage<8, 24> mVideoCaptureSessionManager;
    ::ll::UntypedStorage<8, 24> mTextureShiftManager;
    ::ll::TypedStorage<1, 1, bool> mIsClientThrottleEnabled;
    ::ll::TypedStorage<4, 4, int> mClientThrottleRenderDistanceThreshold;
    ::ll::TypedStorage<4, 4, float> mClientThrottleRenderDistanceScalar;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPerspectiveOptionChangeSubscription;
    ::ll::TypedStorage<4, 40, std::mutex> mUserLock;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::User>> mUser;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IOptionRegistry>> mOptions;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PauseNotificationManager>> mPauseNotificationManager;
    ::ll::UntypedStorage<8, 24> mCerealContext;
    ::ll::TypedStorage<8, 8, ulong> mPreLoadingNumContentLogErrors;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPartyEventSub;
    ::ll::UntypedStorage<8, 24> mWeakSettingsRegistry;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInstance& operator=(ClientInstance const&);
    ClientInstance(ClientInstance const&);
    ClientInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ClientInstance();

    virtual void onInitMinecraftGame();

    virtual void onDestroyMinecraftGame();

    virtual void init(::ClientInstanceInitArguments&&);

    virtual void initSceneFactory(std::unique_ptr<SceneFactory>, std::unique_ptr<OreUI::SceneProvider>);

    virtual void setUiRouter(std::unique_ptr<OreUI::Router>);

    virtual void initGraphics();

    virtual void stop();

    virtual void teardown();

    virtual void preShutDown();

    virtual void setGameConnectionInfo(::Social::GameConnectionInfo const&);

    virtual std::optional<Social::GameConnectionInfo> getGameConnectionInfo();

    virtual void onStartJoinGame(bool, std::string const&, std::string const&, std::string const&, ::NetworkType, ::Social::MultiplayerServiceIdentifier, ::PlayerJoinWorldContext);

    virtual void onCancelJoinGame();

    virtual void requestLeaveGameAsync();

    virtual void requestLeaveGame(bool, bool);

    virtual void stopPlayScreen();

    virtual bool isLeaveGameDone() const;

    virtual void setupPlayScreenForLeaveGame();

    virtual void preCacheOutOfGameViews();

    virtual void resetPrimaryClient();

    virtual void resetGameSession();

    virtual void tick();

    virtual void frameUpdate(::FrameUpdateContext&);

    virtual bool update(bool);

    virtual void preFrameTick();

    virtual void endFrame();

    virtual float getFrameAlpha();

    virtual void startSubClientLateJoin(bool, std::unique_ptr<GameModuleClient>, std::optional<ConnectionContextInfo>);

    virtual ::Bedrock::Threading::Async<ClientGameSetupResult> setupClientGame(bool, ::ServerSupportedAuthenticationTypes, std::unique_ptr<GameModuleClient>);

    virtual ::BlockSource* getRegion();

    virtual ::LocalPlayer* getLocalPlayer() const;

    virtual void setupPrimaryClientEditorManager();

    virtual ::Bedrock::NonOwnerPointer<Editor::IEditorPlayer> getLocalEditorPlayer() const;

    virtual ::Bedrock::NonOwnerPointer<Editor::IEditorManager> getEditorManager() const;

    virtual bool isPlayerInEditor() const;

    virtual ::LocalPlayerChangedConnector getLocalPlayerChangedConnector();

    virtual ::WeakEntityRef getLocalUser() const;

    virtual ::Actor* getCameraActor() const;

    virtual void setCameraActor(::Actor*);

    virtual ::ListenerState const* getListenerState() const;

    virtual ::Actor* getCameraTargetActor() const;

    virtual void setCameraTargetActor(::Actor*);

    virtual ::WeakEntityRef getCameraEntity() const;

    virtual void getRawCameraEntities(::WeakEntityRef&, ::WeakEntityRef&) const;

    virtual void setRawCameraEntities(::WeakEntityRef, ::WeakEntityRef);

    virtual ::HitResult const& getLatestHitResult() const;

    virtual bool isLeavingGame() const;

    virtual bool isDestroyingGame() const;

    virtual bool isShuttingDown() const;

    virtual bool useLowFrequencyUIRender() const;

    virtual bool isSplitScreenActive() const;

    virtual bool isExitingLevel() const;

    virtual bool isInBedScreen() const;

    virtual bool isInDeathScreen() const;

    virtual bool isKeyboardEnabled() const;

    virtual bool hasCommands() const;

    virtual int getSplitScreenCount() const;

    virtual bool isShowingLoadingScreen() const;

    virtual bool shouldDisconnectOnAppSuspended() const;

    virtual bool isGamePlayTipsEnabled() const;

    virtual bool isPlatformNX() const;

    virtual bool isLocalSplitscreenWith(::ActorUniqueID const&) const;

    virtual bool isValidCrossPlatformSkin(bool) const;

    virtual bool isSelectedSkinInitialized() const;

    virtual ::SplitScreenInfo getSplitScreenInfo() const;

    virtual bool getHandlingControllerDisconnect();

    virtual void setOpenControllerDisconnectScreen(bool);

    virtual ::ClientPlayMode getClientPlayMode() const;

    virtual void setClientPlayMode(::ClientPlayMode const&);

    virtual std::function<void ()> getCreditsCallback();

    virtual void setCreditsCallback(std::function<void ()>);

    virtual void setupTransitionForCredits(std::function<void ()>);

    virtual void refreshScreenSizeData();

    virtual void onScreenSizeChanged(int, int, float);

    virtual void onGuiScaleOffsetChanged();

    virtual void onSafeZoneChanged();

    virtual bool hasDismissedNewPlayerFlow() const;

    virtual void quit(std::string const&, std::string const&);

    virtual ::IMinecraftGame& getMinecraftGame_DEPRECATED() const;

    virtual ::IClientInstances& getClientInstances() const;

    virtual ::World::WorldSystem& getWorldSystem() const;

    virtual bool isWorldSystemReady() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<Automation::AutomationClient>> getAutomationClient() const;

    virtual ::Bedrock::NonOwnerPointer<const EDUSystems> getEDUSystems() const;

    virtual ::Bedrock::NonOwnerPointer<EDUSystems> getEDUSystems();

    virtual ::IMinecraftEventing& getEventing() const;

    virtual ::IConnectionEventing& getConnectionEventing() const;

    virtual ::FontHandle getFontHandle() const;

    virtual ::FontHandle getRuneFontHandle() const;

    virtual ::FontHandle getUnicodeFontHandle() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<GeometryGroup>> getGeometryGroup() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<BlockCullingGroup>> getBlockCullingGroup() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>> getMultiplayerServiceManager() const;

    virtual ::IResourcePackRepository& getResourcePackRepository() const;

    virtual ::ResourcePackManager& getResourcePackManager() const;

    virtual ::PackManifestFactory& getPackManifestFactory();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> getKeyProvider() const;

    virtual ::PacksInfoData const& getHostSpecifiedPacks() const;

    virtual std::shared_ptr<SkinRepository> getSkinRepository() const;

    virtual ::PersonaClient& getPersonaClient() const;

    virtual ::PersonaRepository& getPersonaRepository() const;

    virtual ::MarketplaceServicesManager& getMarketplaceServicesManager() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<StoreCatalogRepository>> getStoreCatalogRepository();

    virtual std::shared_ptr<mce::TextureGroup> getTextureGroup() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<mce::TextureGroup>> getStoreCacheTextures() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<MinecraftGraphics>> getMinecraftGraphics() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<IUIRepository>> getUIRepository() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> getUserManager() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<TrialManager>> getTrialManager() const;

    virtual bool wantToQuit() const;

    virtual bool isPrimaryLevelCrossPlatformMultiplayer() const;

    virtual bool isPrimaryLevelMultiplayer() const;

    virtual bool isAdhocEnabled() const;

    virtual std::shared_ptr<ActorAnimationGroup> getActorAnimationGroup() const;

    virtual bool isMarketplaceDisabled() const;

    virtual std::pair<StoreErrorCodes, std::string> const getMarketplaceDisabledReasonWithErrorCode() const;

    virtual void linkToOffer(std::string const&, bool);

    virtual void linkToPage(std::string const&);

    virtual void linkTo3PServerOffers(std::string const&, std::string const&);

    virtual void navigateToMarketplaceInventoryScreen(::InventoryTabIndex);

    virtual void navigateToStoreHomeScreen();

    virtual void navigateToCoinPurchaseScreen(int, std::function<void (bool, int)>);

    virtual void navigateToPurchaseOfferScreen(::StoreCatalogItem&, ::StoreNavigationOrigin, bool const);

    virtual void navigateToDressingRoomOfferScreen(std::string const&);

    virtual bool navigateToProfileScreen(std::string const&, bool const);

    virtual void navigateToServersScreen(bool const);

    virtual void navigateToHowToPlayScreen(std::string const&);

    virtual void navigateToMarketplacePassPDPScreen(::MarketplacePassTabIndex);

    virtual void navigateToRealmsStoriesTransitionScreen(::Realms::World const&);

    virtual void tryPushLeaveGameScreen();

    virtual void tryStartDayOneExperience();

    virtual bool isReadyToRender() const;

    virtual void onDimensionChangedEvent();

    virtual void onGameEventNotification(::ui::GameEventNotification);

    virtual std::string getTopScreenName() const;

    virtual void setLeaveGameInProgressAsReadyToContinue();

    virtual void stopDestroying();

    virtual void onClientCreatedLevel(std::pair<std::unique_ptr<Level>, OwnerPtr<EntityContext>>, ::OwnerPtr<EntityContext>);

    virtual ::PlayerAuthentication& getPlayerAuthentication();

    virtual void createPlayerAuthentication(ulong);

    virtual void createPlayerAuthentication();

    virtual std::string getPlatformId() const;

    virtual std::string getPlatformOnlineId() const;

    virtual bool useController() const;

    virtual bool useTouchscreen() const;

    virtual bool getMouseGrabbed() const;

    virtual bool currentInputModeIsMouseAndKeyboard() const;

    virtual bool allowPicking() const;

    virtual bool isShowingMenu() const;

    virtual bool isShowingPauseScreen() const;

    virtual bool isShowingProgressScreen() const;

    virtual bool isShowingWorldProgressScreen() const;

    virtual bool isShowingRealmsProgressScreen() const;

    virtual bool isShowingDeathScreen() const;

    virtual bool isShowingServerForm() const;

    virtual bool isScreenReplaceable() const;

    virtual bool isInWorldAndNotShowingAnyMenuScreens() const;

    virtual bool isWorldActive() const;

    virtual bool isInRealm();

    virtual bool readyForShutdown() const;

    virtual bool isPrimaryClient() const;

    virtual bool isEduMode() const;

    virtual bool isGamepadCursorEnabled() const;

    virtual bool isInControlCustomization() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const Minecraft>> getServerData() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<Minecraft>> getServerData();

    virtual ::ClientLevel const* getLevel() const;

    virtual ::ClientLevel* getLevel();

    virtual bool hasLevel() const;

    virtual bool isPreGame() const;

    virtual bool isInMultiplayerGame() const;

    virtual bool isMultiPlayerClient() const;

    virtual ::IOptionRegistry const& getOptions() const;

    virtual ::IOptionRegistry& getOptions();

    virtual ::IReadWriteOptions const& getReadWriteOptions() const;

    virtual std::shared_ptr<const OptionRegistry> const getOptionsPtr() const;

    virtual std::shared_ptr<OptionRegistry> getOptionsPtr();

    virtual std::shared_ptr<Social::User> const& getUser() const;

    virtual std::shared_ptr<Settings::IRegistry> getSettingsRegistry();

    virtual ::Option const& getShowLearningPromptsOption() const;

    virtual ::Option& getShowControlTipsOption();

    virtual ::Option& getShowControlTipsOverrideOption();

    virtual double getControlTipsTimeElapsed() const;

    virtual void setControlTipsTimeElapsedStart();

    virtual ::GameRenderer& getGameRenderer() const;

    virtual ::LevelRenderer* getLevelRenderer() const;

    virtual ::LevelRendererCameraProxy* getLevelRendererCameraProxy() const;

    virtual ::Bedrock::NonOwnerPointer<const CameraRegistry> getCameraRegistry() const;

    virtual ::Bedrock::NonOwnerPointer<CameraRegistry> getCameraRegistry();

    virtual ::Bedrock::NonOwnerPointer<EntitySystems> getCameraSystems();

    virtual ::LightTexture* getLightTexture();

    virtual void setupLevelRendering(::ClientLevel&, ::WeakEntityRef);

    virtual ::mce::ViewportInfo const& getViewportInfo() const;

    virtual void setViewportInfo(::mce::ViewportInfo const&);

    virtual ::Vec2 getNormalizedViewportSize() const;

    virtual void updateChunkRadius();

    virtual void setUITexture(::mce::Texture*);

    virtual ::mce::Texture* getUITexture();

    virtual void setLevelTexture(::mce::Texture*);

    virtual ::mce::Texture* getLevelTexture();

    virtual void setUICursorTexture(::mce::TexturePtr);

    virtual ::mce::TexturePtr getUICursorTexture() const;

    virtual ::mce::Camera& getCamera();

    virtual ::ShaderColor& getShaderColor();

    virtual ::ShaderColor& getDarkShaderColor();

    virtual void clearGraphicsCache();

    virtual void getNormalizedUICursorTransform(::MatrixStack::MatrixStackRef&, float);

    virtual bool shouldRenderUICursor() const;

    virtual bool getRenderPlayerModel() const;

    virtual ::DeferredLighting& getDeferredLighting();

    virtual float getGuiScale() const;

    virtual ::Option const& getGuiScaleOption() const;

    virtual int getGuiScaleOffset() const;

    virtual void setGuiScaleOffset(int);

    virtual void renderImGui(::ScreenContext&, bool);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const GuiData>> getGuiData() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<GuiData>> getGuiData();

    virtual ::GuidedFlowManager& getGuidedFlowManager();

    virtual ::PixelCalc const& getDpadScale() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const DateManager>> getDateManager() const;

    virtual void addOverrideHoursToDateTime(uint const);

    virtual ::ToastManager& getToastManager();

    virtual ::ClipboardProxy<ApplicationSignal::ClipboardCopy, ApplicationSignal::ClipboardPasteRequest>& getClipboardManager();

    virtual ::AbstractScene const* getTopScene() const;

    virtual ::AbstractScene* getTopScene();

    virtual ::AbstractScene const* getActiveScene() const;

    virtual ::AbstractScene* getActiveScene();

    virtual ::SceneFactory& getSceneFactory() const;

    virtual ::OreUI::SceneProvider& getSceneProvider() const;

    virtual ::WeakRef<OreUI::UIBlockThumbnailAtlasManager> getOreUIBlockThumbnailAtlasManager() const;

    virtual ::ui::ScreenTechStackSelector& getScreenTechStackSelector();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> getClientSceneStack();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const ISceneStack>> getClientSceneStack() const;

    virtual ::OreUI::Router& getClientUIRouter() const;

    virtual ::ISceneStack& getMainSceneStackInterface();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const ISceneStack>> getMainSceneStack() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> getMainSceneStack();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> getCurrentSceneStack();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const ISceneStack>> getCurrentSceneStack() const;

    virtual ::OreUI::Router const& getCurrentUIRouter() const;

    virtual ::OreUI::Router& getCurrentUIRouter();

    virtual ::OreUI::ITelemetry& getOreUITelemetry();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> prepareSceneFor(::ui::SceneType const, std::function<std::shared_ptr<AbstractScene> ()>);

    virtual ::CachedScenes& getCachedScenes();

    virtual std::string getScreenName() const;

    virtual std::string getScreenTelemetry() const;

    virtual ::ui::SceneType getTopSceneType() const;

    virtual ::MobEffectsLayout& getMobEffectsLayout();

    virtual std::string emoticonifyText(std::string const&) const;

    virtual void onMobEffectsChange();

    virtual void setUISizeAndScale(int, int, float);

    virtual void forEachVisibleScreen(::brstd::function_ref<void (AbstractScene&)>);

    virtual void forEachScreen(::brstd::function_ref<bool (AbstractScene&)>, bool);

    virtual void forEachScreenConst(::brstd::function_ref<bool (const AbstractScene&)>, bool) const;

    virtual bool updateSceneStack();

    virtual void forEachAlwaysAcceptInputScreen(std::function<void (AbstractScene&)>, ::AbstractScene const*);

    virtual void forEachAlwaysAcceptInputScreenWithTop(std::function<void (AbstractScene&)>);

    virtual void showPlayerProfile(std::string const&, std::string const&);

    virtual std::string emoticonifyText(std::string const&, bool);

    virtual bool isInGameInputEnabled() const;

    virtual void setInGameInputEnabled(bool);

    virtual ::Vec2 getSafeZoneScale() const;

    virtual void verifySkinApproval(std::function<void (std::string)> const&, std::function<void ()> const&) const;

    virtual ::InputMode getCurrentInputMode() const;

    virtual bool isTouchGameplayAllowed() const;

    virtual ::Bedrock::NonOwnerPointer<MinecraftInputHandler> getMinecraftInput() const;

    virtual ::KeyboardManager& getKeyboardManager();

    virtual void setLastPointerLocation(float, float, float);

    virtual ::Vec3 getLastPointerLocation();

    virtual void clearTouchPointerLocations();

    virtual void clearTouchPointerLocation(int);

    virtual void updateControlOptionState(uint, bool);

    virtual void clearActiveControlOptions();

    virtual std::set<uint> const& getActiveControlOptions() const;

    virtual std::vector<OptionID> getActiveOptionIDs(::ControlOptionType) const;

    virtual void setNumberOfActiveConfigs(int);

    virtual int getNumberOfActiveConfigs() const;

    virtual bool isNoConfigSelected() const;

    virtual void setNumberOfEnabledConfigs(int);

    virtual int getNumberOfEnabledConfigs() const;

    virtual void setWYSIWYGState(::WYSIWYGState);

    virtual ::WYSIWYGState getWYSIWYGState() const;

    virtual void setOtherConfigsExistInThisCategory(bool);

    virtual bool getOtherConfigsExistInThisCategory() const;

    virtual void updateTouchPointerLocation(int, float, float);

    virtual ::Vec2 getTouchPointerLocation(int) const;

    virtual void updateActionPointerId(int);

    virtual int getActionPointerId() const;

    virtual bool shouldUseLastPointerLocationOnFocusChange();

    virtual bool currentScreenShouldStealMouse();

    virtual ::BuildActionIntention& getInProgressBAI() const;

    virtual ::PacketSender& getPacketSender();

    virtual ::ClientNetworkSystem const& getClientNetworkSystem() const;

    virtual ::ClientNetworkSystem& getClientNetworkSystem();

    virtual void setMoveTurnInput(std::unique_ptr<ClientMoveInputHandler>);

    virtual void setupPersistentControls(::InputMode);

    virtual void resetPlayerMovement();

    virtual void suspendPredictedMovement();

    virtual void onClientInputInitComplete();

    virtual ::glm::vec<2, float, (glm::qualifier)0> getGamepadCursorPosition() const;

    virtual void setClientInputHandler(std::unique_ptr<ClientInputHandler>);

    virtual ::ClientInputHandler* getInput() const;

    virtual int getControllerId() const;

    virtual bool hasConnectedController() const;

    virtual ::SubClientId getClientSubId() const;

    virtual void setSuspendInput(bool);

    virtual void setSuspendDirectionalInput(bool);

    virtual void setDisableInput(bool);

    virtual void grabMouse();

    virtual void releaseMouse();

    virtual void refocusMouse(bool);

    virtual void setMouseType(::Bedrock::Input::PointerType);

    virtual void resetBai(int);

    virtual void clearInProgressBAI();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<SoundEngine>> getSoundEngine() const;

    virtual ::MusicManager const* getMusicManager() const;

    virtual ::MusicManager* getMusicManagerNonConst() const;

    virtual void play(std::string const&, ::Vec3 const&, float, float);

    virtual void playUI(std::string const&, float, float);

    virtual void muteAudio();

    virtual void unMuteAudio();

    virtual void fadeOutMusic() const;

    virtual ::TaskGroup& getTaskGroup();

    virtual void onFullVanillaPackOnStack();

    virtual bool isFullVanillaPackOnStack() const;

    virtual void onPlayerLoaded(::Player&);

    virtual void setClientGameMode(::GameType);

    virtual void resetToDefaultGameMode();

    virtual ::IGameConnectionListener& getGameConnectionListener();

    virtual void connectToThirdPartyServer(std::string const&, int);

    virtual void startExternalNetworkWorld(::Social::GameConnectionInfo, std::string const&, ::PlayerJoinWorldContext);

    virtual bool isReadyToReconnect() const;

    virtual bool checkForPiracy();

    virtual void updateChatFilterStatus(::ProfanityContext&);

    virtual void updateControllerHandling();

    virtual void setBehaviorCommandCallback(std::function<void (const std::string&, BehaviorStatus)>);

    virtual void setBehaviorCommandStatus(std::string const&, ::BehaviorStatus);

    virtual void setConnectGamepadScreenActive(bool);

    virtual ::Bedrock::Threading::Async<Core::PathBuffer<std::string>> requestScreenshot(::ScreenshotOptions&);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<DevConsoleLogger>> getDevConsoleLogger() const;

    virtual std::shared_ptr<FileDataRequest> requestImageFromUrl(std::string const&, std::function<void (Bedrock::Http::Status, const Core::Path&, ulong)>);

    virtual void initializeRenderResources();

    virtual void postInitRenderResources();

    virtual void onAppSuspended();

    virtual void onAppResumed();

    virtual void onActiveResourcePacksChanged(::gsl::not_null<Bedrock::NonOwnerPointer<ActorResourceDefinitionGroup>> const&);

    virtual void reloadEntityRenderers(::gsl::not_null<Bedrock::NonOwnerPointer<ActorResourceDefinitionGroup>> const&);

    virtual ::BlockTessellator& getBlockTessellator();

    virtual ::BlockActorRenderDispatcher& getBlockEntityRenderDispatcher();

    virtual std::shared_ptr<ActorRenderDispatcher> getEntityRenderDispatcher();

    virtual ::ActorBlockRenderer& getEntityBlockRenderer();

    virtual ::ItemInHandRenderer* getItemInHandRenderer();

    virtual ::ItemRenderer* getItemRenderer();

    virtual ::HudIconActorRenderer* getHudIconActorRenderer();

    virtual std::deque<std::string>& getSentMessageHistory();

    virtual std::deque<std::string>& getDevConsoleMessageHistory();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ProfanityContext>> getProfanityContext() const;

    virtual void initTTSClient(std::shared_ptr<TextToSpeechClient>);

    virtual std::shared_ptr<const TextToSpeechClient> getTTSClient() const;

    virtual std::shared_ptr<TextToSpeechClient> getTTSClient();

    virtual std::shared_ptr<ITTSEventManager> getTTSEventManager();

    virtual void addTTSMessage(std::string const&, ::ProfanityFilterContext, bool, std::string const&, bool, bool);

    virtual void initCommands();

    virtual uint getUserId() const;

    virtual bool isPrimaryUser() const;

    virtual double getServerConnectionTime() const;

    virtual void setServerPingTime(int);

    virtual int getServerPingTime() const;

    virtual void setDefaultPlayscreenTab(::PlayScreenDefaultTab);

    virtual void setClientInstanceState(::ClientInstanceState const&);

    virtual void setUIEventCoordinator(::Bedrock::UniqueOwnerPointer<UIEventCoordinator>&&);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<UIEventCoordinator>> getUIEventCoordinator();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ClientInstanceEventCoordinator>> getEventCoordinator();

    virtual ::ClientNetworkEventCoordinator& getClientNetworkEventCoordinator();

    virtual ::ClientScriptEventCoordinator& getClientScriptEventCoordinator();

    virtual std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> getNoBlockBreakUntil();

    virtual void setNoBlockBreakUntil(std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>);

    virtual ::GameModuleClient* getGameModule();

    virtual ::ClientHitDetectCoordinator& getHitEventCoordinator();

    virtual ::GameCallbacks& getGameCallbacks();

    virtual void setActiveFileStorageArea(std::shared_ptr<Core::FileStorageArea>);

    virtual void sendClientEnteredLevel();

    virtual ::HitDetectSystem* getHitDetectSystem();

    virtual bool isPlaying() const;

    virtual ::ClientInstanceState getClientInstanceState() const;

    virtual ::LatencyGraphDisplay* getLatencyGraphDisplay() const;

    virtual ::PlayerCapabilities::IClientController const& getClientCapabilities() const;

    virtual ::cg::math::Rect<float> calculateViewPortModifiers(::SubClientId const, ulong const, ::SplitScreenDirection const) const;

    virtual std::weak_ptr<IClientInstance> getWeakPtrToThis();

    virtual ::ClientRequirementVerifier const& getClientRequirementVerifier() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<FogDefinitionRegistry>> getFogDefinitionRegistry();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const FogDefinitionRegistry>> getFogDefinitionRegistry() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<FogManager>> getFogManager();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const FogManager>> getFogManager() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ScreenLoadTimeTracker>> getScreenLoadTimeTracker();

    virtual ::ItemRegistryRef getItemRegistry() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<DisconnectionRequestHandler>> getDisconnectionRequestHandler() const;

    virtual float getRemoteServerTimeMs() const;

    virtual void setRemoteServerTimeMs(float);

    virtual float getRemoteServerNetworkTimeMs() const;

    virtual void setRemoteServerNetworkTimeMs(float);

    virtual ::Bedrock::NonOwnerPointer<ClientScriptManager> getClientScriptManager();

    virtual ::Scripting::ScriptEngine* getScriptingEngine();

    virtual ::Bedrock::NonOwnerPointer<WorldTransferAgent> const getWorldTransferAgent() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerReportHandler>> getPlayerReportHandler();

    virtual void flagDisconnectionAndNotify(::Connection::DisconnectFailReason);

    virtual void flagDisconnectionAndNotifyWithParams(::DisconnectionScreenParams const&);

    virtual void disconnectSubClient(::Connection::DisconnectFailReason);

    virtual void setClientUpdateAndRenderThrottling(bool, int, float);

    virtual bool isClientUpdateAndRenderThrottlingEnabled() const;

    virtual int getClientUpdateAndRenderThrottlingThreshold() const;

    virtual float getClientUpdateAndRenderThrottlingScalar() const;

    virtual bool isUserBanned() const;

    virtual void setupPauseManagers();

    virtual bool isEligibleForPauseFeature() const;

    virtual bool requestInGamePause(bool);

    virtual void openContentLogHistory();

    virtual double getGameUpdateDurationInSeconds() const;

    virtual std::optional<ConnectionContextInfo> getConnectionContextInfo() const;

    virtual ::Bedrock::NonOwnerPointer<LinkedAssetValidator> getLinkedAssetValidator();

    virtual void onPlayerDestruction(::Player&);

    virtual void onExtendDiskSpace(bool const, std::weak_ptr<Core::FileStorageArea> const&, ulong, std::function<void ()>);

    virtual void onLowDiskSpace(bool const, ulong);

    virtual void onOutOfDiskSpace(bool const, ulong);

    virtual void onCriticalDiskError(bool const, ::Core::LevelStorageState const&);

    virtual void onLevelCorrupt();

    virtual void onGameModeChanged();

    virtual void onBeforeSimTick();

    virtual void onTick(int, int);

    virtual void onInternetUpdate();

    virtual void onGameSessionReset();

    virtual void onLevelExit();

    virtual void onRequestResourceReload();

    virtual void updateScreens();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClientInstance(::ClientInstanceArguments&&);

    MCNAPI std::unique_ptr<LegacyClientNetworkHandler>
           _createNetworkHandler(::PlayerAuthenticationType, ::RawGameServerToken&&);

    MCNAPI ::Bedrock::Threading::Async<RawGameServerToken> _getGlobalToken(::PlayerAuthentication&);

    MCNAPI bool _getIsConnectedToApplicationLayer() const;

    MCNAPI void _handleDisconnectionScreenRequests();

    MCNAPI bool _isEditorModeOrInEditorWorld() const;

    MCNAPI bool _isShowingScreen(std::string_view) const;

    MCNAPI void _joinWorldInProgressSubclient(std::optional<ConnectionContextInfo>);

    MCNAPI void
    _leaveGameOnUnrecoverableError(::Connection::DisconnectFailReason, std::string const&, std::string const&);

    MCNAPI void _perspectiveOptionChanged(::Option const&);

    MCNAPI void _requestLeaveGameImpl(bool const, bool const);

    MCNAPI void _startLeaveGame();

    MCNAPI void _startWorldPrimaryClient(::PlayerAuthenticationType, ::RawGameServerToken&&);

    MCNAPI void _startWorldSubClient(::PlayerAuthenticationType, ::RawGameServerToken&&);

    MCNAPI void _tickBuildAction(::HitResult const&, ::HitResult const&, bool);

    MCNAPI void _updateScreenSizeVariables(::Vec2 const&, ::Vec2 const&, float);

    MCNAPI void fireEventDiskStatus(::DiskStatus, ::Core::LevelStorageState);

    MCNAPI void flagDisconnectionAndNotifyWithTarget(::DisconnectionScreenParams const&, ::Connection::UIReturnTarget);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ClientInstanceArguments&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onInitMinecraftGame();

    MCNAPI void $onDestroyMinecraftGame();

    MCNAPI void $init(::ClientInstanceInitArguments&&);

    MCNAPI void $initSceneFactory(std::unique_ptr<SceneFactory>, std::unique_ptr<OreUI::SceneProvider>);

    MCNAPI void $setUiRouter(std::unique_ptr<OreUI::Router>);

    MCNAPI void $initGraphics();

    MCNAPI void $stop();

    MCNAPI void $teardown();

    MCNAPI void $preShutDown();

    MCNAPI void $setGameConnectionInfo(::Social::GameConnectionInfo const&);

    MCNAPI std::optional<Social::GameConnectionInfo> $getGameConnectionInfo();

    MCNAPI void $onStartJoinGame(
        bool,
        std::string const&,
        std::string const&,
        std::string const&,
        ::NetworkType,
        ::Social::MultiplayerServiceIdentifier,
        ::PlayerJoinWorldContext
    );

    MCNAPI void $onCancelJoinGame();

    MCNAPI void $requestLeaveGameAsync();

    MCNAPI void $requestLeaveGame(bool, bool);

    MCNAPI void $stopPlayScreen();

    MCNAPI bool $isLeaveGameDone() const;

    MCNAPI void $setupPlayScreenForLeaveGame();

    MCNAPI void $preCacheOutOfGameViews();

    MCNAPI void $resetPrimaryClient();

    MCNAPI void $resetGameSession();

    MCNAPI void $tick();

    MCNAPI void $frameUpdate(::FrameUpdateContext&);

    MCNAPI bool $update(bool);

    MCNAPI void $preFrameTick();

    MCNAPI void $endFrame();

    MCNAPI float $getFrameAlpha();

    MCNAPI void $startSubClientLateJoin(bool, std::unique_ptr<GameModuleClient>, std::optional<ConnectionContextInfo>);

    MCNAPI ::Bedrock::Threading::Async<ClientGameSetupResult>
    $setupClientGame(bool, ::ServerSupportedAuthenticationTypes, std::unique_ptr<GameModuleClient>);

    MCNAPI ::BlockSource* $getRegion();

    MCNAPI ::LocalPlayer* $getLocalPlayer() const;

    MCNAPI void $setupPrimaryClientEditorManager();

    MCNAPI ::Bedrock::NonOwnerPointer<Editor::IEditorPlayer> $getLocalEditorPlayer() const;

    MCNAPI ::Bedrock::NonOwnerPointer<Editor::IEditorManager> $getEditorManager() const;

    MCNAPI bool $isPlayerInEditor() const;

    MCNAPI ::LocalPlayerChangedConnector $getLocalPlayerChangedConnector();

    MCNAPI ::WeakEntityRef $getLocalUser() const;

    MCNAPI ::Actor* $getCameraActor() const;

    MCNAPI void $setCameraActor(::Actor*);

    MCNAPI ::ListenerState const* $getListenerState() const;

    MCNAPI ::Actor* $getCameraTargetActor() const;

    MCNAPI void $setCameraTargetActor(::Actor*);

    MCNAPI ::WeakEntityRef $getCameraEntity() const;

    MCNAPI void $getRawCameraEntities(::WeakEntityRef&, ::WeakEntityRef&) const;

    MCNAPI void $setRawCameraEntities(::WeakEntityRef, ::WeakEntityRef);

    MCNAPI ::HitResult const& $getLatestHitResult() const;

    MCNAPI bool $isLeavingGame() const;

    MCNAPI bool $isDestroyingGame() const;

    MCNAPI bool $isShuttingDown() const;

    MCNAPI bool $useLowFrequencyUIRender() const;

    MCNAPI bool $isSplitScreenActive() const;

    MCNAPI bool $isExitingLevel() const;

    MCNAPI bool $isInBedScreen() const;

    MCNAPI bool $isInDeathScreen() const;

    MCNAPI bool $isKeyboardEnabled() const;

    MCNAPI bool $hasCommands() const;

    MCNAPI int $getSplitScreenCount() const;

    MCNAPI bool $isShowingLoadingScreen() const;

    MCNAPI bool $shouldDisconnectOnAppSuspended() const;

    MCNAPI bool $isGamePlayTipsEnabled() const;

    MCNAPI bool $isPlatformNX() const;

    MCNAPI bool $isLocalSplitscreenWith(::ActorUniqueID const&) const;

    MCNAPI bool $isValidCrossPlatformSkin(bool) const;

    MCNAPI bool $isSelectedSkinInitialized() const;

    MCNAPI ::SplitScreenInfo $getSplitScreenInfo() const;

    MCNAPI bool $getHandlingControllerDisconnect();

    MCNAPI void $setOpenControllerDisconnectScreen(bool);

    MCNAPI ::ClientPlayMode $getClientPlayMode() const;

    MCNAPI void $setClientPlayMode(::ClientPlayMode const&);

    MCNAPI std::function<void()> $getCreditsCallback();

    MCNAPI void $setCreditsCallback(std::function<void()>);

    MCNAPI void $setupTransitionForCredits(std::function<void()>);

    MCNAPI void $refreshScreenSizeData();

    MCNAPI void $onScreenSizeChanged(int, int, float);

    MCNAPI void $onGuiScaleOffsetChanged();

    MCNAPI void $onSafeZoneChanged();

    MCNAPI bool $hasDismissedNewPlayerFlow() const;

    MCNAPI void $quit(std::string const&, std::string const&);

    MCNAPI ::IMinecraftGame& $getMinecraftGame_DEPRECATED() const;

    MCNAPI ::IClientInstances& $getClientInstances() const;

    MCNAPI ::World::WorldSystem& $getWorldSystem() const;

    MCNAPI bool $isWorldSystemReady() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Automation::AutomationClient>> $getAutomationClient() const;

    MCNAPI ::Bedrock::NonOwnerPointer<const EDUSystems> $getEDUSystems() const;

    MCNAPI ::Bedrock::NonOwnerPointer<EDUSystems> $getEDUSystems();

    MCNAPI ::IMinecraftEventing& $getEventing() const;

    MCNAPI ::IConnectionEventing& $getConnectionEventing() const;

    MCNAPI ::FontHandle $getFontHandle() const;

    MCNAPI ::FontHandle $getRuneFontHandle() const;

    MCNAPI ::FontHandle $getUnicodeFontHandle() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<GeometryGroup>> $getGeometryGroup() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<BlockCullingGroup>> $getBlockCullingGroup() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>>
    $getMultiplayerServiceManager() const;

    MCNAPI ::IResourcePackRepository& $getResourcePackRepository() const;

    MCNAPI ::ResourcePackManager& $getResourcePackManager() const;

    MCNAPI ::PackManifestFactory& $getPackManifestFactory();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> $getKeyProvider() const;

    MCNAPI ::PacksInfoData const& $getHostSpecifiedPacks() const;

    MCNAPI std::shared_ptr<SkinRepository> $getSkinRepository() const;

    MCNAPI ::PersonaClient& $getPersonaClient() const;

    MCNAPI ::PersonaRepository& $getPersonaRepository() const;

    MCNAPI ::MarketplaceServicesManager& $getMarketplaceServicesManager() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<StoreCatalogRepository>> $getStoreCatalogRepository();

    MCNAPI std::shared_ptr<mce::TextureGroup> $getTextureGroup() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<mce::TextureGroup>> $getStoreCacheTextures() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<MinecraftGraphics>> $getMinecraftGraphics() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<IUIRepository>> $getUIRepository() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> $getUserManager() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<TrialManager>> $getTrialManager() const;

    MCNAPI bool $wantToQuit() const;

    MCNAPI bool $isPrimaryLevelCrossPlatformMultiplayer() const;

    MCNAPI bool $isPrimaryLevelMultiplayer() const;

    MCNAPI bool $isAdhocEnabled() const;

    MCNAPI std::shared_ptr<ActorAnimationGroup> $getActorAnimationGroup() const;

    MCNAPI bool $isMarketplaceDisabled() const;

    MCNAPI std::pair<StoreErrorCodes, std::string> const $getMarketplaceDisabledReasonWithErrorCode() const;

    MCNAPI void $linkToOffer(std::string const&, bool);

    MCNAPI void $linkToPage(std::string const&);

    MCNAPI void $linkTo3PServerOffers(std::string const&, std::string const&);

    MCNAPI void $navigateToMarketplaceInventoryScreen(::InventoryTabIndex);

    MCNAPI void $navigateToStoreHomeScreen();

    MCNAPI void $navigateToCoinPurchaseScreen(int, std::function<void(bool, int)>);

    MCNAPI void $navigateToPurchaseOfferScreen(::StoreCatalogItem&, ::StoreNavigationOrigin, bool const);

    MCNAPI void $navigateToDressingRoomOfferScreen(std::string const&);

    MCNAPI bool $navigateToProfileScreen(std::string const&, bool const);

    MCNAPI void $navigateToServersScreen(bool const);

    MCNAPI void $navigateToHowToPlayScreen(std::string const&);

    MCNAPI void $navigateToMarketplacePassPDPScreen(::MarketplacePassTabIndex);

    MCNAPI void $navigateToRealmsStoriesTransitionScreen(::Realms::World const&);

    MCNAPI void $tryPushLeaveGameScreen();

    MCNAPI void $tryStartDayOneExperience();

    MCNAPI bool $isReadyToRender() const;

    MCNAPI void $onDimensionChangedEvent();

    MCNAPI void $onGameEventNotification(::ui::GameEventNotification);

    MCNAPI std::string $getTopScreenName() const;

    MCNAPI void $setLeaveGameInProgressAsReadyToContinue();

    MCNAPI void $stopDestroying();

    MCNAPI void
        $onClientCreatedLevel(std::pair<std::unique_ptr<Level>, OwnerPtr<EntityContext>>, ::OwnerPtr<EntityContext>);

    MCNAPI ::PlayerAuthentication& $getPlayerAuthentication();

    MCNAPI void $createPlayerAuthentication(ulong);

    MCNAPI void $createPlayerAuthentication();

    MCNAPI std::string $getPlatformId() const;

    MCNAPI std::string $getPlatformOnlineId() const;

    MCNAPI bool $useController() const;

    MCNAPI bool $useTouchscreen() const;

    MCNAPI bool $getMouseGrabbed() const;

    MCNAPI bool $currentInputModeIsMouseAndKeyboard() const;

    MCNAPI bool $allowPicking() const;

    MCNAPI bool $isShowingMenu() const;

    MCNAPI bool $isShowingPauseScreen() const;

    MCNAPI bool $isShowingProgressScreen() const;

    MCNAPI bool $isShowingWorldProgressScreen() const;

    MCNAPI bool $isShowingRealmsProgressScreen() const;

    MCNAPI bool $isShowingDeathScreen() const;

    MCNAPI bool $isShowingServerForm() const;

    MCNAPI bool $isScreenReplaceable() const;

    MCNAPI bool $isInWorldAndNotShowingAnyMenuScreens() const;

    MCNAPI bool $isWorldActive() const;

    MCNAPI bool $isInRealm();

    MCNAPI bool $readyForShutdown() const;

    MCNAPI bool $isPrimaryClient() const;

    MCNAPI bool $isEduMode() const;

    MCNAPI bool $isGamepadCursorEnabled() const;

    MCNAPI bool $isInControlCustomization() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const Minecraft>> $getServerData() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Minecraft>> $getServerData();

    MCNAPI ::ClientLevel const* $getLevel() const;

    MCNAPI ::ClientLevel* $getLevel();

    MCNAPI bool $hasLevel() const;

    MCNAPI bool $isPreGame() const;

    MCNAPI bool $isInMultiplayerGame() const;

    MCNAPI bool $isMultiPlayerClient() const;

    MCNAPI ::IOptionRegistry const& $getOptions() const;

    MCNAPI ::IOptionRegistry& $getOptions();

    MCNAPI ::IReadWriteOptions const& $getReadWriteOptions() const;

    MCNAPI std::shared_ptr<const OptionRegistry> const $getOptionsPtr() const;

    MCNAPI std::shared_ptr<OptionRegistry> $getOptionsPtr();

    MCNAPI std::shared_ptr<Social::User> const& $getUser() const;

    MCNAPI std::shared_ptr<Settings::IRegistry> $getSettingsRegistry();

    MCNAPI ::Option const& $getShowLearningPromptsOption() const;

    MCNAPI ::Option& $getShowControlTipsOption();

    MCNAPI ::Option& $getShowControlTipsOverrideOption();

    MCNAPI double $getControlTipsTimeElapsed() const;

    MCNAPI void $setControlTipsTimeElapsedStart();

    MCNAPI ::GameRenderer& $getGameRenderer() const;

    MCNAPI ::LevelRenderer* $getLevelRenderer() const;

    MCNAPI ::LevelRendererCameraProxy* $getLevelRendererCameraProxy() const;

    MCNAPI ::Bedrock::NonOwnerPointer<const CameraRegistry> $getCameraRegistry() const;

    MCNAPI ::Bedrock::NonOwnerPointer<CameraRegistry> $getCameraRegistry();

    MCNAPI ::Bedrock::NonOwnerPointer<EntitySystems> $getCameraSystems();

    MCNAPI ::LightTexture* $getLightTexture();

    MCNAPI void $setupLevelRendering(::ClientLevel&, ::WeakEntityRef);

    MCNAPI ::mce::ViewportInfo const& $getViewportInfo() const;

    MCNAPI void $setViewportInfo(::mce::ViewportInfo const&);

    MCNAPI ::Vec2 $getNormalizedViewportSize() const;

    MCNAPI void $updateChunkRadius();

    MCNAPI void $setUITexture(::mce::Texture*);

    MCNAPI ::mce::Texture* $getUITexture();

    MCNAPI void $setLevelTexture(::mce::Texture*);

    MCNAPI ::mce::Texture* $getLevelTexture();

    MCNAPI void $setUICursorTexture(::mce::TexturePtr);

    MCNAPI ::mce::TexturePtr $getUICursorTexture() const;

    MCNAPI ::mce::Camera& $getCamera();

    MCNAPI ::ShaderColor& $getShaderColor();

    MCNAPI ::ShaderColor& $getDarkShaderColor();

    MCNAPI void $clearGraphicsCache();

    MCNAPI void $getNormalizedUICursorTransform(::MatrixStack::MatrixStackRef&, float);

    MCNAPI bool $shouldRenderUICursor() const;

    MCNAPI bool $getRenderPlayerModel() const;

    MCNAPI ::DeferredLighting& $getDeferredLighting();

    MCNAPI float $getGuiScale() const;

    MCNAPI ::Option const& $getGuiScaleOption() const;

    MCNAPI int $getGuiScaleOffset() const;

    MCNAPI void $setGuiScaleOffset(int);

    MCNAPI void $renderImGui(::ScreenContext&, bool);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const GuiData>> $getGuiData() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<GuiData>> $getGuiData();

    MCNAPI ::GuidedFlowManager& $getGuidedFlowManager();

    MCNAPI ::PixelCalc const& $getDpadScale() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const DateManager>> $getDateManager() const;

    MCNAPI void $addOverrideHoursToDateTime(uint const);

    MCNAPI ::ToastManager& $getToastManager();

    MCNAPI ::ClipboardProxy<ApplicationSignal::ClipboardCopy, ApplicationSignal::ClipboardPasteRequest>&
    $getClipboardManager();

    MCNAPI ::AbstractScene const* $getTopScene() const;

    MCNAPI ::AbstractScene* $getTopScene();

    MCNAPI ::AbstractScene const* $getActiveScene() const;

    MCNAPI ::AbstractScene* $getActiveScene();

    MCNAPI ::SceneFactory& $getSceneFactory() const;

    MCNAPI ::OreUI::SceneProvider& $getSceneProvider() const;

    MCNAPI ::WeakRef<OreUI::UIBlockThumbnailAtlasManager> $getOreUIBlockThumbnailAtlasManager() const;

    MCNAPI ::ui::ScreenTechStackSelector& $getScreenTechStackSelector();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> $getClientSceneStack();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const ISceneStack>> $getClientSceneStack() const;

    MCNAPI ::OreUI::Router& $getClientUIRouter() const;

    MCNAPI ::ISceneStack& $getMainSceneStackInterface();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const ISceneStack>> $getMainSceneStack() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> $getMainSceneStack();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> $getCurrentSceneStack();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const ISceneStack>> $getCurrentSceneStack() const;

    MCNAPI ::OreUI::Router const& $getCurrentUIRouter() const;

    MCNAPI ::OreUI::Router& $getCurrentUIRouter();

    MCNAPI ::OreUI::ITelemetry& $getOreUITelemetry();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>>
    $prepareSceneFor(::ui::SceneType const, std::function<std::shared_ptr<AbstractScene>()>);

    MCNAPI ::CachedScenes& $getCachedScenes();

    MCNAPI std::string $getScreenName() const;

    MCNAPI std::string $getScreenTelemetry() const;

    MCNAPI ::ui::SceneType $getTopSceneType() const;

    MCNAPI ::MobEffectsLayout& $getMobEffectsLayout();

    MCNAPI std::string $emoticonifyText(std::string const&) const;

    MCNAPI void $onMobEffectsChange();

    MCNAPI void $setUISizeAndScale(int, int, float);

    MCNAPI void $forEachVisibleScreen(::brstd::function_ref<void(AbstractScene&)>);

    MCNAPI void $forEachScreen(::brstd::function_ref<bool(AbstractScene&)>, bool);

    MCNAPI void $forEachScreenConst(::brstd::function_ref<bool(const AbstractScene&)>, bool) const;

    MCNAPI bool $updateSceneStack();

    MCNAPI void $forEachAlwaysAcceptInputScreen(std::function<void(AbstractScene&)>, ::AbstractScene const*);

    MCNAPI void $forEachAlwaysAcceptInputScreenWithTop(std::function<void(AbstractScene&)>);

    MCNAPI void $showPlayerProfile(std::string const&, std::string const&);

    MCNAPI std::string $emoticonifyText(std::string const&, bool);

    MCNAPI bool $isInGameInputEnabled() const;

    MCNAPI void $setInGameInputEnabled(bool);

    MCNAPI ::Vec2 $getSafeZoneScale() const;

    MCNAPI void $verifySkinApproval(std::function<void(std::string)> const&, std::function<void()> const&) const;

    MCNAPI ::InputMode $getCurrentInputMode() const;

    MCNAPI bool $isTouchGameplayAllowed() const;

    MCNAPI ::Bedrock::NonOwnerPointer<MinecraftInputHandler> $getMinecraftInput() const;

    MCNAPI ::KeyboardManager& $getKeyboardManager();

    MCNAPI void $setLastPointerLocation(float, float, float);

    MCNAPI ::Vec3 $getLastPointerLocation();

    MCNAPI void $clearTouchPointerLocations();

    MCNAPI void $clearTouchPointerLocation(int);

    MCNAPI void $updateControlOptionState(uint, bool);

    MCNAPI void $clearActiveControlOptions();

    MCNAPI std::set<uint> const& $getActiveControlOptions() const;

    MCNAPI std::vector<OptionID> $getActiveOptionIDs(::ControlOptionType) const;

    MCNAPI void $setNumberOfActiveConfigs(int);

    MCNAPI int $getNumberOfActiveConfigs() const;

    MCNAPI bool $isNoConfigSelected() const;

    MCNAPI void $setNumberOfEnabledConfigs(int);

    MCNAPI int $getNumberOfEnabledConfigs() const;

    MCNAPI void $setWYSIWYGState(::WYSIWYGState);

    MCNAPI ::WYSIWYGState $getWYSIWYGState() const;

    MCNAPI void $setOtherConfigsExistInThisCategory(bool);

    MCNAPI bool $getOtherConfigsExistInThisCategory() const;

    MCNAPI void $updateTouchPointerLocation(int, float, float);

    MCNAPI ::Vec2 $getTouchPointerLocation(int) const;

    MCNAPI void $updateActionPointerId(int);

    MCNAPI int $getActionPointerId() const;

    MCNAPI bool $shouldUseLastPointerLocationOnFocusChange();

    MCNAPI bool $currentScreenShouldStealMouse();

    MCNAPI ::BuildActionIntention& $getInProgressBAI() const;

    MCNAPI ::PacketSender& $getPacketSender();

    MCNAPI ::ClientNetworkSystem const& $getClientNetworkSystem() const;

    MCNAPI ::ClientNetworkSystem& $getClientNetworkSystem();

    MCNAPI void $setMoveTurnInput(std::unique_ptr<ClientMoveInputHandler>);

    MCNAPI void $setupPersistentControls(::InputMode);

    MCNAPI void $resetPlayerMovement();

    MCNAPI void $suspendPredictedMovement();

    MCNAPI void $onClientInputInitComplete();

    MCNAPI ::glm::vec<2, float, (glm::qualifier)0> $getGamepadCursorPosition() const;

    MCNAPI void $setClientInputHandler(std::unique_ptr<ClientInputHandler>);

    MCNAPI ::ClientInputHandler* $getInput() const;

    MCNAPI int $getControllerId() const;

    MCNAPI bool $hasConnectedController() const;

    MCNAPI ::SubClientId $getClientSubId() const;

    MCNAPI void $setSuspendInput(bool);

    MCNAPI void $setSuspendDirectionalInput(bool);

    MCNAPI void $setDisableInput(bool);

    MCNAPI void $grabMouse();

    MCNAPI void $releaseMouse();

    MCNAPI void $refocusMouse(bool);

    MCNAPI void $setMouseType(::Bedrock::Input::PointerType);

    MCNAPI void $resetBai(int);

    MCNAPI void $clearInProgressBAI();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<SoundEngine>> $getSoundEngine() const;

    MCNAPI ::MusicManager const* $getMusicManager() const;

    MCNAPI ::MusicManager* $getMusicManagerNonConst() const;

    MCNAPI void $play(std::string const&, ::Vec3 const&, float, float);

    MCNAPI void $playUI(std::string const&, float, float);

    MCNAPI void $muteAudio();

    MCNAPI void $unMuteAudio();

    MCNAPI void $fadeOutMusic() const;

    MCNAPI ::TaskGroup& $getTaskGroup();

    MCNAPI void $onFullVanillaPackOnStack();

    MCNAPI bool $isFullVanillaPackOnStack() const;

    MCNAPI void $onPlayerLoaded(::Player&);

    MCNAPI void $setClientGameMode(::GameType);

    MCNAPI void $resetToDefaultGameMode();

    MCNAPI ::IGameConnectionListener& $getGameConnectionListener();

    MCNAPI void $connectToThirdPartyServer(std::string const&, int);

    MCNAPI void $startExternalNetworkWorld(::Social::GameConnectionInfo, std::string const&, ::PlayerJoinWorldContext);

    MCNAPI bool $isReadyToReconnect() const;

    MCNAPI bool $checkForPiracy();

    MCNAPI void $updateChatFilterStatus(::ProfanityContext&);

    MCNAPI void $updateControllerHandling();

    MCNAPI void $setBehaviorCommandCallback(std::function<void(const std::string&, BehaviorStatus)>);

    MCNAPI void $setBehaviorCommandStatus(std::string const&, ::BehaviorStatus);

    MCNAPI void $setConnectGamepadScreenActive(bool);

    MCNAPI ::Bedrock::Threading::Async<Core::PathBuffer<std::string>> $requestScreenshot(::ScreenshotOptions&);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<DevConsoleLogger>> $getDevConsoleLogger() const;

    MCNAPI std::shared_ptr<FileDataRequest>
    $requestImageFromUrl(std::string const&, std::function<void(Bedrock::Http::Status, const Core::Path&, ulong)>);

    MCNAPI void $initializeRenderResources();

    MCNAPI void $postInitRenderResources();

    MCNAPI void $onAppSuspended();

    MCNAPI void $onAppResumed();

    MCNAPI void
    $onActiveResourcePacksChanged(::gsl::not_null<Bedrock::NonOwnerPointer<ActorResourceDefinitionGroup>> const&);

    MCNAPI void $reloadEntityRenderers(::gsl::not_null<Bedrock::NonOwnerPointer<ActorResourceDefinitionGroup>> const&);

    MCNAPI ::BlockTessellator& $getBlockTessellator();

    MCNAPI ::BlockActorRenderDispatcher& $getBlockEntityRenderDispatcher();

    MCNAPI std::shared_ptr<ActorRenderDispatcher> $getEntityRenderDispatcher();

    MCNAPI ::ActorBlockRenderer& $getEntityBlockRenderer();

    MCNAPI ::ItemInHandRenderer* $getItemInHandRenderer();

    MCNAPI ::ItemRenderer* $getItemRenderer();

    MCNAPI ::HudIconActorRenderer* $getHudIconActorRenderer();

    MCNAPI std::deque<std::string>& $getSentMessageHistory();

    MCNAPI std::deque<std::string>& $getDevConsoleMessageHistory();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ProfanityContext>> $getProfanityContext() const;

    MCNAPI void $initTTSClient(std::shared_ptr<TextToSpeechClient>);

    MCNAPI std::shared_ptr<const TextToSpeechClient> $getTTSClient() const;

    MCNAPI std::shared_ptr<TextToSpeechClient> $getTTSClient();

    MCNAPI std::shared_ptr<ITTSEventManager> $getTTSEventManager();

    MCNAPI void $addTTSMessage(std::string const&, ::ProfanityFilterContext, bool, std::string const&, bool, bool);

    MCNAPI void $initCommands();

    MCNAPI uint $getUserId() const;

    MCNAPI bool $isPrimaryUser() const;

    MCNAPI double $getServerConnectionTime() const;

    MCNAPI void $setServerPingTime(int);

    MCNAPI int $getServerPingTime() const;

    MCNAPI void $setDefaultPlayscreenTab(::PlayScreenDefaultTab);

    MCNAPI void $setClientInstanceState(::ClientInstanceState const&);

    MCNAPI void $setUIEventCoordinator(::Bedrock::UniqueOwnerPointer<UIEventCoordinator>&&);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<UIEventCoordinator>> $getUIEventCoordinator();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ClientInstanceEventCoordinator>> $getEventCoordinator();

    MCNAPI ::ClientNetworkEventCoordinator& $getClientNetworkEventCoordinator();

    MCNAPI ::ClientScriptEventCoordinator& $getClientScriptEventCoordinator();

    MCNAPI
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
        $getNoBlockBreakUntil();

    MCNAPI void $setNoBlockBreakUntil(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

    MCNAPI ::GameModuleClient* $getGameModule();

    MCNAPI ::ClientHitDetectCoordinator& $getHitEventCoordinator();

    MCNAPI ::GameCallbacks& $getGameCallbacks();

    MCNAPI void $setActiveFileStorageArea(std::shared_ptr<Core::FileStorageArea>);

    MCNAPI void $sendClientEnteredLevel();

    MCNAPI ::HitDetectSystem* $getHitDetectSystem();

    MCNAPI bool $isPlaying() const;

    MCNAPI ::ClientInstanceState $getClientInstanceState() const;

    MCNAPI ::LatencyGraphDisplay* $getLatencyGraphDisplay() const;

    MCNAPI ::PlayerCapabilities::IClientController const& $getClientCapabilities() const;

    MCNAPI ::cg::math::Rect<float>
    $calculateViewPortModifiers(::SubClientId const, ulong const, ::SplitScreenDirection const) const;

    MCNAPI std::weak_ptr<IClientInstance> $getWeakPtrToThis();

    MCNAPI ::ClientRequirementVerifier const& $getClientRequirementVerifier() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<FogDefinitionRegistry>> $getFogDefinitionRegistry();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const FogDefinitionRegistry>> $getFogDefinitionRegistry() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<FogManager>> $getFogManager();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const FogManager>> $getFogManager() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ScreenLoadTimeTracker>> $getScreenLoadTimeTracker();

    MCNAPI ::ItemRegistryRef $getItemRegistry() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<DisconnectionRequestHandler>>
    $getDisconnectionRequestHandler() const;

    MCNAPI float $getRemoteServerTimeMs() const;

    MCNAPI void $setRemoteServerTimeMs(float);

    MCNAPI float $getRemoteServerNetworkTimeMs() const;

    MCNAPI void $setRemoteServerNetworkTimeMs(float);

    MCNAPI ::Bedrock::NonOwnerPointer<ClientScriptManager> $getClientScriptManager();

    MCNAPI ::Scripting::ScriptEngine* $getScriptingEngine();

    MCNAPI ::Bedrock::NonOwnerPointer<WorldTransferAgent> const $getWorldTransferAgent() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerReportHandler>> $getPlayerReportHandler();

    MCNAPI void $flagDisconnectionAndNotify(::Connection::DisconnectFailReason);

    MCNAPI void $flagDisconnectionAndNotifyWithParams(::DisconnectionScreenParams const&);

    MCNAPI void $disconnectSubClient(::Connection::DisconnectFailReason);

    MCNAPI void $setClientUpdateAndRenderThrottling(bool, int, float);

    MCNAPI bool $isClientUpdateAndRenderThrottlingEnabled() const;

    MCNAPI int $getClientUpdateAndRenderThrottlingThreshold() const;

    MCNAPI float $getClientUpdateAndRenderThrottlingScalar() const;

    MCNAPI bool $isUserBanned() const;

    MCNAPI void $setupPauseManagers();

    MCNAPI bool $isEligibleForPauseFeature() const;

    MCNAPI bool $requestInGamePause(bool);

    MCNAPI void $openContentLogHistory();

    MCNAPI double $getGameUpdateDurationInSeconds() const;

    MCNAPI std::optional<ConnectionContextInfo> $getConnectionContextInfo() const;

    MCNAPI ::Bedrock::NonOwnerPointer<LinkedAssetValidator> $getLinkedAssetValidator();

    MCNAPI void $onPlayerDestruction(::Player&);

    MCNAPI void
    $onExtendDiskSpace(bool const, std::weak_ptr<Core::FileStorageArea> const&, ulong, std::function<void()>);

    MCNAPI void $onLowDiskSpace(bool const, ulong);

    MCNAPI void $onOutOfDiskSpace(bool const, ulong);

    MCNAPI void $onCriticalDiskError(bool const, ::Core::LevelStorageState const&);

    MCNAPI void $onLevelCorrupt();

    MCNAPI void $onGameModeChanged();

    MCNAPI void $onBeforeSimTick();

    MCNAPI void $onTick(int, int);

    MCNAPI void $onInternetUpdate();

    MCNAPI void $onGameSessionReset();

    MCNAPI void $onLevelExit();

    MCNAPI void $onRequestResourceReload();

    MCNAPI void $updateScreens();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ClientDestroyBlockState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkff7778;
        ::ll::UntypedStorage<8, 8>  mUnk241918;
        ::ll::UntypedStorage<1, 1>  mUnkb9c8a1;
        ::ll::UntypedStorage<8, 8>  mUnk4fdef3;
        ::ll::UntypedStorage<8, 64> mUnk4fd828;
        ::ll::UntypedStorage<8, 64> mUnk738e7f;
        ::ll::UntypedStorage<8, 64> mUnk525e8f;
        // NOLINTEND

    public:
        // prevent constructor by default
        ClientDestroyBlockState& operator=(ClientDestroyBlockState const&);
        ClientDestroyBlockState(ClientDestroyBlockState const&);
        ClientDestroyBlockState();
    };

    struct mBehaviorCommandStatusCallback {};

    struct mCreditsCallback {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkeb8701;
    ::ll::UntypedStorage<8, 64>  mUnkab1ca4;
    ::ll::UntypedStorage<8, 64>  mUnk2c0603;
    ::ll::UntypedStorage<8, 64>  mUnk53ac0e;
    ::ll::UntypedStorage<8, 24>  mUnk4f1aef;
    ::ll::UntypedStorage<8, 8>   mUnk9379d1;
    ::ll::UntypedStorage<8, 24>  mUnk421768;
    ::ll::UntypedStorage<8, 8>   mUnke2a76f;
    ::ll::UntypedStorage<8, 8>   mUnka26806;
    ::ll::UntypedStorage<1, 1>   mUnk13fce4;
    ::ll::UntypedStorage<8, 8>   mUnk5125ae;
    ::ll::UntypedStorage<8, 8>   mUnked6a44;
    ::ll::UntypedStorage<8, 8>   mUnk415024;
    ::ll::UntypedStorage<8, 8>   mUnk9cdb03;
    ::ll::UntypedStorage<8, 8>   mUnk93a1c9;
    ::ll::UntypedStorage<8, 8>   mUnk5a4d7d;
    ::ll::UntypedStorage<8, 8>   mUnka653a9;
    ::ll::UntypedStorage<8, 16>  mUnk3a3d21;
    ::ll::UntypedStorage<8, 8>   mUnkb0301c;
    ::ll::UntypedStorage<8, 8>   mUnk4fe84c;
    ::ll::UntypedStorage<8, 24>  mUnk10018d;
    ::ll::UntypedStorage<8, 24>  mUnk6d935d;
    ::ll::UntypedStorage<8, 24>  mUnk9bcffe;
    ::ll::UntypedStorage<8, 48>  mUnk586e60;
    ::ll::UntypedStorage<8, 8>   mUnkc8308f;
    ::ll::UntypedStorage<4, 4>   mUnkfbfba1;
    ::ll::UntypedStorage<1, 1>   mUnkd6f5bb;
    ::ll::UntypedStorage<1, 1>   mUnkc69553;
    ::ll::UntypedStorage<1, 1>   mUnk20b577;
    ::ll::UntypedStorage<1, 1>   mUnka7e48d;
    ::ll::UntypedStorage<4, 4>   mUnk9e92ce;
    ::ll::UntypedStorage<8, 32>  mUnk6638d4;
    ::ll::UntypedStorage<1, 1>   mUnk48d2a2;
    ::ll::UntypedStorage<1, 1>   mUnk44a215;
    ::ll::UntypedStorage<8, 64>  mUnkc2143d;
    ::ll::UntypedStorage<8, 8>   mUnkfe7255;
    ::ll::UntypedStorage<4, 24>  mUnk8d7d51;
    ::ll::UntypedStorage<8, 40>  mUnk4418d8;
    ::ll::UntypedStorage<8, 8>   mUnkd8008b;
    ::ll::UntypedStorage<8, 512> mUnk2b811b;
    ::ll::UntypedStorage<4, 20>  mUnk6f5e44;
    ::ll::UntypedStorage<4, 20>  mUnk76317a;
    ::ll::UntypedStorage<4, 12>  mUnkd1e9b9;
    ::ll::UntypedStorage<8, 32>  mUnk445360;
    ::ll::UntypedStorage<8, 16>  mUnke10317;
    ::ll::UntypedStorage<4, 4>   mUnk47ffc0;
    ::ll::UntypedStorage<8, 8>   mUnk7ebe5b;
    ::ll::UntypedStorage<8, 8>   mUnk5e5288;
    ::ll::UntypedStorage<8, 8>   mUnkdd7dc7;
    ::ll::UntypedStorage<8, 16>  mUnkdb25a3;
    ::ll::UntypedStorage<8, 16>  mUnked2a78;
    ::ll::UntypedStorage<8, 8>   mUnk213553;
    ::ll::UntypedStorage<8, 8>   mUnkcb57e4;
    ::ll::UntypedStorage<8, 8>   mUnkfc8a9f;
    ::ll::UntypedStorage<8, 16>  mUnkb79e26;
    ::ll::UntypedStorage<8, 8>   mUnk3baa74;
    ::ll::UntypedStorage<8, 8>   mUnkc7931f;
    ::ll::UntypedStorage<8, 8>   mUnkdf551f;
    ::ll::UntypedStorage<8, 8>   mUnk60be02;
    ::ll::UntypedStorage<8, 8>   mUnk94c5d6;
    ::ll::UntypedStorage<8, 8>   mUnk53fa4f;
    ::ll::UntypedStorage<8, 8>   mUnkb410ae;
    ::ll::UntypedStorage<8, 16>  mUnk5da2d9;
    ::ll::UntypedStorage<1, 1>   mUnkfa0970;
    ::ll::UntypedStorage<8, 8>   mUnk291bf9;
    ::ll::UntypedStorage<8, 8>   mUnkaebffe;
    ::ll::UntypedStorage<8, 8>   mUnkc613e5;
    ::ll::UntypedStorage<8, 8>   mUnkf955c2;
    ::ll::UntypedStorage<1, 1>   mUnk563a7c;
    ::ll::UntypedStorage<8, 8>   mUnk8320a2;
    ::ll::UntypedStorage<4, 4>   mUnk97285b;
    ::ll::UntypedStorage<4, 4>   mUnke5e0bf;
    ::ll::UntypedStorage<8, 16>  mUnk968bec;
    ::ll::UntypedStorage<1, 1>   mUnk343fce;
    ::ll::UntypedStorage<1, 1>   mUnkbca286;
    ::ll::UntypedStorage<1, 1>   mUnk7610a3;
    ::ll::UntypedStorage<1, 1>   mUnk3a5c32;
    ::ll::UntypedStorage<1, 1>   mUnk3430d4;
    ::ll::UntypedStorage<1, 1>   mUnk9f2b54;
    ::ll::UntypedStorage<1, 1>   mUnk962bb4;
    ::ll::UntypedStorage<8, 792> mUnk58b85f;
    ::ll::UntypedStorage<1, 1>   mUnk1ef4d7;
    ::ll::UntypedStorage<1, 1>   mUnk29fbcb;
    ::ll::UntypedStorage<4, 4>   mUnkc07c6b;
    ::ll::UntypedStorage<1, 1>   mUnk923860;
    ::ll::UntypedStorage<8, 8>   mUnk108e78;
    ::ll::UntypedStorage<4, 4>   mUnk7d3d83;
    ::ll::UntypedStorage<8, 40>  mUnk4bd629;
    ::ll::UntypedStorage<8, 40>  mUnk8195f7;
    ::ll::UntypedStorage<8, 16>  mUnkcf1108;
    ::ll::UntypedStorage<8, 64>  mUnk7c17c7;
    ::ll::UntypedStorage<8, 16>  mUnk1e3691;
    ::ll::UntypedStorage<8, 8>   mUnk28391d;
    ::ll::UntypedStorage<8, 8>   mUnkb7e3c5;
    ::ll::UntypedStorage<8, 8>   mUnk73a2b8;
    ::ll::UntypedStorage<8, 8>   mUnkbefb0a;
    ::ll::UntypedStorage<8, 8>   mUnkf76b2d;
    ::ll::UntypedStorage<8, 16>  mUnkf8f09a;
    ::ll::UntypedStorage<4, 8>   mUnk973753;
    ::ll::UntypedStorage<4, 8>   mUnk600c92;
    ::ll::UntypedStorage<4, 4>   mUnk737de1;
    ::ll::UntypedStorage<8, 8>   mUnk6aa9fd;
    ::ll::UntypedStorage<8, 8>   mUnk8a8a63;
    ::ll::UntypedStorage<8, 24>  mUnk5c4c80;
    ::ll::UntypedStorage<8, 8>   mUnkd7ca73;
    ::ll::UntypedStorage<8, 16>  mUnk52193b;
    ::ll::UntypedStorage<8, 8>   mUnkc4e9e8;
    ::ll::UntypedStorage<8, 8>   mUnk82a9fa;
    ::ll::UntypedStorage<8, 8>   mUnk8ca999;
    ::ll::UntypedStorage<8, 24>  mUnk7ffd34;
    ::ll::UntypedStorage<8, 16>  mUnk99ef24;
    ::ll::UntypedStorage<8, 16>  mUnk6182e1;
    ::ll::UntypedStorage<8, 8>   mUnk84dba0;
    ::ll::UntypedStorage<8, 8>   mUnk9ffd30;
    ::ll::UntypedStorage<8, 264> mUnkfbb9ff;
    ::ll::UntypedStorage<8, 8>   mUnkf8bdff;
    ::ll::UntypedStorage<8, 24>  mUnkfbc948;
    ::ll::UntypedStorage<8, 24>  mUnk1e1098;
    ::ll::UntypedStorage<8, 24>  mUnk51c002;
    ::ll::UntypedStorage<1, 1>   mUnkc75c08;
    ::ll::UntypedStorage<4, 4>   mUnkcef468;
    ::ll::UntypedStorage<4, 4>   mUnk573d1d;
    ::ll::UntypedStorage<8, 16>  mUnkdc75f9;
    ::ll::UntypedStorage<8, 80>  mUnk3892fa;
    ::ll::UntypedStorage<8, 16>  mUnka5c62e;
    ::ll::UntypedStorage<8, 16>  mUnkd93a4c;
    ::ll::UntypedStorage<8, 8>   mUnkdfdcca;
    ::ll::UntypedStorage<8, 24>  mUnk7433ce;
    ::ll::UntypedStorage<8, 8>   mUnk4efc95;
    ::ll::UntypedStorage<8, 16>  mUnkc2c7c8;
    ::ll::UntypedStorage<8, 16>  mUnk6335eb;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInstance& operator=(ClientInstance const&);
    ClientInstance(ClientInstance const&);
    ClientInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientInstance() /*override*/ = default;

    virtual void onInitMinecraftGame() /*override*/;

    virtual void onDestroyMinecraftGame() /*override*/;

    virtual void init(::ClientInstanceInitArguments&& args) /*override*/;

    virtual void initSceneFactory(
        ::std::unique_ptr<::SceneFactory>         sceneFactory,
        ::std::unique_ptr<::OreUI::SceneProvider> sceneProvider
    ) /*override*/;

    virtual void setUiRouter(::std::unique_ptr<::OreUI::Router> uiRouter) /*override*/;

    virtual void initGraphics() /*override*/;

    virtual void stop() /*override*/;

    virtual void teardown() /*override*/;

    virtual void preShutDown() /*override*/;

    virtual void setGameConnectionInfo(::Social::GameConnectionInfo const& gameConnection) /*override*/;

    virtual ::std::optional<::Social::GameConnectionInfo> getGameConnectionInfo() /*override*/;

    virtual void onStartJoinGame(
        bool                                   isLocalServer,
        ::std::string const&                   multiplayerCorrelationId,
        ::std::string const&                   serverName,
        ::std::string const&                   worldName,
        ::NetworkType                          networkType,
        ::Social::MultiplayerServiceIdentifier service,
        ::PlayerJoinWorldContext               context
    ) /*override*/;

    virtual void onCancelJoinGame() /*override*/;

    virtual void requestLeaveGameAsync() /*override*/;

    virtual void requestLeaveGame(bool switchScreen, bool sync) /*override*/;

    virtual void stopPlayScreen() /*override*/;

    virtual bool isLeaveGameDone() const /*override*/;

    virtual void setupPlayScreenForLeaveGame() /*override*/;

    virtual void preCacheOutOfGameViews() /*override*/;

    virtual void resetPrimaryClient() /*override*/;

    virtual void resetGameSession() /*override*/;

    virtual void tick() /*override*/;

    virtual void frameUpdate(::FrameUpdateContext& frameUpdateContext) /*override*/;

    virtual void preFrameTick() /*override*/;

    virtual bool update(bool isInitFinished) /*override*/;

    virtual void endFrame() /*override*/;

    virtual float getFrameAlpha() /*override*/;

    virtual void startSubClientLateJoin(
        bool                                     hasXBLBroadcast,
        ::std::unique_ptr<::GameModuleClient>    gameModuleClient,
        ::std::optional<::ConnectionContextInfo> primaryConnectionInfo
    ) /*override*/;

    virtual ::Bedrock::Threading::Async<::ClientGameSetupResult> setupClientGame(
        bool                                  joiningLocalServer,
        ::ServerSupportedAuthenticationTypes  supportedAuth,
        ::std::unique_ptr<::GameModuleClient> gameModuleClient
    ) /*override*/;

    virtual ::BlockSource* getRegion() /*override*/;

    virtual ::LocalPlayer* getLocalPlayer() const /*override*/;

    virtual void setupPrimaryClientEditorManager() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> getLocalEditorPlayer() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorManager> getEditorManager() const /*override*/;

    virtual bool isPlayerInEditor() const /*override*/;

    virtual ::LocalPlayerChangedConnector getLocalPlayerChangedConnector() /*override*/;

    virtual ::WeakEntityRef getLocalUser() const /*override*/;

    virtual ::Actor* getCameraActor() const /*override*/;

    virtual void setCameraActor(::Actor* cameraActor) /*override*/;

    virtual ::ListenerState const* getListenerState() const /*override*/;

    virtual ::Actor* getCameraTargetActor() const /*override*/;

    virtual void setCameraTargetActor(::Actor* cameraTargetActor) /*override*/;

    virtual ::WeakEntityRef getCameraEntity() const /*override*/;

    virtual void getRawCameraEntities(::WeakEntityRef& cameraEntity, ::WeakEntityRef& cameraTargetEntity) const
        /*override*/;

    virtual void setRawCameraEntities(::WeakEntityRef cameraEntity, ::WeakEntityRef cameraTargetEntity) /*override*/;

    virtual ::HitResult const& getLatestHitResult() const /*override*/;

    virtual bool isLeavingGame() const /*override*/;

    virtual bool isDestroyingGame() const /*override*/;

    virtual bool isShuttingDown() const /*override*/;

    virtual bool useLowFrequencyUIRender() const /*override*/;

    virtual bool isSplitScreenActive() const /*override*/;

    virtual bool isExitingLevel() const /*override*/;

    virtual bool isInBedScreen() const /*override*/;

    virtual bool isInDeathScreen() const /*override*/;

    virtual bool isKeyboardEnabled() const /*override*/;

    virtual bool hasCommands() const /*override*/;

    virtual int getSplitScreenCount() const /*override*/;

    virtual bool isShowingLoadingScreen() const /*override*/;

    virtual bool shouldDisconnectOnAppSuspended() const /*override*/;

    virtual bool isGamePlayTipsEnabled() const /*override*/;

    virtual bool isPlatformNX() const /*override*/;

    virtual bool isLocalSplitscreenWith(::ActorUniqueID const& id) const /*override*/;

    virtual bool isValidCrossPlatformSkin(bool valueIfNull) const /*override*/;

    virtual bool isSelectedSkinInitialized() const /*override*/;

    virtual ::SplitScreenInfo getSplitScreenInfo() const /*override*/;

    virtual bool getHandlingControllerDisconnect() /*override*/;

    virtual void setOpenControllerDisconnectScreen(bool open) /*override*/;

    virtual ::ClientPlayMode getClientPlayMode() const /*override*/;

    virtual void setClientPlayMode(::ClientPlayMode const& mode) /*override*/;

    virtual ::std::function<void()> getCreditsCallback() /*override*/;

    virtual void setCreditsCallback(::std::function<void()> callback) /*override*/;

    virtual void setupTransitionForCredits(::std::function<void()> callback) /*override*/;

    virtual void refreshScreenSizeData() /*override*/;

    virtual void onScreenSizeChanged(int width, int height, float forcedGuiScale) /*override*/;

    virtual void onGuiScaleOffsetChanged() /*override*/;

    virtual void onSafeZoneChanged() /*override*/;

    virtual bool hasDismissedNewPlayerFlow() const /*override*/;

    virtual void quit(::std::string const& src, ::std::string const& reason) /*override*/;

    virtual ::IMinecraftGame& getMinecraftGame_DEPRECATED() const /*override*/;

    virtual ::IClientInstances& getClientInstances() const /*override*/;

    virtual ::World::WorldSystem& getWorldSystem() const /*override*/;

    virtual bool isWorldSystemReady() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Automation::AutomationClient> getAutomationClient() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::EDUSystems> getEDUSystems() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::EDUSystems const> getEDUSystems() const /*override*/;

    virtual ::IMinecraftEventing& getEventing() const /*override*/;

    virtual ::IConnectionEventing& getConnectionEventing() const /*override*/;

    virtual ::FontHandle getFontHandle() const /*override*/;

    virtual ::FontHandle getRuneFontHandle() const /*override*/;

    virtual ::FontHandle getUnicodeFontHandle() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> getGeometryGroup() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::BlockCullingGroup> getBlockCullingGroup() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> getMultiplayerServiceManager() const
        /*override*/;

    virtual ::IResourcePackRepository& getResourcePackRepository() const /*override*/;

    virtual ::ResourcePackManager& getResourcePackManager() const /*override*/;

    virtual ::PackManifestFactory& getPackManifestFactory() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> getKeyProvider() const /*override*/;

    virtual ::PacksInfoData const& getHostSpecifiedPacks() const /*override*/;

    virtual ::std::shared_ptr<::SkinRepository> getSkinRepository() const /*override*/;

    virtual ::PersonaRepository& getPersonaRepository() const /*override*/;

    virtual ::MarketplaceServicesManager& getMarketplaceServicesManager() const /*override*/;

    virtual ::PersonaClient& getPersonaClient() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> getStoreCatalogRepository() /*override*/;

    virtual ::std::shared_ptr<::mce::TextureGroup> getTextureGroup() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::mce::TextureGroup> getStoreCacheTextures() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::MinecraftGraphics> getMinecraftGraphics() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IUIRepository> getUIRepository() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> getUserManager() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::TrialManager> getTrialManager() const /*override*/;

    virtual bool wantToQuit() const /*override*/;

    virtual bool isPrimaryLevelCrossPlatformMultiplayer() const /*override*/;

    virtual bool isPrimaryLevelMultiplayer() const /*override*/;

    virtual bool isAdhocEnabled() const /*override*/;

    virtual ::std::shared_ptr<::ActorAnimationGroup> getActorAnimationGroup() const /*override*/;

    virtual bool isMarketplaceDisabled() const /*override*/;

    virtual ::std::pair<::StoreErrorCodes, ::std::string> const getMarketplaceDisabledReasonWithErrorCode() const
        /*override*/;

    virtual void linkToOffer(::std::string const& productId, bool allowWhileInGame) /*override*/;

    virtual void linkToPage(::std::string const& pageId) /*override*/;

    virtual void linkTo3PServerOffers(::std::string const& pageId, ::std::string const& creatorName) /*override*/;

    virtual void navigateToMarketplaceInventoryScreen(::InventoryTabIndex tabIndex) /*override*/;

    virtual void navigateToStoreHomeScreen() /*override*/;

    virtual void navigateToCoinPurchaseScreen(int neededCoins, ::std::function<void(bool, int)> callback) /*override*/;

    virtual void
    navigateToPurchaseOfferScreen(::StoreCatalogItem& item, ::StoreNavigationOrigin, bool const) /*override*/;

    virtual void navigateToDressingRoomOfferScreen(::std::string const& offerId) /*override*/;

    virtual bool navigateToProfileScreen(::std::string const&, bool const preventProgressScreen) /*override*/;

    virtual void navigateToServersScreen(bool const calledFromHyperlink) /*override*/;

    virtual void navigateToHowToPlayScreen(::std::string const& startTopic) /*override*/;

    virtual void navigateToMarketplacePassPDPScreen(::MarketplacePassTabIndex tabIndex) /*override*/;

    virtual void navigateToRealmsStoriesTransitionScreen(::Realms::World const& world) /*override*/;

    virtual void tryPushLeaveGameScreen() /*override*/;

    virtual void tryStartDayOneExperience() /*override*/;

    virtual bool isReadyToRender() const /*override*/;

    virtual void onDimensionChangedEvent() /*override*/;

    virtual void onGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    virtual ::std::string getTopScreenName() const /*override*/;

    virtual void setLeaveGameInProgressAsReadyToContinue() /*override*/;

    virtual void stopDestroying() /*override*/;

    virtual void onClientCreatedLevel(
        ::std::pair<::std::unique_ptr<::Level>, ::OwnerPtr<::EntityContext>> levelEntity,
        ::OwnerPtr<::EntityContext>                                          userEntity
    ) /*override*/;

    virtual ::PlayerAuthentication& getPlayerAuthentication() /*override*/;

    virtual void createPlayerAuthentication() /*override*/;

    virtual void createPlayerAuthentication(uint64 clientRandomId) /*override*/;

    virtual ::std::string getPlatformId() const /*override*/;

    virtual ::std::string getPlatformOnlineId() const /*override*/;

    virtual bool useController() const /*override*/;

    virtual bool useTouchscreen() const /*override*/;

    virtual bool getMouseGrabbed() const /*override*/;

    virtual bool currentInputModeIsMouseAndKeyboard() const /*override*/;

    virtual bool allowPicking() const /*override*/;

    virtual bool isShowingMenu() const /*override*/;

    virtual bool isShowingPauseScreen() const /*override*/;

    virtual bool isShowingProgressScreen() const /*override*/;

    virtual bool isShowingWorldProgressScreen() const /*override*/;

    virtual bool isShowingRealmsProgressScreen() const /*override*/;

    virtual bool isShowingDeathScreen() const /*override*/;

    virtual bool isShowingServerForm() const /*override*/;

    virtual bool isScreenReplaceable() const /*override*/;

    virtual bool isInWorldAndNotShowingAnyMenuScreens() const /*override*/;

    virtual bool isWorldActive() const /*override*/;

    virtual bool isInRealm() /*override*/;

    virtual bool readyForShutdown() const /*override*/;

    virtual bool isPrimaryClient() const /*override*/;

    virtual bool isEduMode() const /*override*/;

    virtual bool isGamepadCursorEnabled() const /*override*/;

    virtual bool isInControlCustomization() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Minecraft> getServerData() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Minecraft const> getServerData() const /*override*/;

    virtual ::ClientLevel* getLevel() /*override*/;

    virtual ::ClientLevel const* getLevel() const /*override*/;

    virtual bool hasLevel() const /*override*/;

    virtual bool isPreGame() const /*override*/;

    virtual bool isInMultiplayerGame() const /*override*/;

    virtual bool isMultiPlayerClient() const /*override*/;

    virtual ::IOptionRegistry& getOptions() /*override*/;

    virtual ::IOptionRegistry const& getOptions() const /*override*/;

    virtual ::IReadWriteOptions const& getReadWriteOptions() const /*override*/;

    virtual ::std::shared_ptr<::OptionRegistry> getOptionsPtr() /*override*/;

    virtual ::std::shared_ptr<::OptionRegistry const> const getOptionsPtr() const /*override*/;

    virtual ::std::shared_ptr<::Social::User> const& getUser() const /*override*/;

    virtual ::std::shared_ptr<::Settings::IRegistry> getSettingsRegistry() /*override*/;

    virtual ::Option const& getShowLearningPromptsOption() const /*override*/;

    virtual ::Option& getShowControlTipsOption() /*override*/;

    virtual ::Option& getShowControlTipsOverrideOption() /*override*/;

    virtual double getControlTipsTimeElapsed() const /*override*/;

    virtual void setControlTipsTimeElapsedStart() /*override*/;

    virtual ::GameRenderer& getGameRenderer() const /*override*/;

    virtual ::LevelRenderer* getLevelRenderer() const /*override*/;

    virtual ::LevelRendererCameraProxy* getLevelRendererCameraProxy() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry> getCameraRegistry() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry const> getCameraRegistry() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::EntitySystems> getCameraSystems() /*override*/;

    virtual ::LightTexture* getLightTexture() /*override*/;

    virtual void setupLevelRendering(::ClientLevel& level, ::WeakEntityRef cameraTargetEntity) /*override*/;

    virtual ::mce::ViewportInfo const& getViewportInfo() const /*override*/;

    virtual void setViewportInfo(::mce::ViewportInfo const& viewportInfo) /*override*/;

    virtual ::Vec2 getNormalizedViewportSize() const /*override*/;

    virtual void updateChunkRadius() /*override*/;

    virtual void setUITexture(::mce::Texture* tex) /*override*/;

    virtual ::mce::Texture* getUITexture() /*override*/;

    virtual void setLevelTexture(::mce::Texture* tex) /*override*/;

    virtual ::mce::Texture* getLevelTexture() /*override*/;

    virtual void setUICursorTexture(::mce::TexturePtr tex) /*override*/;

    virtual ::mce::TexturePtr getUICursorTexture() const /*override*/;

    virtual ::mce::Camera& getCamera() /*override*/;

    virtual ::ShaderColor& getShaderColor() /*override*/;

    virtual ::ShaderColor& getDarkShaderColor() /*override*/;

    virtual void clearGraphicsCache() /*override*/;

    virtual void
    getNormalizedUICursorTransform(::MatrixStack::MatrixStackRef& matrix, float cursorHalfSizeTexels) /*override*/;

    virtual bool shouldRenderUICursor() const /*override*/;

    virtual bool getRenderPlayerModel() const /*override*/;

    virtual ::DeferredLighting& getDeferredLighting() /*override*/;

    virtual float getGuiScale() const /*override*/;

    virtual ::Option const& getGuiScaleOption() const /*override*/;

    virtual int getGuiScaleOffset() const /*override*/;

    virtual void setGuiScaleOffset(int guiScale) /*override*/;

    virtual void renderImGui(::ScreenContext& screenContext, bool drawMenuBar) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GuiData> getGuiData() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::GuiData const> getGuiData() const /*override*/;

    virtual ::GuidedFlowManager& getGuidedFlowManager() /*override*/;

    virtual ::PixelCalc const& getDpadScale() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::DateManager const> getDateManager() const /*override*/;

    virtual void addOverrideHoursToDateTime(uint const hoursToAdd) /*override*/;

    virtual ::ToastManager& getToastManager() /*override*/;

    virtual ::ClipboardProxy<::ApplicationSignal::ClipboardCopy, ::ApplicationSignal::ClipboardPasteRequest>&
    getClipboardManager() /*override*/;

    virtual ::AbstractScene* getTopScene() /*override*/;

    virtual ::AbstractScene const* getTopScene() const /*override*/;

    virtual ::AbstractScene* getActiveScene() /*override*/;

    virtual ::AbstractScene const* getActiveScene() const /*override*/;

    virtual ::SceneFactory& getSceneFactory() const /*override*/;

    virtual ::OreUI::SceneProvider& getSceneProvider() const /*override*/;

    virtual ::ui::ScreenTechStackSelector& getScreenTechStackSelector() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> getClientSceneStack() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> getClientSceneStack() /*override*/;

    virtual ::OreUI::Router& getClientUIRouter() const /*override*/;

    virtual ::ISceneStack& getMainSceneStackInterface() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> getMainSceneStack() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> getMainSceneStack() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> getCurrentSceneStack() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> getCurrentSceneStack() /*override*/;

    virtual ::OreUI::Router& getCurrentUIRouter() /*override*/;

    virtual ::OreUI::Router const& getCurrentUIRouter() const /*override*/;

    virtual ::OreUI::ITelemetry& getOreUITelemetry() /*override*/;

    virtual ::WeakRef<::OreUI::UIBlockThumbnailAtlasManager> getOreUIBlockThumbnailAtlasManager() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> prepareSceneFor(
        ::ui::SceneType const                                 sceneTypeToFind,
        ::std::function<::std::shared_ptr<::AbstractScene>()> createScreenCallback
    ) /*override*/;

    virtual ::CachedScenes& getCachedScenes() /*override*/;

    virtual ::std::string getScreenName() const /*override*/;

    virtual ::std::string getScreenTelemetry() const /*override*/;

    virtual ::ui::SceneType getTopSceneType() const /*override*/;

    virtual ::MobEffectsLayout& getMobEffectsLayout() /*override*/;

    virtual ::std::string emoticonifyText(::std::string const& text) const /*override*/;

    virtual ::std::string emoticonifyText(::std::string const& text, bool isGameTip) /*override*/;

    virtual void onMobEffectsChange() /*override*/;

    virtual void setUISizeAndScale(int w, int h, float forcedGuiScale) /*override*/;

    virtual void forEachVisibleScreen(::brstd::function_ref<void(::AbstractScene&)> callback) /*override*/;

    virtual void forEachScreen(::brstd::function_ref<bool(::AbstractScene&)> callback, bool topDown) /*override*/;

    virtual void forEachScreenConst(::brstd::function_ref<bool(::AbstractScene const&)> callback, bool topDown) const
        /*override*/;

    virtual bool updateSceneStack() /*override*/;

    virtual void forEachAlwaysAcceptInputScreen(
        ::std::function<void(::AbstractScene&)> callback,
        ::AbstractScene const*                  ignoreScreen
    ) /*override*/;

    virtual void forEachAlwaysAcceptInputScreenWithTop(::std::function<void(::AbstractScene&)> callback) /*override*/;

    virtual void showPlayerProfile(::std::string const& xuid, ::std::string const& platformId) /*override*/;

    virtual bool isInGameInputEnabled() const /*override*/;

    virtual void setInGameInputEnabled(bool isEnabled) /*override*/;

    virtual ::Vec2 getSafeZoneScale() const /*override*/;

    virtual void verifySkinApproval(
        ::std::function<void(::std::string)> const& notApprovedCallback,
        ::std::function<void()> const&              approvedCallback
    ) const /*override*/;

    virtual ::InputMode getCurrentInputMode() const /*override*/;

    virtual bool isTouchGameplayAllowed() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::MinecraftInputHandler> getMinecraftInput() const /*override*/;

    virtual ::KeyboardManager& getKeyboardManager() /*override*/;

    virtual void setLastPointerLocation(float x, float y, float z) /*override*/;

    virtual void clearTouchPointerLocations() /*override*/;

    virtual void clearTouchPointerLocation(int id) /*override*/;

    virtual void updateTouchPointerLocation(int id, float x, float y) /*override*/;

    virtual ::Vec3 getLastPointerLocation() /*override*/;

    virtual ::Vec2 getTouchPointerLocation(int id) const /*override*/;

    virtual void updateActionPointerId(int id) /*override*/;

    virtual int getActionPointerId() const /*override*/;

    virtual bool shouldUseLastPointerLocationOnFocusChange() /*override*/;

    virtual bool currentScreenShouldStealMouse() /*override*/;

    virtual ::BuildActionIntention& getInProgressBAI() const /*override*/;

    virtual ::PacketSender& getPacketSender() /*override*/;

    virtual ::ClientNetworkSystem& getClientNetworkSystem() /*override*/;

    virtual ::ClientNetworkSystem const& getClientNetworkSystem() const /*override*/;

    virtual ::glm::vec2 getGamepadCursorPosition() const /*override*/;

    virtual void updateControlOptionState(uint id, bool active) /*override*/;

    virtual void clearActiveControlOptions() /*override*/;

    virtual ::std::set<uint> const& getActiveControlOptions() const /*override*/;

    virtual ::std::vector<::OptionID> getActiveOptionIDs(::ControlOptionType controlOptionType) const /*override*/;

    virtual void setNumberOfActiveConfigs(int numberOfActiveConfigs) /*override*/;

    virtual int getNumberOfActiveConfigs() const /*override*/;

    virtual bool isNoConfigSelected() const /*override*/;

    virtual void setNumberOfEnabledConfigs(int numberOfEnabledConfigs) /*override*/;

    virtual int getNumberOfEnabledConfigs() const /*override*/;

    virtual void setWYSIWYGState(::WYSIWYGState wysiwygState) /*override*/;

    virtual ::WYSIWYGState getWYSIWYGState() const /*override*/;

    virtual void setOtherConfigsExistInThisCategory(bool otherConfigsExistInThisCategory) /*override*/;

    virtual bool getOtherConfigsExistInThisCategory() const /*override*/;

    virtual void setMoveTurnInput(::std::unique_ptr<::ClientMoveInputHandler> pClientMoveInputHandler) /*override*/;

    virtual void setupPersistentControls(::InputMode currentMode) /*override*/;

    virtual void resetPlayerMovement() /*override*/;

    virtual void suspendPredictedMovement() /*override*/;

    virtual void onClientInputInitComplete() /*override*/;

    virtual void setClientInputHandler(::std::unique_ptr<::ClientInputHandler> pClientInputHandler) /*override*/;

    virtual ::ClientInputHandler* getInput() const /*override*/;

    virtual int getControllerId() const /*override*/;

    virtual bool hasConnectedController() const /*override*/;

    virtual ::SubClientId getClientSubId() const /*override*/;

    virtual void setSuspendInput(bool suspendInput) /*override*/;

    virtual void setSuspendDirectionalInput(bool suspendDirectionalInput) /*override*/;

    virtual void setDisableInput(bool disableInput) /*override*/;

    virtual void grabMouse() /*override*/;

    virtual void releaseMouse() /*override*/;

    virtual void refocusMouse(bool lostMouse) /*override*/;

    virtual void setMouseType(::Bedrock::Input::PointerType type) /*override*/;

    virtual void resetBai(int baiFlags) /*override*/;

    virtual void clearInProgressBAI() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::SoundEngine> getSoundEngine() const /*override*/;

    virtual ::MusicManager const* getMusicManager() const /*override*/;

    virtual ::MusicManager* getMusicManagerNonConst() const /*override*/;

    virtual void play(::std::string const& name, ::Vec3 const& pos, float volume, float pitch) /*override*/;

    virtual void playUI(::std::string const& name, float volume, float pitch) /*override*/;

    virtual void muteAudio() /*override*/;

    virtual void unMuteAudio() /*override*/;

    virtual void fadeOutMusic() const /*override*/;

    virtual ::TaskGroup& getTaskGroup() /*override*/;

    virtual void onFullVanillaPackOnStack() /*override*/;

    virtual bool isFullVanillaPackOnStack() const /*override*/;

    virtual void onPlayerLoaded(::Player& player) /*override*/;

    virtual void setClientGameMode(::GameType gameType) /*override*/;

    virtual void resetToDefaultGameMode() /*override*/;

    virtual ::IGameConnectionListener& getGameConnectionListener() /*override*/;

    virtual void connectToThirdPartyServer(::std::string const& ipAddress, int port) /*override*/;

    virtual void startExternalNetworkWorld(
        ::Social::GameConnectionInfo connection,
        ::std::string const&         serverName,
        ::PlayerJoinWorldContext     context
    ) /*override*/;

    virtual bool isReadyToReconnect() const /*override*/;

    virtual bool checkForPiracy() /*override*/;

    virtual void updateChatFilterStatus(::ProfanityContext& profanityContext) /*override*/;

    virtual void updateControllerHandling() /*override*/;

    virtual void onPlayerDestruction(::Player& player) /*override*/;

    virtual void
    setBehaviorCommandCallback(::std::function<void(::std::string const&, ::BehaviorStatus)> callback) /*override*/;

    virtual void setBehaviorCommandStatus(::std::string const& treeName, ::BehaviorStatus status) /*override*/;

    virtual void setConnectGamepadScreenActive(bool active) /*override*/;

    virtual ::Bedrock::Threading::Async<::Core::PathBuffer<::std::string>>
    requestScreenshot(::ScreenshotOptions& screenshotOptions) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::DevConsoleLogger> getDevConsoleLogger() const /*override*/;

    virtual ::std::shared_ptr<::FileDataRequest> requestImageFromUrl(
        ::std::string const&                                                        imageUrl,
        ::std::function<void(::Bedrock::Http::Status, ::Core::Path const&, uint64)> callback
    ) /*override*/;

    virtual void setActiveFileStorageArea(::std::shared_ptr<::Core::FileStorageArea> storageArea) /*override*/;

    virtual void onExtendDiskSpace(
        bool const                                      bSet,
        ::std::weak_ptr<::Core::FileStorageArea> const& storageAreaWeakPtr,
        uint64                                          freeSpace,
        ::std::function<void()>                         onHandledEventCallback
    ) /*override*/;

    virtual void onLowDiskSpace(bool const bSet, uint64 freeSpace) /*override*/;

    virtual void onOutOfDiskSpace(bool const bSet, uint64 freeSpace) /*override*/;

    virtual void onCriticalDiskError(bool const bSet, ::Core::LevelStorageState const& errorCode) /*override*/;

    virtual void onLevelCorrupt() /*override*/;

    virtual void onGameModeChanged() /*override*/;

    virtual void onBeforeSimTick() /*override*/;

    virtual void onTick(int nTick, int maxTick) /*override*/;

    virtual void onInternetUpdate() /*override*/;

    virtual void onGameSessionReset() /*override*/;

    virtual void onLevelExit() /*override*/;

    virtual void onRequestResourceReload() /*override*/;

    virtual void updateScreens() /*override*/;

    virtual void initializeRenderResources() /*override*/;

    virtual void postInitRenderResources() /*override*/;

    virtual void onAppSuspended() /*override*/;

    virtual void onAppResumed() /*override*/;

    virtual void onActiveResourcePacksChanged(
        ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const& entityResourceDefGroup
    ) /*override*/;

    virtual void reloadEntityRenderers(
        ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const& actorResourceDefinitionGroup
    ) /*override*/;

    virtual ::BlockTessellator& getBlockTessellator() /*override*/;

    virtual ::BlockActorRenderDispatcher& getBlockEntityRenderDispatcher() /*override*/;

    virtual ::std::shared_ptr<::ActorRenderDispatcher> getEntityRenderDispatcher() /*override*/;

    virtual ::ActorBlockRenderer& getEntityBlockRenderer() /*override*/;

    virtual ::ItemInHandRenderer* getItemInHandRenderer() /*override*/;

    virtual ::ItemRenderer* getItemRenderer() /*override*/;

    virtual ::HudIconActorRenderer* getHudIconActorRenderer() /*override*/;

    virtual ::std::deque<::std::string>& getSentMessageHistory() /*override*/;

    virtual ::std::deque<::std::string>& getDevConsoleMessageHistory() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> getProfanityContext() const /*override*/;

    virtual void initTTSClient(::std::shared_ptr<::TextToSpeechClient> textToSpeechClient) /*override*/;

    virtual ::std::shared_ptr<::TextToSpeechClient> getTTSClient() /*override*/;

    virtual ::std::shared_ptr<::TextToSpeechClient const> getTTSClient() const /*override*/;

    virtual ::std::shared_ptr<::ITTSEventManager> getTTSEventManager() /*override*/;

    virtual void addTTSMessage(
        ::std::string const&     message,
        ::ProfanityFilterContext profanityFilterContext,
        bool                     interruptible,
        ::std::string const&     interruptibleId,
        bool                     required,
        bool                     disregardAppFocus
    ) /*override*/;

    virtual void initCommands() /*override*/;

    virtual uint getUserId() const /*override*/;

    virtual bool isPrimaryUser() const /*override*/;

    virtual double getServerConnectionTime() const /*override*/;

    virtual void setServerPingTime(int pingTime) /*override*/;

    virtual int getServerPingTime() const /*override*/;

    virtual void setDefaultPlayscreenTab(::PlayScreenDefaultTab defaultTab) /*override*/;

    virtual void setClientInstanceState(::ClientInstanceState const& newstate) /*override*/;

    virtual void setUIEventCoordinator(::Bedrock::UniqueOwnerPointer<::UIEventCoordinator>&& coordinator) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::UIEventCoordinator> getUIEventCoordinator() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ClientInstanceEventCoordinator> getEventCoordinator() /*override*/;

    virtual ::ClientNetworkEventCoordinator& getClientNetworkEventCoordinator() /*override*/;

    virtual ::ClientScriptEventCoordinator& getClientScriptEventCoordinator() /*override*/;

    virtual ::std::chrono::steady_clock::time_point getNoBlockBreakUntil() /*override*/;

    virtual void setNoBlockBreakUntil(::std::chrono::steady_clock::time_point timePoint) /*override*/;

    virtual ::GameCallbacks& getGameCallbacks() /*override*/;

    virtual ::GameModuleClient* getGameModule() /*override*/;

    virtual ::ClientHitDetectCoordinator& getHitEventCoordinator() /*override*/;

    virtual void sendClientEnteredLevel() /*override*/;

    virtual ::HitDetectSystem* getHitDetectSystem() /*override*/;

    virtual bool isPlaying() const /*override*/;

    virtual ::ClientInstanceState getClientInstanceState() const /*override*/;

    virtual ::LatencyGraphDisplay* getLatencyGraphDisplay() const /*override*/;

    virtual ::PlayerCapabilities::IClientController const& getClientCapabilities() const /*override*/;

    virtual ::cg::math::Rect<float> calculateViewPortModifiers(
        ::SubClientId const          clientId,
        uint64 const                 clientCount,
        ::SplitScreenDirection const splitScreenConfiguration
    ) const /*override*/;

    virtual ::std::weak_ptr<::IClientInstance> getWeakPtrToThis() /*override*/;

    virtual ::ClientRequirementVerifier const& getClientRequirementVerifier() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FogDefinitionRegistry const> getFogDefinitionRegistry() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FogDefinitionRegistry> getFogDefinitionRegistry() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FogManager const> getFogManager() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FogManager> getFogManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ScreenLoadTimeTracker> getScreenLoadTimeTracker() /*override*/;

    virtual ::ItemRegistryRef getItemRegistry() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::DisconnectionRequestHandler> getDisconnectionRequestHandler() const
        /*override*/;

    virtual float getRemoteServerTimeMs() const /*override*/;

    virtual void setRemoteServerTimeMs(float time) /*override*/;

    virtual float getRemoteServerNetworkTimeMs() const /*override*/;

    virtual void setRemoteServerNetworkTimeMs(float time) /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::ClientScriptManager> getClientScriptManager() /*override*/;

    virtual ::Scripting::ScriptEngine* getScriptingEngine() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::WorldTransferAgent> const getWorldTransferAgent() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerReportHandler> getPlayerReportHandler() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> getLinkedAssetValidator() /*override*/;

    virtual void flagDisconnectionAndNotify(::Connection::DisconnectFailReason disconnectReason) /*override*/;

    virtual void flagDisconnectionAndNotifyWithParams(::DisconnectionScreenParams const& params) /*override*/;

    virtual void disconnectSubClient(::Connection::DisconnectFailReason disconnectReason) /*override*/;

    virtual void setClientUpdateAndRenderThrottling(bool enabled, int threshold, float scalar) /*override*/;

    virtual bool isClientUpdateAndRenderThrottlingEnabled() const /*override*/;

    virtual int getClientUpdateAndRenderThrottlingThreshold() const /*override*/;

    virtual float getClientUpdateAndRenderThrottlingScalar() const /*override*/;

    virtual bool isUserBanned() const /*override*/;

    virtual bool isEligibleForPauseFeature() const /*override*/;

    virtual void setupPauseManagers() /*override*/;

    virtual bool requestInGamePause(bool status) /*override*/;

    virtual void openContentLogHistory() /*override*/;

    virtual double getGameUpdateDurationInSeconds() const /*override*/;

    virtual ::std::optional<::ConnectionContextInfo> getConnectionContextInfo() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ClientInstance(::ClientInstanceArguments&& args);

    MCAPI ::std::unique_ptr<::LegacyClientNetworkHandler>
    _createNetworkHandler(::PlayerAuthenticationType authType, ::RawGameServerToken&& token);

    MCAPI bool _getIsConnectedToApplicationLayer() const;

    MCAPI void _handleDisconnectionScreenRequests();

    MCAPI bool _isEditorModeOrInEditorWorld() const;

    MCAPI bool _isShowingScreen(::std::string_view screenName) const;

    MCAPI void _joinWorldInProgressSubclient(::std::optional<::ConnectionContextInfo> primaryConnectionInfo);

    MCAPI void _leaveGameOnUnrecoverableError(
        ::Connection::DisconnectFailReason reason,
        ::std::string const&               telemetryMessage,
        ::std::string const&               errorDescriptionOverride
    );

    MCAPI void _perspectiveOptionChanged(::Option const&);

    MCAPI void _requestLeaveGameImpl(bool const switchScreen, bool const sync);

    MCAPI void _startDestroyingGame();

    MCAPI void _startLeaveGame();

    MCAPI void _startWorldPrimaryClient(::PlayerAuthenticationType authType, ::RawGameServerToken&& token);

    MCAPI void
    _tickBuildAction(::HitResult const& solidHitResult_, ::HitResult const& liquidHitResult_, bool advanceTime);

    MCAPI void _updateScreenSizeVariables(::Vec2 const& totalScreenSize, ::Vec2 const& safeZone, float forcedGuiScale);

    MCAPI void fireEventDiskStatus(::DiskStatus status, ::Core::LevelStorageState errorCode);

    MCAPI void flagDisconnectionAndNotifyWithTarget(
        ::DisconnectionScreenParams const& params,
        ::Connection::UIReturnTarget       uiReturnTarget
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ClientInstanceArguments&& args);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onInitMinecraftGame();

    MCAPI void $onDestroyMinecraftGame();

    MCAPI void $init(::ClientInstanceInitArguments&& args);

    MCAPI void $initSceneFactory(
        ::std::unique_ptr<::SceneFactory>         sceneFactory,
        ::std::unique_ptr<::OreUI::SceneProvider> sceneProvider
    );

    MCAPI void $setUiRouter(::std::unique_ptr<::OreUI::Router> uiRouter);

    MCAPI void $initGraphics();

    MCFOLD void $stop();

    MCAPI void $teardown();

    MCAPI void $preShutDown();

    MCAPI void $setGameConnectionInfo(::Social::GameConnectionInfo const& gameConnection);

    MCAPI ::std::optional<::Social::GameConnectionInfo> $getGameConnectionInfo();

    MCAPI void $onStartJoinGame(
        bool                                   isLocalServer,
        ::std::string const&                   multiplayerCorrelationId,
        ::std::string const&                   serverName,
        ::std::string const&                   worldName,
        ::NetworkType                          networkType,
        ::Social::MultiplayerServiceIdentifier service,
        ::PlayerJoinWorldContext               context
    );

    MCAPI void $onCancelJoinGame();

    MCAPI void $requestLeaveGameAsync();

    MCAPI void $requestLeaveGame(bool switchScreen, bool sync);

    MCAPI void $stopPlayScreen();

    MCAPI bool $isLeaveGameDone() const;

    MCAPI void $setupPlayScreenForLeaveGame();

    MCAPI void $preCacheOutOfGameViews();

    MCAPI void $resetPrimaryClient();

    MCAPI void $resetGameSession();

    MCFOLD void $tick();

    MCAPI void $frameUpdate(::FrameUpdateContext& frameUpdateContext);

    MCAPI void $preFrameTick();

    MCAPI bool $update(bool isInitFinished);

    MCFOLD void $endFrame();

    MCAPI float $getFrameAlpha();

    MCAPI void $startSubClientLateJoin(
        bool                                     hasXBLBroadcast,
        ::std::unique_ptr<::GameModuleClient>    gameModuleClient,
        ::std::optional<::ConnectionContextInfo> primaryConnectionInfo
    );

    MCAPI ::Bedrock::Threading::Async<::ClientGameSetupResult> $setupClientGame(
        bool                                  joiningLocalServer,
        ::ServerSupportedAuthenticationTypes  supportedAuth,
        ::std::unique_ptr<::GameModuleClient> gameModuleClient
    );

    MCAPI ::BlockSource* $getRegion();

    MCAPI ::LocalPlayer* $getLocalPlayer() const;

    MCAPI void $setupPrimaryClientEditorManager();

    MCAPI ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> $getLocalEditorPlayer() const;

    MCAPI ::Bedrock::NonOwnerPointer<::Editor::IEditorManager> $getEditorManager() const;

    MCAPI bool $isPlayerInEditor() const;

    MCAPI ::LocalPlayerChangedConnector $getLocalPlayerChangedConnector();

    MCAPI ::WeakEntityRef $getLocalUser() const;

    MCAPI ::Actor* $getCameraActor() const;

    MCAPI void $setCameraActor(::Actor* cameraActor);

    MCAPI ::ListenerState const* $getListenerState() const;

    MCAPI ::Actor* $getCameraTargetActor() const;

    MCAPI void $setCameraTargetActor(::Actor* cameraTargetActor);

    MCAPI ::WeakEntityRef $getCameraEntity() const;

    MCAPI void $getRawCameraEntities(::WeakEntityRef& cameraEntity, ::WeakEntityRef& cameraTargetEntity) const;

    MCAPI void $setRawCameraEntities(::WeakEntityRef cameraEntity, ::WeakEntityRef cameraTargetEntity);

    MCAPI ::HitResult const& $getLatestHitResult() const;

    MCAPI bool $isLeavingGame() const;

    MCAPI bool $isDestroyingGame() const;

    MCAPI bool $isShuttingDown() const;

    MCAPI bool $useLowFrequencyUIRender() const;

    MCAPI bool $isSplitScreenActive() const;

    MCAPI bool $isExitingLevel() const;

    MCAPI bool $isInBedScreen() const;

    MCAPI bool $isInDeathScreen() const;

    MCAPI bool $isKeyboardEnabled() const;

    MCAPI bool $hasCommands() const;

    MCAPI int $getSplitScreenCount() const;

    MCAPI bool $isShowingLoadingScreen() const;

    MCFOLD bool $shouldDisconnectOnAppSuspended() const;

    MCAPI bool $isGamePlayTipsEnabled() const;

    MCFOLD bool $isPlatformNX() const;

    MCAPI bool $isLocalSplitscreenWith(::ActorUniqueID const& id) const;

    MCAPI bool $isValidCrossPlatformSkin(bool valueIfNull) const;

    MCAPI bool $isSelectedSkinInitialized() const;

    MCAPI ::SplitScreenInfo $getSplitScreenInfo() const;

    MCAPI bool $getHandlingControllerDisconnect();

    MCAPI void $setOpenControllerDisconnectScreen(bool open);

    MCAPI ::ClientPlayMode $getClientPlayMode() const;

    MCAPI void $setClientPlayMode(::ClientPlayMode const& mode);

    MCAPI ::std::function<void()> $getCreditsCallback();

    MCAPI void $setCreditsCallback(::std::function<void()> callback);

    MCAPI void $setupTransitionForCredits(::std::function<void()> callback);

    MCAPI void $refreshScreenSizeData();

    MCAPI void $onScreenSizeChanged(int width, int height, float forcedGuiScale);

    MCAPI void $onGuiScaleOffsetChanged();

    MCAPI void $onSafeZoneChanged();

    MCAPI bool $hasDismissedNewPlayerFlow() const;

    MCAPI void $quit(::std::string const& src, ::std::string const& reason);

    MCAPI ::IMinecraftGame& $getMinecraftGame_DEPRECATED() const;

    MCAPI ::IClientInstances& $getClientInstances() const;

    MCAPI ::World::WorldSystem& $getWorldSystem() const;

    MCAPI bool $isWorldSystemReady() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Automation::AutomationClient> $getAutomationClient() const;

    MCAPI ::Bedrock::NonOwnerPointer<::EDUSystems> $getEDUSystems();

    MCAPI ::Bedrock::NonOwnerPointer<::EDUSystems const> $getEDUSystems() const;

    MCAPI ::IMinecraftEventing& $getEventing() const;

    MCAPI ::IConnectionEventing& $getConnectionEventing() const;

    MCAPI ::FontHandle $getFontHandle() const;

    MCAPI ::FontHandle $getRuneFontHandle() const;

    MCAPI ::FontHandle $getUnicodeFontHandle() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> $getGeometryGroup() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::BlockCullingGroup> $getBlockCullingGroup() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> $getMultiplayerServiceManager() const;

    MCAPI ::IResourcePackRepository& $getResourcePackRepository() const;

    MCAPI ::ResourcePackManager& $getResourcePackManager() const;

    MCAPI ::PackManifestFactory& $getPackManifestFactory();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> $getKeyProvider() const;

    MCAPI ::PacksInfoData const& $getHostSpecifiedPacks() const;

    MCAPI ::std::shared_ptr<::SkinRepository> $getSkinRepository() const;

    MCAPI ::PersonaRepository& $getPersonaRepository() const;

    MCAPI ::MarketplaceServicesManager& $getMarketplaceServicesManager() const;

    MCAPI ::PersonaClient& $getPersonaClient() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> $getStoreCatalogRepository();

    MCAPI ::std::shared_ptr<::mce::TextureGroup> $getTextureGroup() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::mce::TextureGroup> $getStoreCacheTextures() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::MinecraftGraphics> $getMinecraftGraphics() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IUIRepository> $getUIRepository() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> $getUserManager() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::TrialManager> $getTrialManager() const;

    MCAPI bool $wantToQuit() const;

    MCAPI bool $isPrimaryLevelCrossPlatformMultiplayer() const;

    MCAPI bool $isPrimaryLevelMultiplayer() const;

    MCAPI bool $isAdhocEnabled() const;

    MCAPI ::std::shared_ptr<::ActorAnimationGroup> $getActorAnimationGroup() const;

    MCAPI bool $isMarketplaceDisabled() const;

    MCAPI ::std::pair<::StoreErrorCodes, ::std::string> const $getMarketplaceDisabledReasonWithErrorCode() const;

    MCAPI void $linkToOffer(::std::string const& productId, bool allowWhileInGame);

    MCAPI void $linkToPage(::std::string const& pageId);

    MCAPI void $linkTo3PServerOffers(::std::string const& pageId, ::std::string const& creatorName);

    MCAPI void $navigateToMarketplaceInventoryScreen(::InventoryTabIndex tabIndex);

    MCAPI void $navigateToStoreHomeScreen();

    MCAPI void $navigateToCoinPurchaseScreen(int neededCoins, ::std::function<void(bool, int)> callback);

    MCAPI void $navigateToPurchaseOfferScreen(::StoreCatalogItem& item, ::StoreNavigationOrigin, bool const);

    MCAPI void $navigateToDressingRoomOfferScreen(::std::string const& offerId);

    MCAPI bool $navigateToProfileScreen(::std::string const&, bool const preventProgressScreen);

    MCAPI void $navigateToServersScreen(bool const calledFromHyperlink);

    MCAPI void $navigateToHowToPlayScreen(::std::string const& startTopic);

    MCAPI void $navigateToMarketplacePassPDPScreen(::MarketplacePassTabIndex tabIndex);

    MCAPI void $navigateToRealmsStoriesTransitionScreen(::Realms::World const& world);

    MCAPI void $tryPushLeaveGameScreen();

    MCAPI void $tryStartDayOneExperience();

    MCAPI bool $isReadyToRender() const;

    MCAPI void $onDimensionChangedEvent();

    MCAPI void $onGameEventNotification(::ui::GameEventNotification notification);

    MCAPI ::std::string $getTopScreenName() const;

    MCAPI void $setLeaveGameInProgressAsReadyToContinue();

    MCAPI void $stopDestroying();

    MCAPI void $onClientCreatedLevel(
        ::std::pair<::std::unique_ptr<::Level>, ::OwnerPtr<::EntityContext>> levelEntity,
        ::OwnerPtr<::EntityContext>                                          userEntity
    );

    MCAPI ::PlayerAuthentication& $getPlayerAuthentication();

    MCAPI void $createPlayerAuthentication();

    MCAPI void $createPlayerAuthentication(uint64 clientRandomId);

    MCAPI ::std::string $getPlatformId() const;

    MCAPI ::std::string $getPlatformOnlineId() const;

    MCAPI bool $useController() const;

    MCAPI bool $useTouchscreen() const;

    MCAPI bool $getMouseGrabbed() const;

    MCAPI bool $currentInputModeIsMouseAndKeyboard() const;

    MCAPI bool $allowPicking() const;

    MCAPI bool $isShowingMenu() const;

    MCAPI bool $isShowingPauseScreen() const;

    MCAPI bool $isShowingProgressScreen() const;

    MCAPI bool $isShowingWorldProgressScreen() const;

    MCAPI bool $isShowingRealmsProgressScreen() const;

    MCAPI bool $isShowingDeathScreen() const;

    MCAPI bool $isShowingServerForm() const;

    MCAPI bool $isScreenReplaceable() const;

    MCAPI bool $isInWorldAndNotShowingAnyMenuScreens() const;

    MCAPI bool $isWorldActive() const;

    MCAPI bool $isInRealm();

    MCAPI bool $readyForShutdown() const;

    MCAPI bool $isPrimaryClient() const;

    MCAPI bool $isEduMode() const;

    MCAPI bool $isGamepadCursorEnabled() const;

    MCAPI bool $isInControlCustomization() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Minecraft> $getServerData();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Minecraft const> $getServerData() const;

    MCAPI ::ClientLevel* $getLevel();

    MCAPI ::ClientLevel const* $getLevel() const;

    MCAPI bool $hasLevel() const;

    MCAPI bool $isPreGame() const;

    MCAPI bool $isInMultiplayerGame() const;

    MCAPI bool $isMultiPlayerClient() const;

    MCAPI ::IOptionRegistry& $getOptions();

    MCAPI ::IOptionRegistry const& $getOptions() const;

    MCAPI ::IReadWriteOptions const& $getReadWriteOptions() const;

    MCAPI ::std::shared_ptr<::OptionRegistry> $getOptionsPtr();

    MCAPI ::std::shared_ptr<::OptionRegistry const> const $getOptionsPtr() const;

    MCAPI ::std::shared_ptr<::Social::User> const& $getUser() const;

    MCAPI ::std::shared_ptr<::Settings::IRegistry> $getSettingsRegistry();

    MCAPI ::Option const& $getShowLearningPromptsOption() const;

    MCAPI ::Option& $getShowControlTipsOption();

    MCAPI ::Option& $getShowControlTipsOverrideOption();

    MCAPI double $getControlTipsTimeElapsed() const;

    MCAPI void $setControlTipsTimeElapsedStart();

    MCAPI ::GameRenderer& $getGameRenderer() const;

    MCAPI ::LevelRenderer* $getLevelRenderer() const;

    MCAPI ::LevelRendererCameraProxy* $getLevelRendererCameraProxy() const;

    MCAPI ::Bedrock::NonOwnerPointer<::CameraRegistry> $getCameraRegistry();

    MCAPI ::Bedrock::NonOwnerPointer<::CameraRegistry const> $getCameraRegistry() const;

    MCAPI ::Bedrock::NonOwnerPointer<::EntitySystems> $getCameraSystems();

    MCAPI ::LightTexture* $getLightTexture();

    MCAPI void $setupLevelRendering(::ClientLevel& level, ::WeakEntityRef cameraTargetEntity);

    MCAPI ::mce::ViewportInfo const& $getViewportInfo() const;

    MCAPI void $setViewportInfo(::mce::ViewportInfo const& viewportInfo);

    MCAPI ::Vec2 $getNormalizedViewportSize() const;

    MCAPI void $updateChunkRadius();

    MCAPI void $setUITexture(::mce::Texture* tex);

    MCAPI ::mce::Texture* $getUITexture();

    MCAPI void $setLevelTexture(::mce::Texture* tex);

    MCFOLD ::mce::Texture* $getLevelTexture();

    MCAPI void $setUICursorTexture(::mce::TexturePtr tex);

    MCAPI ::mce::TexturePtr $getUICursorTexture() const;

    MCAPI ::mce::Camera& $getCamera();

    MCAPI ::ShaderColor& $getShaderColor();

    MCAPI ::ShaderColor& $getDarkShaderColor();

    MCAPI void $clearGraphicsCache();

    MCAPI void $getNormalizedUICursorTransform(::MatrixStack::MatrixStackRef& matrix, float cursorHalfSizeTexels);

    MCAPI bool $shouldRenderUICursor() const;

    MCAPI bool $getRenderPlayerModel() const;

    MCAPI ::DeferredLighting& $getDeferredLighting();

    MCAPI float $getGuiScale() const;

    MCAPI ::Option const& $getGuiScaleOption() const;

    MCAPI int $getGuiScaleOffset() const;

    MCAPI void $setGuiScaleOffset(int guiScale);

    MCFOLD void $renderImGui(::ScreenContext& screenContext, bool drawMenuBar);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::GuiData> $getGuiData();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::GuiData const> $getGuiData() const;

    MCFOLD ::GuidedFlowManager& $getGuidedFlowManager();

    MCAPI ::PixelCalc const& $getDpadScale() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::DateManager const> $getDateManager() const;

    MCAPI void $addOverrideHoursToDateTime(uint const hoursToAdd);

    MCAPI ::ToastManager& $getToastManager();

    MCAPI ::ClipboardProxy<::ApplicationSignal::ClipboardCopy, ::ApplicationSignal::ClipboardPasteRequest>&
    $getClipboardManager();

    MCAPI ::AbstractScene* $getTopScene();

    MCAPI ::AbstractScene const* $getTopScene() const;

    MCAPI ::AbstractScene* $getActiveScene();

    MCAPI ::AbstractScene const* $getActiveScene() const;

    MCAPI ::SceneFactory& $getSceneFactory() const;

    MCAPI ::OreUI::SceneProvider& $getSceneProvider() const;

    MCAPI ::ui::ScreenTechStackSelector& $getScreenTechStackSelector();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> $getClientSceneStack() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> $getClientSceneStack();

    MCAPI ::OreUI::Router& $getClientUIRouter() const;

    MCAPI ::ISceneStack& $getMainSceneStackInterface();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> $getMainSceneStack();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> $getMainSceneStack() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> $getCurrentSceneStack() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> $getCurrentSceneStack();

    MCAPI ::OreUI::Router& $getCurrentUIRouter();

    MCAPI ::OreUI::Router const& $getCurrentUIRouter() const;

    MCAPI ::OreUI::ITelemetry& $getOreUITelemetry();

    MCAPI ::WeakRef<::OreUI::UIBlockThumbnailAtlasManager> $getOreUIBlockThumbnailAtlasManager() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> $prepareSceneFor(
        ::ui::SceneType const                                 sceneTypeToFind,
        ::std::function<::std::shared_ptr<::AbstractScene>()> createScreenCallback
    );

    MCAPI ::CachedScenes& $getCachedScenes();

    MCAPI ::std::string $getScreenName() const;

    MCAPI ::std::string $getScreenTelemetry() const;

    MCAPI ::ui::SceneType $getTopSceneType() const;

    MCAPI ::MobEffectsLayout& $getMobEffectsLayout();

    MCAPI ::std::string $emoticonifyText(::std::string const& text) const;

    MCAPI ::std::string $emoticonifyText(::std::string const& text, bool isGameTip);

    MCAPI void $onMobEffectsChange();

    MCAPI void $setUISizeAndScale(int w, int h, float forcedGuiScale);

    MCAPI void $forEachVisibleScreen(::brstd::function_ref<void(::AbstractScene&)> callback);

    MCAPI void $forEachScreen(::brstd::function_ref<bool(::AbstractScene&)> callback, bool topDown);

    MCAPI void $forEachScreenConst(::brstd::function_ref<bool(::AbstractScene const&)> callback, bool topDown) const;

    MCAPI bool $updateSceneStack();

    MCAPI void $forEachAlwaysAcceptInputScreen(
        ::std::function<void(::AbstractScene&)> callback,
        ::AbstractScene const*                  ignoreScreen
    );

    MCAPI void $forEachAlwaysAcceptInputScreenWithTop(::std::function<void(::AbstractScene&)> callback);

    MCAPI void $showPlayerProfile(::std::string const& xuid, ::std::string const& platformId);

    MCAPI bool $isInGameInputEnabled() const;

    MCAPI void $setInGameInputEnabled(bool isEnabled);

    MCAPI ::Vec2 $getSafeZoneScale() const;

    MCAPI void $verifySkinApproval(
        ::std::function<void(::std::string)> const& notApprovedCallback,
        ::std::function<void()> const&              approvedCallback
    ) const;

    MCAPI ::InputMode $getCurrentInputMode() const;

    MCAPI bool $isTouchGameplayAllowed() const;

    MCAPI ::Bedrock::NonOwnerPointer<::MinecraftInputHandler> $getMinecraftInput() const;

    MCAPI ::KeyboardManager& $getKeyboardManager();

    MCAPI void $setLastPointerLocation(float x, float y, float z);

    MCAPI void $clearTouchPointerLocations();

    MCAPI void $clearTouchPointerLocation(int id);

    MCAPI void $updateTouchPointerLocation(int id, float x, float y);

    MCAPI ::Vec3 $getLastPointerLocation();

    MCAPI ::Vec2 $getTouchPointerLocation(int id) const;

    MCAPI void $updateActionPointerId(int id);

    MCAPI int $getActionPointerId() const;

    MCAPI bool $shouldUseLastPointerLocationOnFocusChange();

    MCAPI bool $currentScreenShouldStealMouse();

    MCAPI ::BuildActionIntention& $getInProgressBAI() const;

    MCFOLD ::PacketSender& $getPacketSender();

    MCAPI ::ClientNetworkSystem& $getClientNetworkSystem();

    MCAPI ::ClientNetworkSystem const& $getClientNetworkSystem() const;

    MCAPI ::glm::vec2 $getGamepadCursorPosition() const;

    MCAPI void $updateControlOptionState(uint id, bool active);

    MCAPI void $clearActiveControlOptions();

    MCAPI ::std::set<uint> const& $getActiveControlOptions() const;

    MCAPI ::std::vector<::OptionID> $getActiveOptionIDs(::ControlOptionType controlOptionType) const;

    MCAPI void $setNumberOfActiveConfigs(int numberOfActiveConfigs);

    MCAPI int $getNumberOfActiveConfigs() const;

    MCAPI bool $isNoConfigSelected() const;

    MCAPI void $setNumberOfEnabledConfigs(int numberOfEnabledConfigs);

    MCAPI int $getNumberOfEnabledConfigs() const;

    MCAPI void $setWYSIWYGState(::WYSIWYGState wysiwygState);

    MCAPI ::WYSIWYGState $getWYSIWYGState() const;

    MCAPI void $setOtherConfigsExistInThisCategory(bool otherConfigsExistInThisCategory);

    MCAPI bool $getOtherConfigsExistInThisCategory() const;

    MCAPI void $setMoveTurnInput(::std::unique_ptr<::ClientMoveInputHandler> pClientMoveInputHandler);

    MCAPI void $setupPersistentControls(::InputMode currentMode);

    MCAPI void $resetPlayerMovement();

    MCAPI void $suspendPredictedMovement();

    MCAPI void $onClientInputInitComplete();

    MCAPI void $setClientInputHandler(::std::unique_ptr<::ClientInputHandler> pClientInputHandler);

    MCAPI ::ClientInputHandler* $getInput() const;

    MCAPI int $getControllerId() const;

    MCAPI bool $hasConnectedController() const;

    MCAPI ::SubClientId $getClientSubId() const;

    MCAPI void $setSuspendInput(bool suspendInput);

    MCAPI void $setSuspendDirectionalInput(bool suspendDirectionalInput);

    MCAPI void $setDisableInput(bool disableInput);

    MCAPI void $grabMouse();

    MCAPI void $releaseMouse();

    MCAPI void $refocusMouse(bool lostMouse);

    MCAPI void $setMouseType(::Bedrock::Input::PointerType type);

    MCAPI void $resetBai(int baiFlags);

    MCAPI void $clearInProgressBAI();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::SoundEngine> $getSoundEngine() const;

    MCAPI ::MusicManager const* $getMusicManager() const;

    MCAPI ::MusicManager* $getMusicManagerNonConst() const;

    MCAPI void $play(::std::string const& name, ::Vec3 const& pos, float volume, float pitch);

    MCAPI void $playUI(::std::string const& name, float volume, float pitch);

    MCAPI void $muteAudio();

    MCAPI void $unMuteAudio();

    MCAPI void $fadeOutMusic() const;

    MCAPI ::TaskGroup& $getTaskGroup();

    MCAPI void $onFullVanillaPackOnStack();

    MCAPI bool $isFullVanillaPackOnStack() const;

    MCAPI void $onPlayerLoaded(::Player& player);

    MCAPI void $setClientGameMode(::GameType gameType);

    MCAPI void $resetToDefaultGameMode();

    MCAPI ::IGameConnectionListener& $getGameConnectionListener();

    MCAPI void $connectToThirdPartyServer(::std::string const& ipAddress, int port);

    MCAPI void $startExternalNetworkWorld(
        ::Social::GameConnectionInfo connection,
        ::std::string const&         serverName,
        ::PlayerJoinWorldContext     context
    );

    MCAPI bool $isReadyToReconnect() const;

    MCAPI bool $checkForPiracy();

    MCAPI void $updateChatFilterStatus(::ProfanityContext& profanityContext);

    MCAPI void $updateControllerHandling();

    MCAPI void $onPlayerDestruction(::Player& player);

    MCAPI void $setBehaviorCommandCallback(::std::function<void(::std::string const&, ::BehaviorStatus)> callback);

    MCAPI void $setBehaviorCommandStatus(::std::string const& treeName, ::BehaviorStatus status);

    MCAPI void $setConnectGamepadScreenActive(bool active);

    MCAPI ::Bedrock::Threading::Async<::Core::PathBuffer<::std::string>>
    $requestScreenshot(::ScreenshotOptions& screenshotOptions);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::DevConsoleLogger> $getDevConsoleLogger() const;

    MCAPI ::std::shared_ptr<::FileDataRequest> $requestImageFromUrl(
        ::std::string const&                                                        imageUrl,
        ::std::function<void(::Bedrock::Http::Status, ::Core::Path const&, uint64)> callback
    );

    MCAPI void $setActiveFileStorageArea(::std::shared_ptr<::Core::FileStorageArea> storageArea);

    MCAPI void $onExtendDiskSpace(
        bool const                                      bSet,
        ::std::weak_ptr<::Core::FileStorageArea> const& storageAreaWeakPtr,
        uint64                                          freeSpace,
        ::std::function<void()>                         onHandledEventCallback
    );

    MCAPI void $onLowDiskSpace(bool const bSet, uint64 freeSpace);

    MCAPI void $onOutOfDiskSpace(bool const bSet, uint64 freeSpace);

    MCAPI void $onCriticalDiskError(bool const bSet, ::Core::LevelStorageState const& errorCode);

    MCAPI void $onLevelCorrupt();

    MCAPI void $onGameModeChanged();

    MCAPI void $onBeforeSimTick();

    MCAPI void $onTick(int nTick, int maxTick);

    MCAPI void $onInternetUpdate();

    MCAPI void $onGameSessionReset();

    MCAPI void $onLevelExit();

    MCFOLD void $onRequestResourceReload();

    MCAPI void $updateScreens();

    MCAPI void $initializeRenderResources();

    MCAPI void $postInitRenderResources();

    MCAPI void $onAppSuspended();

    MCAPI void $onAppResumed();

    MCAPI void $onActiveResourcePacksChanged(
        ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const& entityResourceDefGroup
    );

    MCAPI void $reloadEntityRenderers(
        ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const& actorResourceDefinitionGroup
    );

    MCAPI ::BlockTessellator& $getBlockTessellator();

    MCAPI ::BlockActorRenderDispatcher& $getBlockEntityRenderDispatcher();

    MCAPI ::std::shared_ptr<::ActorRenderDispatcher> $getEntityRenderDispatcher();

    MCAPI ::ActorBlockRenderer& $getEntityBlockRenderer();

    MCAPI ::ItemInHandRenderer* $getItemInHandRenderer();

    MCAPI ::ItemRenderer* $getItemRenderer();

    MCAPI ::HudIconActorRenderer* $getHudIconActorRenderer();

    MCAPI ::std::deque<::std::string>& $getSentMessageHistory();

    MCAPI ::std::deque<::std::string>& $getDevConsoleMessageHistory();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> $getProfanityContext() const;

    MCAPI void $initTTSClient(::std::shared_ptr<::TextToSpeechClient> textToSpeechClient);

    MCAPI ::std::shared_ptr<::TextToSpeechClient> $getTTSClient();

    MCAPI ::std::shared_ptr<::TextToSpeechClient const> $getTTSClient() const;

    MCAPI ::std::shared_ptr<::ITTSEventManager> $getTTSEventManager();

    MCAPI void $addTTSMessage(
        ::std::string const&     message,
        ::ProfanityFilterContext profanityFilterContext,
        bool                     interruptible,
        ::std::string const&     interruptibleId,
        bool                     required,
        bool                     disregardAppFocus
    );

    MCAPI void $initCommands();

    MCAPI uint $getUserId() const;

    MCAPI bool $isPrimaryUser() const;

    MCAPI double $getServerConnectionTime() const;

    MCAPI void $setServerPingTime(int pingTime);

    MCAPI int $getServerPingTime() const;

    MCAPI void $setDefaultPlayscreenTab(::PlayScreenDefaultTab defaultTab);

    MCAPI void $setClientInstanceState(::ClientInstanceState const& newstate);

    MCAPI void $setUIEventCoordinator(::Bedrock::UniqueOwnerPointer<::UIEventCoordinator>&& coordinator);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::UIEventCoordinator> $getUIEventCoordinator();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ClientInstanceEventCoordinator> $getEventCoordinator();

    MCAPI ::ClientNetworkEventCoordinator& $getClientNetworkEventCoordinator();

    MCAPI ::ClientScriptEventCoordinator& $getClientScriptEventCoordinator();

    MCAPI ::std::chrono::steady_clock::time_point $getNoBlockBreakUntil();

    MCAPI void $setNoBlockBreakUntil(::std::chrono::steady_clock::time_point timePoint);

    MCFOLD ::GameCallbacks& $getGameCallbacks();

    MCAPI ::GameModuleClient* $getGameModule();

    MCAPI ::ClientHitDetectCoordinator& $getHitEventCoordinator();

    MCAPI void $sendClientEnteredLevel();

    MCFOLD ::HitDetectSystem* $getHitDetectSystem();

    MCAPI bool $isPlaying() const;

    MCFOLD ::ClientInstanceState $getClientInstanceState() const;

    MCAPI ::LatencyGraphDisplay* $getLatencyGraphDisplay() const;

    MCAPI ::PlayerCapabilities::IClientController const& $getClientCapabilities() const;

    MCAPI ::cg::math::Rect<float> $calculateViewPortModifiers(
        ::SubClientId const          clientId,
        uint64 const                 clientCount,
        ::SplitScreenDirection const splitScreenConfiguration
    ) const;

    MCAPI ::std::weak_ptr<::IClientInstance> $getWeakPtrToThis();

    MCAPI ::ClientRequirementVerifier const& $getClientRequirementVerifier() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FogDefinitionRegistry const> $getFogDefinitionRegistry() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FogDefinitionRegistry> $getFogDefinitionRegistry();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FogManager const> $getFogManager() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FogManager> $getFogManager();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ScreenLoadTimeTracker> $getScreenLoadTimeTracker();

    MCAPI ::ItemRegistryRef $getItemRegistry() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::DisconnectionRequestHandler> $getDisconnectionRequestHandler() const;

    MCAPI float $getRemoteServerTimeMs() const;

    MCAPI void $setRemoteServerTimeMs(float time);

    MCAPI float $getRemoteServerNetworkTimeMs() const;

    MCAPI void $setRemoteServerNetworkTimeMs(float time);

    MCAPI ::Bedrock::NonOwnerPointer<::ClientScriptManager> $getClientScriptManager();

    MCAPI ::Scripting::ScriptEngine* $getScriptingEngine();

    MCAPI ::Bedrock::NonOwnerPointer<::WorldTransferAgent> const $getWorldTransferAgent() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::PlayerReportHandler> $getPlayerReportHandler();

    MCAPI ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> $getLinkedAssetValidator();

    MCAPI void $flagDisconnectionAndNotify(::Connection::DisconnectFailReason disconnectReason);

    MCAPI void $flagDisconnectionAndNotifyWithParams(::DisconnectionScreenParams const& params);

    MCAPI void $disconnectSubClient(::Connection::DisconnectFailReason disconnectReason);

    MCAPI void $setClientUpdateAndRenderThrottling(bool enabled, int threshold, float scalar);

    MCAPI bool $isClientUpdateAndRenderThrottlingEnabled() const;

    MCAPI int $getClientUpdateAndRenderThrottlingThreshold() const;

    MCAPI float $getClientUpdateAndRenderThrottlingScalar() const;

    MCAPI bool $isUserBanned() const;

    MCAPI bool $isEligibleForPauseFeature() const;

    MCAPI void $setupPauseManagers();

    MCAPI bool $requestInGamePause(bool status);

    MCAPI void $openContentLogHistory();

    MCAPI double $getGameUpdateDurationInSeconds() const;

    MCAPI ::std::optional<::ConnectionContextInfo> $getConnectionContextInfo() const;
    // NOLINTEND
#else // @header-generator platform
    struct ClientDestroyBlockState {};
#endif // @header-generator platform
#endif // @header-generator platform
};
