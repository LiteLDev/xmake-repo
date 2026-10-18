#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/common/SubClientId.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/events/event_data/ServerTelemetryData.h"
#include "mc/platform/UUID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/brstd/move_only_function.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/commands/AutoCompleteInformation.h"
#include "mc/server/config/server_configuration/ServerConfigurationJoinInfo.h"
#include "mc/world/actor/player/PlayerListEntry.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AllowList;
class ClientOrServerNetworkSystemRef;
class EditorAllowList;
#else // @header-generator platform
#endif // @header-generator platform
class FileArchiver;
#if defined(LL_PLAT_A) // @header-generator platform
class GameCallbacks;
class GameModuleServer;
class ICommandsContextProvider;
#else // @header-generator platform
#endif // @header-generator platform
class IContentTierManager;
#if defined(LL_PLAT_A) // @header-generator platform
class IImGuiModuleConnector;
class ILevel;
class IMinecraftApp;
class IMinecraftEventing;
class KeyManager;
#else // @header-generator platform
#endif // @header-generator platform
class MinecraftCommands;
#if defined(LL_PLAT_A) // @header-generator platform
class MinecraftGameTest;
#else // @header-generator platform
#endif // @header-generator platform
class MinecraftServiceKeyManager;
#if defined(LL_PLAT_A) // @header-generator platform
class PacketSender;
class PermissionsFile;
class PrivateKeyManager;
#else // @header-generator platform
#endif // @header-generator platform
class ResourcePackManager;
#if defined(LL_PLAT_A) // @header-generator platform
class Scheduler;
class ScriptPackSettingsCache;
class ServerMetrics;
#else // @header-generator platform
#endif // @header-generator platform
class ServerNetworkHandler;
#if defined(LL_PLAT_A) // @header-generator platform
class TextFilteringProcessor;
class Timer;
struct NetworkServerConfig;
struct ServerNetworkHandlerDependencies;
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class FilePathManager; }
// clang-format on

struct MinecraftArguments {
public:
    // MinecraftArguments inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct CreateMinecraftCommandsArgs;
    struct CreateServerNetworkHandlerArgs;
#endif // @header-generator platform
    struct MinecraftCommandsFactoryArguments;
    struct ServerNetworkHandlerFactoryArguments;
#if defined(LL_PLAT_A) // @header-generator platform
    struct CreateServerNetworkHandlerArgs;
    struct CreateMinecraftCommandsArgs;
#else // @header-generator platform
#endif // @header-generator platform
    // clang-format on

    // MinecraftArguments inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
    struct CreateMinecraftCommandsArgs {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::ICommandsContextProvider&> mContext;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnkfc63c8;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateMinecraftCommandsArgs& operator=(CreateMinecraftCommandsArgs const&);
        CreateMinecraftCommandsArgs(CreateMinecraftCommandsArgs const&);
        CreateMinecraftCommandsArgs();
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using RequestServerShutdownCallback = ::brstd::move_only_function<void() const>;
#else // @header-generator platform
    struct CreateServerNetworkHandlerArgs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk7c6ff6;
        ::ll::UntypedStorage<8, 8>  mUnkbb3d45;
        ::ll::UntypedStorage<8, 8>  mUnkec036e;
        ::ll::UntypedStorage<8, 8>  mUnk10cf6b;
        ::ll::UntypedStorage<4, 4>  mUnk2ffc16;
        ::ll::UntypedStorage<4, 4>  mUnk6aca64;
        ::ll::UntypedStorage<8, 8>  mUnk9574e8;
        ::ll::UntypedStorage<8, 8>  mUnk196507;
        ::ll::UntypedStorage<8, 8>  mUnkdd1599;
        ::ll::UntypedStorage<8, 8>  mUnk7ca080;
        ::ll::UntypedStorage<8, 8>  mUnk40263c;
        ::ll::UntypedStorage<8, 16> mUnkcf1eb4;
        ::ll::UntypedStorage<8, 8>  mUnk9d358c;
        ::ll::UntypedStorage<8, 8>  mUnk84fb6d;
        // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ServerNetworkHandlerFactory = ::brstd::move_only_function<
        std::unique_ptr<ServerNetworkHandler>(MinecraftArguments::CreateServerNetworkHandlerArgs&&)>;
#else // @header-generator platform
    public:
        // prevent constructor by default
        CreateServerNetworkHandlerArgs& operator=(CreateServerNetworkHandlerArgs const&);
        CreateServerNetworkHandlerArgs(CreateServerNetworkHandlerArgs const&);
        CreateServerNetworkHandlerArgs();
    };
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using MinecraftServiceKeyManagerFactory = ::brstd::function_ref<
        std::shared_ptr<MinecraftServiceKeyManager>() const,
        std::shared_ptr<MinecraftServiceKeyManager>()>;
#else // @header-generator platform
    struct MinecraftCommandsFactoryArguments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkeb1411;
        ::ll::UntypedStorage<8, 8> mUnke21dde;
        // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using GetFileArchiver = ::brstd::move_only_function<gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver>>() const>;
#else // @header-generator platform
    public:
        // prevent constructor by default
        MinecraftCommandsFactoryArguments& operator=(MinecraftCommandsFactoryArguments const&);
        MinecraftCommandsFactoryArguments(MinecraftCommandsFactoryArguments const&);
        MinecraftCommandsFactoryArguments();
    };
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using MinecraftCommandsFactory = ::brstd::move_only_function<
        std::unique_ptr<MinecraftCommands>(MinecraftArguments::CreateMinecraftCommandsArgs&&) const>;
#else // @header-generator platform
    struct ServerNetworkHandlerFactoryArguments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>   mUnk63a19e;
        ::ll::UntypedStorage<8, 8>   mUnke87c76;
        ::ll::UntypedStorage<8, 8>   mUnkc09c5e;
        ::ll::UntypedStorage<8, 384> mUnk130965;
        ::ll::UntypedStorage<8, 128> mUnk757f1a;
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerNetworkHandlerFactoryArguments& operator=(ServerNetworkHandlerFactoryArguments const&);
        ServerNetworkHandlerFactoryArguments(ServerNetworkHandlerFactoryArguments const&);
        ServerNetworkHandlerFactoryArguments();
    };
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk13dd73;
    ::ll::UntypedStorage<8, 8>  mUnk99bc61;
    ::ll::UntypedStorage<8, 8>  mUnkc400a9;
    ::ll::UntypedStorage<8, 8>  mUnk55bc06;
    ::ll::UntypedStorage<8, 16> mUnk806b1f;
    ::ll::UntypedStorage<8, 8>  mUnk146694;
    ::ll::UntypedStorage<1, 1>  mUnk10fae3;
    ::ll::UntypedStorage<8, 8>  mUnk4298d6;
    ::ll::UntypedStorage<8, 8>  mUnkf34ccc;
    ::ll::UntypedStorage<8, 8>  mUnk24e7ba;
    ::ll::UntypedStorage<8, 8>  mUnk4ff601;
    ::ll::UntypedStorage<8, 64> mUnk4e2b86;
    ::ll::UntypedStorage<8, 64> mUnk979579;
    ::ll::UntypedStorage<1, 1>  mUnk8f0ef7;
    ::ll::UntypedStorage<8, 16> mUnk4389b9;
    ::ll::UntypedStorage<8, 16> mUnka93f16;
    ::ll::UntypedStorage<8, 64> mUnkd0ab0f;
    ::ll::UntypedStorage<8, 64> mUnkb71d0a;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        std::unique_ptr<ServerNetworkHandler>(MinecraftArguments::CreateServerNetworkHandlerArgs&&)>
    createServerNetworkHandlerFactory(::MinecraftArguments::ServerNetworkHandlerFactoryArguments&&);
#else // @header-generator platform
        ::std::unique_ptr<::ServerNetworkHandler>(::MinecraftArguments::CreateServerNetworkHandlerArgs&&)>
    createServerNetworkHandlerFactory(::MinecraftArguments::ServerNetworkHandlerFactoryArguments&& args);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~MinecraftArguments();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ~MinecraftArguments();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::brstd::move_only_function<
        std::unique_ptr<MinecraftCommands>(MinecraftArguments::CreateMinecraftCommandsArgs&&) const>
    createMinecraftCommandsFactory(::MinecraftArguments::MinecraftCommandsFactoryArguments&&);

    MCNAPI static std::unique_ptr<ResourcePackManager>
    createResourcePackManager(::Core::FilePathManager const&, ::IContentTierManager const&);
#else // @header-generator platform
    MCNAPI static ::std::unique_ptr<::ResourcePackManager> createResourcePackManager(
        ::Core::FilePathManager const& filePathManager,
        ::IContentTierManager const&   contentTierManager
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
