#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/events/event_data/ServerTelemetryData.h"
#include "mc/platform/UUID.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/server/commands/AutoCompleteInformation.h"
#include "mc/server/config/server_configuration/ServerConfigurationJoinInfo.h"
#include "mc/world/actor/player/PlayerListEntry.h"

// auto generated forward declare list
// clang-format off
class AllowList;
class ClientOrServerNetworkSystemRef;
class EditorAllowList;
class FileArchiver;
class GameCallbacks;
class GameModuleServer;
class ICommandsContextProvider;
class IContentTierManager;
class IImGuiModuleConnector;
class ILevel;
class IMinecraftApp;
class IMinecraftEventing;
class KeyManager;
class MinecraftCommands;
class MinecraftGameTest;
class MinecraftServiceKeyManager;
class PacketSender;
class PermissionsFile;
class PrivateKeyManager;
class ResourcePackManager;
class Scheduler;
class ScriptPackSettingsCache;
class ServerMetrics;
class ServerNetworkHandler;
class TextFilteringProcessor;
class Timer;
struct NetworkServerConfig;
struct ServerNetworkHandlerDependencies;
namespace Core { class FilePathManager; }
// clang-format on

struct MinecraftArguments {
public:
    // MinecraftArguments inner types declare
    // clang-format off
    struct MinecraftCommandsFactoryArguments;
    struct ServerNetworkHandlerFactoryArguments;
    struct CreateServerNetworkHandlerArgs;
    struct CreateMinecraftCommandsArgs;
    // clang-format on

    // MinecraftArguments inner types define
    struct MinecraftCommandsFactoryArguments {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, ::IImGuiModuleConnector*> mConnector;
        ::ll::TypedStorage<8, 8, std::string(*)(std::string const&, std::unordered_map<mce::UUID, PlayerListEntry> const&, ::AutoCompleteInformation&)> mAutoCompletePlayerMention;
        // clang-format on
        // NOLINTEND
    };

    struct ServerNetworkHandlerFactoryArguments {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, ::AllowList&> mAllowList;
        ::ll::TypedStorage<8, 8, ::EditorAllowList&> mEditorAllowList;
        ::ll::TypedStorage<8, 8, ::IMinecraftApp&> mApp;
        ::ll::TypedStorage<8, 320, std::optional<ServerConfiguration::ServerConfigurationJoinInfo>> mServerConfigurationJoinInfo;
        ::ll::TypedStorage<8, 96, ::Social::Events::ServerTelemetryData> mServerTelemetryData;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerNetworkHandlerFactoryArguments& operator=(ServerNetworkHandlerFactoryArguments const&);
        ServerNetworkHandlerFactoryArguments(ServerNetworkHandlerFactoryArguments const&);
        ServerNetworkHandlerFactoryArguments();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ServerNetworkHandlerFactoryArguments();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct CreateServerNetworkHandlerArgs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ILevel&>                                             mLevel;
        ::ll::TypedStorage<8, 8, ::PrivateKeyManager&>                                  mServerKeys;
        ::ll::TypedStorage<8, 8, ::MinecraftServiceKeyManager&>                         mMinecraftServiceKeys;
        ::ll::TypedStorage<8, 8, ::KeyManager const&>                                   mHostPublicKey;
        ::ll::TypedStorage<4, 4, int>                                                   mMaxChunkRadius;
        ::ll::TypedStorage<4, 4, int>                                                   mMaxNumPlayers;
        ::ll::TypedStorage<8, 8, ::MinecraftCommands&>                                  mCommands;
        ::ll::TypedStorage<8, 8, std::unordered_map<PackIdVersion, std::string> const&> mPackIdToContentKey;
        ::ll::TypedStorage<8, 8, ::Scheduler&>                                          mScheduler;
        ::ll::TypedStorage<8, 8, ::TextFilteringProcessor*>                             mTextFilteringProcessor;
        ::ll::TypedStorage<8, 8, ::NetworkServerConfig const&>                          mPacketHandlerConfig;
        ::ll::TypedStorage<8, 16, std::shared_ptr<ScriptPackSettingsCache>>             mPackSettingsCache;
        ::ll::TypedStorage<8, 8, ::ServerNetworkHandlerDependencies&&>                  mServerNetworkOptions;
        ::ll::UntypedStorage<8, 8>                                                      mGameTest;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateServerNetworkHandlerArgs& operator=(CreateServerNetworkHandlerArgs const&);
        CreateServerNetworkHandlerArgs(CreateServerNetworkHandlerArgs const&);
        CreateServerNetworkHandlerArgs();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CreateServerNetworkHandlerArgs();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct CreateMinecraftCommandsArgs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ICommandsContextProvider&> mContext;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateMinecraftCommandsArgs& operator=(CreateMinecraftCommandsArgs const&);
        CreateMinecraftCommandsArgs(CreateMinecraftCommandsArgs const&);
        CreateMinecraftCommandsArgs();
    };

    using RequestServerShutdownCallback = ::brstd::move_only_function<void() const>;

    using ServerNetworkHandlerFactory = ::brstd::move_only_function<
        std::unique_ptr<ServerNetworkHandler>(MinecraftArguments::CreateServerNetworkHandlerArgs&&)>;

    using MinecraftServiceKeyManagerFactory = ::brstd::function_ref<
        std::shared_ptr<MinecraftServiceKeyManager>() const,
        std::shared_ptr<MinecraftServiceKeyManager>()>;

    using GetFileArchiver = ::brstd::move_only_function<gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver>>() const>;

    using MinecraftCommandsFactory = ::brstd::move_only_function<
        std::unique_ptr<MinecraftCommands>(MinecraftArguments::CreateMinecraftCommandsArgs&&) const>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::GameCallbacks&>                                   mGameCallbacks;
    ::ll::TypedStorage<8, 8, ::PermissionsFile*>                                 mPermissionsFile;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mMaxPlayerIdleTime;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                              mEventing;
    ::ll::UntypedStorage<8, 16>                                                  mNetwork;
    ::ll::TypedStorage<8, 8, ::PacketSender&>                                    mPacketSender;
    ::ll::TypedStorage<1, 1, ::SubClientId>                                      mClientSubId;
    ::ll::TypedStorage<8, 8, ::Timer&>                                           mSimTimer;
    ::ll::TypedStorage<8, 8, ::Timer&>                                           mRealTimer;
    ::ll::TypedStorage<8, 8, ::ServerMetrics*>                                   mServerMetrics;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ResourcePackManager>>               mResourcePackManager;
    ::ll::UntypedStorage<8, 64>                                                  mRequestServerShutdown;
    ::ll::UntypedStorage<8, 64>                                                  mCreateServerNetworkHandler;
    ::ll::TypedStorage<1, 1, bool>                                               mIsDedicatedServer;
    ::ll::TypedStorage<8, 16, std::shared_ptr<GameModuleServer>>                 mGameModuleServer;
    ::ll::UntypedStorage<8, 24>                                                  mCreateMinecraftServiceKeyManager;
    ::ll::UntypedStorage<8, 64>                                                  mGetFileArchiver;
    ::ll::UntypedStorage<8, 64>                                                  mCreateMinecraftCommands;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftArguments& operator=(MinecraftArguments const&);
    MinecraftArguments(MinecraftArguments const&);
    MinecraftArguments();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::brstd::move_only_function<
        std::unique_ptr<ServerNetworkHandler>(MinecraftArguments::CreateServerNetworkHandlerArgs&&)>
    createServerNetworkHandlerFactory(::MinecraftArguments::ServerNetworkHandlerFactoryArguments&&);

    MCNAPI ~MinecraftArguments();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::brstd::move_only_function<
        std::unique_ptr<MinecraftCommands>(MinecraftArguments::CreateMinecraftCommandsArgs&&) const>
    createMinecraftCommandsFactory(::MinecraftArguments::MinecraftCommandsFactoryArguments&&);

    MCNAPI static std::unique_ptr<ResourcePackManager>
    createResourcePackManager(::Core::FilePathManager const&, ::IContentTierManager const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
