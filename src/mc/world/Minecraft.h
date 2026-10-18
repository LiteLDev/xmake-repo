#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/gamerefs_entity/GameRefsEntity.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/optional_ref.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/ecs/gamerefs_entity/IEntityRegistryOwner.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/network/ClientOrServerNetworkSystemRef.h"
#endif // @header-generator platform
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/world/MinecraftArguments.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/GameType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ClientNetworkSystem;
class ClientOrServerNetworkSystemRef;
#else // @header-generator platform
#endif // @header-generator platform
class DefaultCommandsContextProvider;
class EntityContext;
class EntityRegistry;
class EntitySystems;
class Experiments;
class FileArchiver;
class GameCallbacks;
class GameModuleServer;
class GameSession;
class GameTestLevelListener;
class IMinecraftEventing;
class ITickingSystem;
class KeyManager;
class Level;
class MinecraftCommands;
class MinecraftGameTest;
class MinecraftServiceKeyManager;
class NetEventCallback;
class NetworkIdentifier;
#if defined(LL_PLAT_A) // @header-generator platform
class NetworkStatistics;
#else // @header-generator platform
#endif // @header-generator platform
class PacketSender;
class PermissionsFile;
class PrivateKeyManager;
class ResourcePackManager;
class Scheduler;
class ScriptPackSettingsCache;
#if defined(LL_PLAT_A) // @header-generator platform
class ServerMetrics;
#else // @header-generator platform
#endif // @header-generator platform
class ServerNetworkHandler;
#if defined(LL_PLAT_A) // @header-generator platform
class ServerNetworkSystem;
#else // @header-generator platform
#endif // @header-generator platform
class StructureManager;
class TextFilteringProcessor;
class Timer;
struct ConnectionDefinition;
struct MinecraftArguments;
struct NetworkServerConfig;
struct PackIdVersion;
struct ServerNetworkHandlerDependencies;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ServerMetrics;
#endif // @header-generator platform
// clang-format on

class Minecraft : public ::IEntityRegistryOwner {
public:
    // Minecraft inner types declare
    // clang-format off
    struct Impl;
    // clang-format on

    // Minecraft inner types define
    struct Impl {};

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::GameCallbacks&>                                   mGameCallbacks;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                              mEventing;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ResourcePackManager>>               mResourceLoader;
    ::ll::TypedStorage<8, 8, std::unique_ptr<StructureManager>>                  mStructureManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<GameModuleServer>>                 mGameModuleServer;
    ::ll::TypedStorage<8, 8, ::PermissionsFile*>                                 mPermissionsFile;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PrivateKeyManager>>                 mServerKeys;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MinecraftServiceKeyManager>>       mMinecraftServiceKeys;
    ::ll::TypedStorage<8, 24, std::string const>                                 mSaveGamePath;
    ::ll::TypedStorage<8, 8, ::ServerMetrics*>                                   mServerMetrics;
    ::ll::TypedStorage<1, 1, bool const>                                         mIsDedicatedServer;
    ::ll::TypedStorage<1, 1, bool>                                               mCorruptionDetected;
    ::ll::TypedStorage<1, 1, bool>                                               mFireOnLevelCorrupt;
    ::ll::TypedStorage<8, 8, double>                                             mFrameDuration;
    ::ll::TypedStorage<8, 8, double>                                             mLastFrameStart;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mMaxPlayerIdleTime;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DefaultCommandsContextProvider>>    mDefaultCommandsContextProvider;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MinecraftCommands>>                 mCommands;
    ::ll::TypedStorage<8, 8, std::unique_ptr<GameSession>>                       mGameSession;
    ::ll::TypedStorage<8, 8, std::unique_ptr<GameTestLevelListener>>             mGameTestLevelListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MinecraftGameTest>>                 mGameTest;
    ::ll::TypedStorage<8, 8, ::Timer&>                                           mSimTimer;
    ::ll::TypedStorage<8, 8, ::Timer&>                                           mRealTimer;
    ::ll::UntypedStorage<8, 16>                                                  mNetwork;
    ::ll::TypedStorage<8, 8, ::PacketSender&>                                    mPacketSender;
    ::ll::TypedStorage<1, 1, ::SubClientId>                                      mClientSubId;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<Minecraft::Impl>>>  mImpl;
    ::ll::UntypedStorage<1, 16>                                                  mEntityRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ITickingSystem>>                    mAddMovementTickForCatchup;
    ::ll::UntypedStorage<8, 16>                                                  mLevelSubscribers;
    ::ll::UntypedStorage<8, 64>                                                  mRequestServerShutdown;
    ::ll::UntypedStorage<8, 64>                                                  mCreateServerNetworkHandler;
    ::ll::UntypedStorage<8, 64>                                                  mGetFileArchiver;
    ::ll::UntypedStorage<8, 64>                                                  mCreateMinecraftCommands;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::GameCallbacks&>                                      mGameCallbacks;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                 mEventing;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ResourcePackManager>>              mResourceLoader;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::StructureManager>>                 mStructureManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GameModuleServer>>                mGameModuleServer;
    ::ll::TypedStorage<8, 8, ::PermissionsFile*>                                    mPermissionsFile;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PrivateKeyManager>>                mServerKeys;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MinecraftServiceKeyManager>>      mMinecraftServiceKeys;
    ::ll::TypedStorage<8, 32, ::std::string const>                                  mSaveGamePath;
    ::ll::TypedStorage<8, 8, ::ServerMetrics*>                                      mServerMetrics;
    ::ll::TypedStorage<1, 1, bool const>                                            mIsDedicatedServer;
    ::ll::TypedStorage<1, 1, bool>                                                  mCorruptionDetected;
    ::ll::TypedStorage<1, 1, bool>                                                  mFireOnLevelCorrupt;
    ::ll::TypedStorage<8, 8, double>                                                mFrameDuration;
    ::ll::TypedStorage<8, 8, double>                                                mLastFrameStart;
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds>                                mMaxPlayerIdleTime;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DefaultCommandsContextProvider>>   mDefaultCommandsContextProvider;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MinecraftCommands>>                mCommands;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameSession>>                      mGameSession;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameTestLevelListener>>            mGameTestLevelListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MinecraftGameTest>>                mGameTest;
    ::ll::TypedStorage<8, 8, ::Timer&>                                              mSimTimer;
    ::ll::TypedStorage<8, 8, ::Timer&>                                              mRealTimer;
    ::ll::TypedStorage<8, 16, ::ClientOrServerNetworkSystemRef>                     mNetwork;
    ::ll::TypedStorage<8, 8, ::PacketSender&>                                       mPacketSender;
    ::ll::TypedStorage<1, 1, ::SubClientId>                                         mClientSubId;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::Minecraft::Impl>>> mImpl;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::EntityRegistry>>>        mEntityRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ITickingSystem>>                   mAddMovementTickForCatchup;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<
            ::Bedrock::PubSub::Publisher<void(::Level*), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>>
                                                                         mLevelSubscribers;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void() const>> mRequestServerShutdown;
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<
            ::std::unique_ptr<::ServerNetworkHandler>(::MinecraftArguments::CreateServerNetworkHandlerArgs&&)>>
        mCreateServerNetworkHandler;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<::Bedrock::NotNullNonOwnerPtr<::FileArchiver>() const>>
        mGetFileArchiver;
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<
            ::std::unique_ptr<::MinecraftCommands>(::MinecraftArguments::CreateMinecraftCommandsArgs&&) const>>
        mCreateMinecraftCommands;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    LLAPI Level* getLevel() const;
#endif // @header-generator platform

public:
    // prevent constructor by default
    Minecraft& operator=(Minecraft const&);
    Minecraft(Minecraft const&);
    Minecraft();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Minecraft();
#else // @header-generator platform
    virtual ~Minecraft() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::StackRefResult<const EntityRegistry> getEntityRegistry() const;
#else // @header-generator platform
    virtual void setSimTimePause(bool pause);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::StackRefResult<EntityRegistry> getEntityRegistry();

    virtual void setSimTimePause(bool);

    virtual void setSimTimeScale(float);
#else // @header-generator platform
    virtual void setSimTimeScale(float scale);
#endif // @header-generator platform

    virtual bool getSimPaused() const;

    virtual bool isOnlineClient() const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    virtual ::StackRefResult<::EntityRegistry> getEntityRegistry() /*override*/;

    virtual ::StackRefResult<::EntityRegistry const> getEntityRegistry() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit Minecraft(::MinecraftArguments&&);
#else // @header-generator platform
    MCAPI explicit Minecraft(::MinecraftArguments&& args);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _tryCatchupMovementTicks();
#else // @header-generator platform
    MCAPI void _tryCatchupMovementTicks();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void configureGameTest(::Level&, ::Experiments const&);
#else // @header-generator platform
    MCAPI void configureGameTest(::Level& level, ::Experiments const& experiments);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void disconnectClient(::NetworkIdentifier const&, ::Connection::DisconnectFailReason const);
#else // @header-generator platform
    MCAPI void disconnectClient(::NetworkIdentifier const& id, ::Connection::DisconnectFailReason disconnectReason);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void earlyShutdownMainthread();
#else // @header-generator platform
    MCAPI ::Bedrock::NonOwnerPointer<::ServerNetworkHandler> getServerNetworkHandler();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<NetEventCallback> getClientNetworkHandler();
#else // @header-generator platform
    MCAPI ::Bedrock::NotNullNonOwnerPtr<::StructureManager> getStructureManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ClientNetworkSystem& getClientNetworkSystem();

    MCNAPI ::MinecraftCommands& getCommands();

    MCNAPI ::IMinecraftEventing& getEventing() const;

    MCNAPI ::GameModuleServer& getGameModuleServer();

    MCNAPI ::optional_ref<MinecraftGameTest> getGameTest();

    MCNAPI double getLastTimestep();

    MCNAPI ::Level* getLevel() const;

    MCNAPI ::Bedrock::NonOwnerPointer<MinecraftServiceKeyManager> getMinecraftServiceKeyManager();

    MCNAPI ::Bedrock::NonOwnerPointer<NetEventCallback> getNetEventCallback();

    MCNAPI ::ResourcePackManager& getResourceLoader();

    MCNAPI ::Bedrock::NonOwnerPointer<ServerNetworkHandler> getServerNetworkHandler();

    MCNAPI ::ServerNetworkSystem& getServerNetworkSystem();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>> getStructureManager();

    MCNAPI ::Timer const& getTimer();

    MCNAPI bool hasCommands();

    MCNAPI bool hostMultiplayer(
        std::string const&,
        std::pair<std::unique_ptr<Level>, OwnerPtr<EntityContext>>,
        ::KeyManager const&,
        int,
        bool,
        ::ConnectionDefinition const&,
        std::unordered_map<PackIdVersion, std::string> const&,
        ::Scheduler&,
        ::TextFilteringProcessor*,
        ::NetworkServerConfig const&,
        std::shared_ptr<ScriptPackSettingsCache>,
        ::ServerNetworkHandlerDependencies&&
#else // @header-generator platform
    MCAPI bool hostMultiplayer(
        ::std::string const&                                                 serverName,
        ::std::pair<::std::unique_ptr<::Level>, ::OwnerPtr<::EntityContext>> levelEntity,
        ::KeyManager const&                                                  hostPublicKey,
        int                                                                  maxChunkRadius,
        bool                                                                 shouldAnnounce,
        ::ConnectionDefinition const&                                        connectionDefinition,
        ::std::unordered_map<::PackIdVersion, ::std::string> const&          packIdToContentKey,
        ::Scheduler&                                                         scheduler,
        ::TextFilteringProcessor*                                            textFilteringProcessor,
        ::NetworkServerConfig const&                                         packetHandlerConfig,
        ::std::shared_ptr<::ScriptPackSettingsCache>                         packSettingsCache,
        ::ServerNetworkHandlerDependencies&&                                 serverNetworkOptions
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void init();
#else // @header-generator platform
    MCFOLD void init();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initAsDedicatedServer();
#else // @header-generator platform
    MCFOLD void initAsDedicatedServer();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initCommands();
#else // @header-generator platform
    MCAPI void initCommands();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isDedicatedServer() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void onClientCreatedLevel(::std::pair<::std::unique_ptr<::Level>, ::OwnerPtr<::EntityContext>> levelEntity);

    MCAPI ::Bedrock::PubSub::Subscription registerLevelListener(::std::function<void(::Level*)> callback) const;

    MCAPI void resetGameSession();

    MCAPI void startClientGame(::std::unique_ptr<::NetEventCallback> legacyClientNetworkHandler);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isLeaveGameDone() const;
#else // @header-generator platform
    MCAPI void startLeaveGame(bool stopNetwork);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isModded();
#else // @header-generator platform
    MCAPI bool update();
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onClientCreatedLevel(std::pair<std::unique_ptr<Level>, OwnerPtr<EntityContext>>);

    MCNAPI ::Bedrock::PubSub::Subscription registerLevelListener(std::function<void(Level*)>) const;

    MCNAPI bool requestInGamePause(bool);

    MCNAPI void requestResourceReload();

    MCNAPI void resetGameSession();

    MCNAPI void setGameModeReal(::GameType);

    MCNAPI void startClientGame(std::unique_ptr<NetEventCallback>);

    MCNAPI void startLeaveGame(bool);

    MCNAPI bool update();

    MCNAPI void updateScreens();
#else // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _tryCatchupMovementTicks(
        ::EntitySystems&                     entitySystems,
        ::EntityRegistry&                    registry,
        ::std::unique_ptr<::ITickingSystem>& addMovementTickForCatchup
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::MinecraftArguments&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::MinecraftArguments&& args);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StackRefResult<const EntityRegistry> $getEntityRegistry() const;
#else // @header-generator platform
    MCAPI void $setSimTimePause(bool pause);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StackRefResult<EntityRegistry> $getEntityRegistry();
#else // @header-generator platform
    MCAPI void $setSimTimeScale(float scale);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setSimTimePause(bool);
#else // @header-generator platform
    MCAPI bool $getSimPaused() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setSimTimeScale(float);
#else // @header-generator platform
    MCAPI bool $isOnlineClient() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $getSimPaused() const;
#else // @header-generator platform
    MCAPI ::StackRefResult<::EntityRegistry> $getEntityRegistry();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isOnlineClient() const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::StackRefResult<::EntityRegistry const> $getEntityRegistry() const;
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
