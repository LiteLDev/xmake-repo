#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/application/LowMemorySeverity.h"
#include "mc/deps/certificates/KeyManager.h"
#include "mc/deps/core/file/LevelStorageState.h"
#include "mc/deps/core/file/StorageAreaStateListener.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ServiceRegistrationToken.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/server/ServerGraphicsSettings.h"
#include "mc/server/ServerInstanceInitArguments.h"
#include "mc/server/server_instance_messenger/MessageAction.h"
#include "mc/world/GameCallbacks.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class CDNConfig;
class ChatLoggingEventListener;
class EducationOptions;
class ILevel;
class IMinecraftEventing;
class ItemRegistry;
class ItemRegistryRef;
class LevelData;
class LevelStorage;
class LinkedAssetValidator;
class LocalProfilerControlBroker;
class LoopbackPacketSender;
class Minecraft;
class PacketSender;
class ResourcePackManager;
class Scheduler;
class ScriptDiagnostics;
class ServerInstanceEventCoordinator;
class ServerLevel;
class ServerNetworkSystem;
class ServerScriptManager;
class ServerTextSettings;
class TextFilteringProcessor;
class Timer;
class WorldSessionEndPoint;
struct ConnectionDefinition;
struct DimensionFactoryAndManager;
struct NetworkServerConfig;
struct NetworkSystemToggles;
struct ServerInstanceArguments;
struct ServerInstanceInitArguments;
struct ServerNetworkHandlerDependencies;
struct ServerPerformanceData;
struct TextProcessorInitParams;
namespace Core { class FileStorageArea; }
namespace Scripting { class RegistryManager; }
namespace Scripting { class ScriptEngine; }
namespace ServerInitialization { class IServerInitializer; }
namespace ServerInitialization { struct ServerInitResult; }
namespace ServerInstanceMessenger { class IMessageConsumer; }
namespace ServerInstanceMessenger { class IMessageProducer; }
namespace ServerInstanceMessenger { class IMessenger; }
namespace br::worldgen { class StructureSetRegistry; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ServerInstance : public ::Bedrock::EnableNonOwnerReferences,
                       public ::AppPlatformListener,
                       public ::GameCallbacks,
                       public ::Core::StorageAreaStateListener {
public:
    // ServerInstance inner types declare
    // clang-format off
    struct NetworkToggleOptions;
    struct HostMultiplayerOps;
    struct CreateServerLevelOps;
    // clang-format on

    // ServerInstance inner types define
    enum InstanceState : uint {
        Running          = 0,
        Suspended        = 1,
        WaitingLeaveGame = 2,
        Stopped          = 3,
        NotStarted       = 4,
    };

    struct NetworkToggleOptions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::AppPlatform const&>          mPlatform;
        ::ll::TypedStorage<1, 1, bool>                          mDisableLanSignaling;
        ::ll::TypedStorage<1, 1, bool>                          mIsServerVisibleToLanDiscovery;
        ::ll::TypedStorage<1, 1, bool>                          mEnablePacketRateLimiting;
        ::ll::TypedStorage<8, 8, ::ConnectionDefinition const&> mConnectionDefinition;
        // NOLINTEND

    public:
        // prevent constructor by default
        NetworkToggleOptions& operator=(NetworkToggleOptions const&);
        NetworkToggleOptions(NetworkToggleOptions const&);
        NetworkToggleOptions();
    };

    struct HostMultiplayerOps {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ServerInstance&>                    mInstance;
        ::ll::TypedStorage<8, 8, ::NetworkServerConfig&&>              mNetworkServerConfig;
        ::ll::TypedStorage<8, 40, ::KeyManager>                        mHostPublicKey;
        ::ll::TypedStorage<4, 4, int>                                  mMaxChunkRadius;
        ::ll::TypedStorage<1, 1, bool>                                 mShouldAnnounce;
        ::ll::TypedStorage<8, 8, ::ServerNetworkHandlerDependencies&&> mServerNetworkOptions;
        // NOLINTEND

    public:
        // prevent constructor by default
        HostMultiplayerOps& operator=(HostMultiplayerOps const&);
        HostMultiplayerOps(HostMultiplayerOps const&);
        HostMultiplayerOps();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~HostMultiplayerOps();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct CreateServerLevelOps {
    public:
        // CreateServerLevelOps inner types define
        using CreateDimensionFactoryCallback = ::brstd::move_only_function<std::unique_ptr<DimensionFactoryAndManager>(
            gsl::not_null<Bedrock::NonOwnerPointer<ILevel>>,
            br::worldgen::StructureSetRegistry&
        ) const>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ServerInstance&>      mInstance;
        ::ll::TypedStorage<1, 1, bool>                   mServerAuthSound;
        ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>  mEventing;
        ::ll::TypedStorage<8, 8, ::ResourcePackManager&> mClientResourcePackManager;
        ::ll::UntypedStorage<8, 64>                      mCreateDimensionFactoryAndManager;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateServerLevelOps& operator=(CreateServerLevelOps const&);
        CreateServerLevelOps(CreateServerLevelOps const&);
        CreateServerLevelOps();
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastSyncTime;
    ::ll::TypedStorage<1, 1, bool const> mIsDedicatedServer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Minecraft>> mMinecraft;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ServerNetworkSystem>> mNetwork;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LoopbackPacketSender>> mPacketSender;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Timer>> mSimTimer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Timer>> mRealTimer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scheduler>> mScheduler;
    ::ll::TypedStorage<8, 8, std::unique_ptr<EducationOptions>> mEducationOptions;
    ::ll::TypedStorage<8, 8, ::LevelStorage*> mStorage;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mInUpdate;
    ::ll::TypedStorage<4, 4, std::atomic<int>> mWriteRefCounter;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mThreadShouldJoin;
    ::ll::TypedStorage<4, 40, std::mutex> mMutexDestruction;
    ::ll::UntypedStorage<8, 24> mEventCoordinator;
    ::ll::TypedStorage<4, 4, std::atomic<ServerInstance::InstanceState>> mInstanceState;
    ::ll::TypedStorage<8, 8, std::thread> mServerInstanceThread;
    ::ll::TypedStorage<4, 40, std::mutex> mResumeMutex;
    ::ll::TypedStorage<4, 48, std::condition_variable> mResumeSignal;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scripting::RegistryManager>> mScriptRegistryManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ServerScriptManager>> mServerScriptManager;
    ::ll::UntypedStorage<8, 48> mScriptWatchdogCriticalErrorCallback;
    ::ll::UntypedStorage<8, 48> mUnrecoverableErrorCallback;
    ::ll::TypedStorage<1, 1, bool> mHandledLevelCorruption;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TextFilteringProcessor>> mTextFilteringProcessor;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000>>> mWakeupInterval;
    ::ll::TypedStorage<8, 24, std::string> mLevelId;
    ::ll::TypedStorage<8, 24, std::string> mServerName;
    ::ll::TypedStorage<8, 8, std::unique_ptr<WorldSessionEndPoint>> mWorldSessionEndPoint;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FileStorageArea>> mStorageAreaForLevel;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ItemRegistry>> mServerItemRegistry;
    ::ll::TypedStorage<1, 1, bool> mEnableItemStackNetManager;
    ::ll::TypedStorage<1, 1, bool> mEnableRealmsStories;
    ::ll::TypedStorage<1, 1, bool> mbFlaggedForEarlyDestruction;
    ::ll::UntypedStorage<8, 8> mServiceRegistrationToken;
    ::ll::TypedStorage<1, 1, bool> mHasScheduledLeaveGame;
    ::ll::TypedStorage<1, 1, bool> mCriticalDiskErrorTelemetrySent;
    ::ll::UntypedStorage<8, 8> mEditorManager;
    ::ll::UntypedStorage<8, 24> mCDNConfig;
    ::ll::UntypedStorage<8, 24> mServerTextSettings;
    ::ll::UntypedStorage<8, 24> mCerealContext;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LinkedAssetValidator>> mLinkedAssetValidator;
    ::ll::TypedStorage<1, 1, ::ServerGraphicsSettings> mGraphicsSettings;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<ServerInstanceMessenger::IMessenger>>> mMessenger;
    ::ll::UntypedStorage<8, 64> mShouldDisableNetworkOnSuspend;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChatLoggingEventListener>> mChatLoggingEventListener;
    ::ll::UntypedStorage<8, 16> mLocalProfilerControlBroker;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ServerInitialization::IServerInitializer>> mInitializer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptDiagnostics>> mScriptDiagnostics;
    ::ll::UntypedStorage<8, 8> mScriptDiagnosticsToken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ServerPerformanceData>> mServerPerformanceData;
    ::ll::UntypedStorage<8, 8> mServerPerformanceDataRegistrationToken;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ServerInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerInstance();

    virtual void onLowMemory(::LowMemorySeverity);

    virtual void onLevelCorrupt();

    virtual void onGameModeChanged();

    virtual void onTick(int, int);

    virtual void onInternetUpdate();

    virtual void onGameSessionReset();

    virtual void onLevelExit();

    virtual void onRequestResourceReload();

    virtual void onLowDiskSpace(bool const, ulong);

    virtual void onOutOfDiskSpace(bool const, ulong);

    virtual void onCriticalDiskError(bool const, ::Core::LevelStorageState const&);

    virtual void onAppSuspended();

    virtual void onAppResumed();

    virtual void updateScreens();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ServerInstance(::ServerInstanceArguments&&);

    MCNAPI void _resetServerScriptManager();

    MCNAPI bool _useClientSideChunkGeneration(::LevelData*) const;

    MCNAPI bool enableItemStackNetManager() const;

    MCNAPI void finishLoadingLinkedAssets(::ResourcePackManager&);

    MCNAPI ::Bedrock::NonOwnerPointer<CDNConfig> getCDNConfig() const;

    MCNAPI ::Bedrock::NonOwnerPointer<Editor::IEditorManager> getEditorManager() const;

    MCNAPI std::string getLevelId() const;

    MCNAPI ::Bedrock::NonOwnerPointer<LocalProfilerControlBroker> getLocalProfilerControlBroker() const;

    MCNAPI ::ServerScriptManager* getScriptManager();

    MCNAPI ::ServerGraphicsSettings const& getServerGraphicsSettings() const;

    MCNAPI ::ItemRegistryRef getServerItemRegistry() const;

    MCNAPI ::Bedrock::NonOwnerPointer<ServerTextSettings> getServerTextSettings() const;

    MCNAPI ::ServerInitialization::ServerInitResult initializeServer(::ServerInstanceInitArguments&&);

    MCNAPI bool isLeaveGameDone() const;

    MCNAPI bool isRealmsStoriesEnabled() const;

    MCNAPI void leaveGameSync();

    MCNAPI void onCriticalScriptError(::Connection::DisconnectFailReason, char const*);

    MCNAPI void prepForEarlyDestruction();

    MCNAPI void queueForServerThread(std::function<void()>);

    MCNAPI bool requestInGamePause(bool);

    MCNAPI void resume();

    MCNAPI void startLeaveGame();

    MCNAPI void startServerThread();

    MCNAPI void suspend();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::brstd::move_only_function<bool(ServerInstanceInitArguments::HostMultiplayerArguments&&) const>
    createHostMultiplayerCallback(::ServerInstance::HostMultiplayerOps&&);

    MCNAPI static ::NetworkSystemToggles createNetworkToggles(::ServerInstance::NetworkToggleOptions const&);

    MCNAPI static ::brstd::move_only_function<
        std::unique_ptr<ServerLevel>(ServerInstanceInitArguments::CreateLevelArguments&&) const>
    createServerLevelCallback(::ServerInstance::CreateServerLevelOps&&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& ASSET_EXTRACTION_ERROR();

    MCNAPI static std::string const& ENTITY_REGISTRY_CREATION_ERROR();

    MCNAPI static std::string const& FINAL_LEVEL_STORAGE_STATE_ERROR();

    MCNAPI static std::string const& HOST_MULTIPLAYER_ERROR();

    MCNAPI static std::string const& INITIAL_LEVEL_STORAGE_STATE_ERROR();

    MCNAPI static std::string const& LEVEL_STORAGE_CREATION_ERROR();

    MCNAPI static std::string const& PACK_SOURCE_LOADING_ERROR();

    MCNAPI static std::string const& POST_INIT_ERROR();

    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1000000000>> const& SERVER_MAX_DELAY_BEFORE_SLOWDOWN();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerInstanceArguments&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onLowMemory(::LowMemorySeverity);

    MCNAPI void $onLevelCorrupt();

    MCNAPI void $onGameModeChanged();

    MCNAPI void $onTick(int, int);

    MCNAPI void $onInternetUpdate();

    MCNAPI void $onGameSessionReset();

    MCNAPI void $onLevelExit();

    MCNAPI void $onRequestResourceReload();

    MCNAPI void $onLowDiskSpace(bool const, ulong);

    MCNAPI void $onOutOfDiskSpace(bool const, ulong);

    MCNAPI void $onCriticalDiskError(bool const, ::Core::LevelStorageState const&);

    MCNAPI void $onAppSuspended();

    MCNAPI void $onAppResumed();

    MCNAPI void $updateScreens();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
