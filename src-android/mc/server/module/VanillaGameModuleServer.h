#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/module/GameModuleServer.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CommandRegistry;
class Experiments;
class IECSModulesCollection;
class IGameModuleDocumentation;
class IMinecraftEventing;
class IResourcePackRepository;
class IWorldRegistriesProvider;
class ItemRegistryRef;
class Level;
class LevelStorage;
class LinkedAssetValidator;
class Player;
class RealmsStoriesGameplayEventListener;
class ResourcePackManager;
class ResourcePackStack;
class ServerInstance;
class ServerNetworkHandler;
class ServerScriptManager;
class VanillaServerGameplayEventListener;
struct BiomeJsonDocumentGlueResolvedBiomeData;
struct SpawnSettings;
namespace VanillaSystemsRegistration { struct RegistrationOptions; }
namespace VanillaWorldSystems { class Impl; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VanillaGameModuleServer : public ::GameModuleServer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<IECSModulesCollection>>              mECSModules;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VanillaServerGameplayEventListener>> mGameplayListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RealmsStoriesGameplayEventListener>> mRealmsStoriesListener;
    ::ll::TypedStorage<8, 16, std::shared_ptr<VanillaWorldSystems::Impl>>         mWorldSystems;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~VanillaGameModuleServer();

    virtual void init(::ServerInstance&, ::gsl::not_null<Bedrock::NonOwnerPointer<Level>> const&);

    virtual void initializeBehaviorStack(::Experiments const&, ::gsl::not_null<Bedrock::NonOwnerPointer<IResourcePackRepository>> const&, ::ResourcePackStack&, ::BaseGameVersion const&, bool);

    virtual void configureLevel(::gsl::not_null<Bedrock::NonOwnerPointer<Level>>&, ::Experiments const&, ::ResourcePackManager&, ::BaseGameVersion const&, ::ServerScriptManager const*, std::optional<std::reference_wrapper<std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>>>);

    virtual void configureNewPlayer(::Player&);

    virtual void configureDocumentation(::IGameModuleDocumentation&, ::ItemRegistryRef const);

    virtual void tick();

    virtual void setupCommands(::CommandRegistry&);

    virtual void configureServerNetworkHandler(::ServerInstance&, ::gsl::not_null<Bedrock::NonOwnerPointer<ServerNetworkHandler>>);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VanillaGameModuleServer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init(::ServerInstance&, ::gsl::not_null<Bedrock::NonOwnerPointer<Level>> const&);

    MCNAPI void $initializeBehaviorStack(
        ::Experiments const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IResourcePackRepository>> const&,
        ::ResourcePackStack&,
        ::BaseGameVersion const&,
        bool
    );

    MCNAPI void $configureLevel(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Level>>&,
        ::Experiments const&,
        ::ResourcePackManager&,
        ::BaseGameVersion const&,
        ::ServerScriptManager const*,
        std::optional<std::reference_wrapper<
            std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>>>
    );

    MCNAPI void $configureNewPlayer(::Player&);

    MCNAPI void $configureDocumentation(::IGameModuleDocumentation&, ::ItemRegistryRef const);

    MCNAPI void $tick();

    MCNAPI void $setupCommands(::CommandRegistry&);

    MCNAPI void
    $configureServerNetworkHandler(::ServerInstance&, ::gsl::not_null<Bedrock::NonOwnerPointer<ServerNetworkHandler>>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
