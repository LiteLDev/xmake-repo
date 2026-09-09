#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/app_extensions/AppExtensionsNonOwner.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CommandRegistry;
class Experiments;
class IGameModuleDocumentation;
class IResourcePackRepository;
class ItemRegistryRef;
class Level;
class Player;
class ResourcePackManager;
class ResourcePackStack;
class ServerInstance;
class ServerNetworkHandler;
class ServerScriptManager;
struct BiomeJsonDocumentGlueResolvedBiomeData;
// clang-format on

class GameModuleServer : public ::AppExtensions::AppExtensionsNonOwner {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~GameModuleServer();

    virtual void init(::ServerInstance&, ::gsl::not_null<Bedrock::NonOwnerPointer<Level>> const&) = 0;

    virtual void initializeBehaviorStack(::Experiments const&, ::gsl::not_null<Bedrock::NonOwnerPointer<IResourcePackRepository>> const&, ::ResourcePackStack&, ::BaseGameVersion const&, bool) = 0;

    virtual void configureLevel(::gsl::not_null<Bedrock::NonOwnerPointer<Level>>&, ::Experiments const&, ::ResourcePackManager&, ::BaseGameVersion const&, ::ServerScriptManager const*, std::optional<std::reference_wrapper<std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>>>) = 0;

    virtual void configureNewPlayer(::Player&) = 0;

    virtual void configureDocumentation(::IGameModuleDocumentation&, ::ItemRegistryRef const) = 0;

    virtual void tick() = 0;

    virtual void setupCommands(::CommandRegistry&) = 0;

    virtual void configureServerNetworkHandler(::ServerInstance&, ::gsl::not_null<Bedrock::NonOwnerPointer<ServerNetworkHandler>>) = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameModuleServer();
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
