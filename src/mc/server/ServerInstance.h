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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform
#include "mc/server/ServerGraphicsSettings.h"
#include "mc/server/ServerInstanceInitArguments.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/server_instance_messenger/MessageAction.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
class ItemRegistryRef;
#else // @header-generator platform
#endif // @header-generator platform
class LevelData;
class LevelStorage;
class LinkedAssetValidator;
class LocalProfilerControlBroker;
class LoopbackPacketSender;
class Minecraft;
#if defined(LL_PLAT_A) // @header-generator platform
class PacketSender;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
struct NetworkSystemToggles;
#else // @header-generator platform
#endif // @header-generator platform
struct ServerInstanceArguments;
struct ServerInstanceInitArguments;
struct ServerNetworkHandlerDependencies;
struct ServerPerformanceData;
#if defined(LL_PLAT_A) // @header-generator platform
struct TextProcessorInitParams;
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class FileStorageArea; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Editor { class IEditorManager; }
#endif // @header-generator platform
namespace Scripting { class RegistryManager; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class ScriptEngine; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ServerInitialization { class IServerInitializer; }
namespace ServerInitialization { struct ServerInitResult; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ServerInstanceMessenger { class IMessageConsumer; }
namespace ServerInstanceMessenger { class IMessageProducer; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    struct NetworkToggleOptions;
    struct HostMultiplayerOps;
#else // @header-generator platform
#endif // @header-generator platform
    struct CreateServerLevelOps;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct HostMultiplayerOps;
    struct NetworkToggleOptions;
#endif // @header-generator platform
    // clang-format on

    // ServerInstance inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum InstanceState : uint {
#else // @header-generator platform
    enum class InstanceState : int {
#endif // @header-generator platform
        Running          = 0,
        Suspended        = 1,
        WaitingLeaveGame = 2,
        Stopped          = 3,
        NotStarted       = 4,
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    };

    struct CreateServerLevelOps {
    public:
        // CreateServerLevelOps inner types define
        using CreateDimensionFactoryCallback =
            ::brstd::move_only_function<::std::unique_ptr<::DimensionFactoryAndManager>(
                ::Bedrock::NotNullNonOwnerPtr<::ILevel>,
                ::br::worldgen::StructureSetRegistry&
            ) const>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ServerInstance&>      mInstance;
        ::ll::TypedStorage<1, 1, bool>                   mServerAuthSound;
        ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>  mEventing;
        ::ll::TypedStorage<8, 8, ::ResourcePackManager&> mClientResourcePackManager;
        ::ll::TypedStorage<
            8,
            64,
            ::brstd::move_only_function<::std::unique_ptr<::DimensionFactoryAndManager>(
                ::Bedrock::NotNullNonOwnerPtr<::ILevel>,
                ::br::worldgen::StructureSetRegistry&
            ) const>>
            mCreateDimensionFactoryAndManager;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateServerLevelOps& operator=(CreateServerLevelOps const&);
        CreateServerLevelOps(CreateServerLevelOps const&);
        CreateServerLevelOps();
    };

    struct HostMultiplayerOps {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ServerInstance&>                    mInstance;
        ::ll::TypedStorage<8, 8, ::NetworkServerConfig&&>              mNetworkServerConfig;
        ::ll::TypedStorage<8, 48, ::KeyManager>                        mHostPublicKey;
        ::ll::TypedStorage<4, 4, int>                                  mMaxChunkRadius;
        ::ll::TypedStorage<1, 1, bool>                                 mShouldAnnounce;
        ::ll::TypedStorage<8, 8, ::ServerNetworkHandlerDependencies&&> mServerNetworkOptions;
        // NOLINTEND

    public:
        // prevent constructor by default
        HostMultiplayerOps& operator=(HostMultiplayerOps const&);
        HostMultiplayerOps(HostMultiplayerOps const&);
        HostMultiplayerOps();
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                          mLastSyncTime;
    ::ll::TypedStorage<1, 1, bool const>                                                       mIsDedicatedServer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Minecraft>>                                   mMinecraft;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ServerNetworkSystem>>                        mNetwork;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LoopbackPacketSender>>                        mPacketSender;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Timer>>                                       mSimTimer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Timer>>                                       mRealTimer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Scheduler>>                                   mScheduler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::EducationOptions>>                            mEducationOptions;
    ::ll::TypedStorage<8, 8, ::LevelStorage*>                                                  mStorage;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                              mInUpdate;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>                                               mWriteRefCounter;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                              mThreadShouldJoin;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                     mMutexDestruction;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ServerInstanceEventCoordinator>> mEventCoordinator;
    ::ll::TypedStorage<4, 4, ::std::atomic<::ServerInstance::InstanceState>>                   mInstanceState;
    ::ll::TypedStorage<8, 16, ::std::thread>                                                   mServerInstanceThread;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                     mResumeMutex;
    ::ll::TypedStorage<8, 72, ::std::condition_variable>                                       mResumeSignal;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Scripting::RegistryManager>>                  mScriptRegistryManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ServerScriptManager>>                         mServerScriptManager;
    ::ll::TypedStorage<8, 64, ::std::function<void(char const*)>> mScriptWatchdogCriticalErrorCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Connection::DisconnectFailReason, char const*)>>
                                                                                      mUnrecoverableErrorCallback;
    ::ll::TypedStorage<1, 1, bool>                                                    mHandledLevelCorruption;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TextFilteringProcessor>>             mTextFilteringProcessor;
    ::ll::TypedStorage<8, 8, ::std::chrono::microseconds>                             mWakeupInterval;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mLevelId;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mServerName;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WorldSessionEndPoint>>               mWorldSessionEndPoint;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Core::FileStorageArea>>             mStorageAreaForLevel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ItemRegistry>>                      mServerItemRegistry;
    ::ll::TypedStorage<1, 1, bool>                                                    mEnableItemStackNetManager;
    ::ll::TypedStorage<1, 1, bool>                                                    mEnableRealmsStories;
    ::ll::TypedStorage<1, 1, bool>                                                    mbFlaggedForEarlyDestruction;
    ::ll::TypedStorage<8, 8, ::ServiceRegistrationToken<::ServerInstance>>            mServiceRegistrationToken;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasScheduledLeaveGame;
    ::ll::TypedStorage<1, 1, bool>                                                    mCriticalDiskErrorTelemetrySent;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Editor::IEditorManager>>             mEditorManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::CDNConfig>>                mCDNConfig;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ServerTextSettings>>       mServerTextSettings;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::cereal::ReflectionCtx>> mCerealContext;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LinkedAssetValidator>>               mLinkedAssetValidator;
    ::ll::TypedStorage<1, 1, ::ServerGraphicsSettings>                                mGraphicsSettings;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ServerInstanceMessenger::IMessenger>>> mMessenger;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<bool() const>>    mShouldDisableNetworkOnSuspend;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChatLoggingEventListener>> mChatLoggingEventListener;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueOwnerPointer<::LocalProfilerControlBroker>>  mLocalProfilerControlBroker;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ServerInitialization::IServerInitializer>> mInitializer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptDiagnostics>>                        mScriptDiagnostics;
    ::ll::TypedStorage<8, 8, ::ServiceRegistrationToken<::ScriptDiagnostics>>               mScriptDiagnosticsToken;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ServerPerformanceData>>                    mServerPerformanceData;
    ::ll::TypedStorage<8, 8, ::ServiceRegistrationToken<::ServerPerformanceData>>
        mServerPerformanceDataRegistrationToken;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ServerInstance();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ServerInstance();
#else // @header-generator platform
    virtual ~ServerInstance() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onLowMemory(::LowMemorySeverity);
#else // @header-generator platform
    virtual void onLowMemory(::LowMemorySeverity) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onLevelCorrupt();
#else // @header-generator platform
    virtual void onLevelCorrupt() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onGameModeChanged();
#else // @header-generator platform
    virtual void onGameModeChanged() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onTick(int, int);
#else // @header-generator platform
    virtual void onTick(int nTick, int maxTick) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onInternetUpdate();
#else // @header-generator platform
    virtual void onInternetUpdate() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onGameSessionReset();
#else // @header-generator platform
    virtual void onGameSessionReset() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onLevelExit();
#else // @header-generator platform
    virtual void onLevelExit() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onRequestResourceReload();
#else // @header-generator platform
    virtual void onRequestResourceReload() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onLowDiskSpace(bool const, ulong);
#else // @header-generator platform
    virtual void onLowDiskSpace(bool const bSet, uint64) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onOutOfDiskSpace(bool const, ulong);
#else // @header-generator platform
    virtual void onOutOfDiskSpace(bool const bSet, uint64) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onCriticalDiskError(bool const, ::Core::LevelStorageState const&);
#else // @header-generator platform
    virtual void onCriticalDiskError(bool const bSet, ::Core::LevelStorageState const& errorCode) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onAppSuspended();
#else // @header-generator platform
    virtual void onAppSuspended() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onAppResumed();
#else // @header-generator platform
    virtual void onAppResumed() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateScreens();
#else // @header-generator platform
    virtual void updateScreens() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ServerInstance(::ServerInstanceArguments&&);
#else // @header-generator platform
    MCAPI explicit ServerInstance(::ServerInstanceArguments&& args);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _resetServerScriptManager();
#else // @header-generator platform
    MCAPI void _resetServerScriptManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _useClientSideChunkGeneration(::LevelData*) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void finishLoadingLinkedAssets(::ResourcePackManager& rpm);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool enableItemStackNetManager() const;
#else // @header-generator platform
    MCAPI ::Bedrock::NonOwnerPointer<::Editor::IEditorManager> getEditorManager() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void finishLoadingLinkedAssets(::ResourcePackManager&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::string getLevelId() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<CDNConfig> getCDNConfig() const;
#else // @header-generator platform
    MCAPI ::ServerInitialization::ServerInitResult initializeServer(::ServerInstanceInitArguments&& args);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<Editor::IEditorManager> getEditorManager() const;
#else // @header-generator platform
    MCAPI void leaveGameSync();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getLevelId() const;
#else // @header-generator platform
    MCAPI void onCriticalScriptError(::Connection::DisconnectFailReason clientReason, char const* logMessage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<LocalProfilerControlBroker> getLocalProfilerControlBroker() const;
#else // @header-generator platform
    MCAPI void queueForServerThread(::std::function<void()> command);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ServerScriptManager* getScriptManager();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool requestInGamePause(bool status);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ServerGraphicsSettings const& getServerGraphicsSettings() const;
#else // @header-generator platform
    MCAPI void startLeaveGame();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void startServerThread();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::brstd::move_only_function<bool(ServerInstanceInitArguments::HostMultiplayerArguments&&) const>
    createHostMultiplayerCallback(::ServerInstance::HostMultiplayerOps&&);
#else // @header-generator platform
    MCAPI static bool _useClientSideChunkGeneration(::LevelData* levelData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::NetworkSystemToggles createNetworkToggles(::ServerInstance::NetworkToggleOptions const&);
#else // @header-generator platform
    MCAPI static ::brstd::move_only_function<bool(::ServerInstanceInitArguments::HostMultiplayerArguments&&) const>
    createHostMultiplayerCallback(::ServerInstance::HostMultiplayerOps&& ops);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::brstd::move_only_function<
        std::unique_ptr<ServerLevel>(ServerInstanceInitArguments::CreateLevelArguments&&) const>
    createServerLevelCallback(::ServerInstance::CreateServerLevelOps&&);
#else // @header-generator platform
    MCAPI static ::brstd::move_only_function<
        ::std::unique_ptr<::ServerLevel>(::ServerInstanceInitArguments::CreateLevelArguments&&) const>
    createServerLevelCallback(::ServerInstance::CreateServerLevelOps&& ops);

#ifdef LL_PLAT_S
    MCAPI static bool forceOffClientChunkGeneration(::LevelData& levelData);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& ASSET_EXTRACTION_ERROR();
#else // @header-generator platform
    MCAPI static ::std::string const& ASSET_EXTRACTION_ERROR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& ENTITY_REGISTRY_CREATION_ERROR();
#else // @header-generator platform
    MCAPI static ::std::string const& ENTITY_REGISTRY_CREATION_ERROR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& FINAL_LEVEL_STORAGE_STATE_ERROR();
#else // @header-generator platform
    MCAPI static ::std::string const& FINAL_LEVEL_STORAGE_STATE_ERROR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& HOST_MULTIPLAYER_ERROR();
#else // @header-generator platform
    MCAPI static ::std::string const& HOST_MULTIPLAYER_ERROR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& INITIAL_LEVEL_STORAGE_STATE_ERROR();
#else // @header-generator platform
    MCAPI static ::std::string const& INITIAL_LEVEL_STORAGE_STATE_ERROR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& LEVEL_STORAGE_CREATION_ERROR();
#else // @header-generator platform
    MCAPI static ::std::string const& LEVEL_STORAGE_CREATION_ERROR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& PACK_SOURCE_LOADING_ERROR();
#else // @header-generator platform
    MCAPI static ::std::string const& PACK_SOURCE_LOADING_ERROR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& POST_INIT_ERROR();

    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1000000000>> const& SERVER_MAX_DELAY_BEFORE_SLOWDOWN();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::string const& POST_INIT_ERROR();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ServerInstanceArguments&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::ServerInstanceArguments&& args);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onLowMemory(::LowMemorySeverity);
#else // @header-generator platform
    MCAPI void $onLowMemory(::LowMemorySeverity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onLevelCorrupt();
#else // @header-generator platform
    MCAPI void $onLevelCorrupt();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onGameModeChanged();
#else // @header-generator platform
    MCFOLD void $onGameModeChanged();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onTick(int, int);
#else // @header-generator platform
    MCFOLD void $onTick(int nTick, int maxTick);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onInternetUpdate();
#else // @header-generator platform
    MCFOLD void $onInternetUpdate();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onGameSessionReset();
#else // @header-generator platform
    MCFOLD void $onGameSessionReset();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onLevelExit();
#else // @header-generator platform
    MCFOLD void $onLevelExit();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onRequestResourceReload();
#else // @header-generator platform
    MCAPI void $onRequestResourceReload();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onLowDiskSpace(bool const, ulong);
#else // @header-generator platform
    MCAPI void $onLowDiskSpace(bool const bSet, uint64);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onOutOfDiskSpace(bool const, ulong);
#else // @header-generator platform
    MCAPI void $onOutOfDiskSpace(bool const bSet, uint64);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onCriticalDiskError(bool const, ::Core::LevelStorageState const&);
#else // @header-generator platform
    MCAPI void $onCriticalDiskError(bool const bSet, ::Core::LevelStorageState const& errorCode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onAppSuspended();
#else // @header-generator platform
    MCAPI void $onAppSuspended();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onAppResumed();
#else // @header-generator platform
    MCAPI void $onAppResumed();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updateScreens();
    // NOLINTEND
#else // @header-generator platform
    MCFOLD void $updateScreens();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
