#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/ecs/gamerefs_entity/IEntityRegistryOwner.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/world/MinecraftArguments.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class ClientNetworkSystem;
class ClientOrServerNetworkSystemRef;
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
class NetworkStatistics;
class PacketSender;
class PermissionsFile;
class PrivateKeyManager;
class ResourcePackManager;
class Scheduler;
class ScriptPackSettingsCache;
class ServerMetrics;
class ServerNetworkHandler;
class ServerNetworkSystem;
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
    // NOLINTEND

public:
    // prevent constructor by default
    Minecraft& operator=(Minecraft const&);
    Minecraft(Minecraft const&);
    Minecraft();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Minecraft();

    virtual ::StackRefResult<const EntityRegistry> getEntityRegistry() const;

    virtual ::StackRefResult<EntityRegistry> getEntityRegistry();

    virtual void setSimTimePause(bool);

    virtual void setSimTimeScale(float);

    virtual bool getSimPaused() const;

    virtual bool isOnlineClient() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Minecraft(::MinecraftArguments&&);

    MCNAPI void _tryCatchupMovementTicks();

    MCNAPI void configureGameTest(::Level&, ::Experiments const&);

    MCNAPI void disconnectClient(::NetworkIdentifier const&, ::Connection::DisconnectFailReason const);

    MCNAPI void earlyShutdownMainthread();

    MCNAPI ::Bedrock::NonOwnerPointer<NetEventCallback> getClientNetworkHandler();

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
    );

    MCNAPI void init();

    MCNAPI void initAsDedicatedServer();

    MCNAPI void initCommands();

    MCNAPI bool isDedicatedServer() const;

    MCNAPI bool isLeaveGameDone() const;

    MCNAPI bool isModded();

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MinecraftArguments&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::StackRefResult<const EntityRegistry> $getEntityRegistry() const;

    MCNAPI ::StackRefResult<EntityRegistry> $getEntityRegistry();

    MCNAPI void $setSimTimePause(bool);

    MCNAPI void $setSimTimeScale(float);

    MCNAPI bool $getSimPaused() const;

    MCNAPI bool $isOnlineClient() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
