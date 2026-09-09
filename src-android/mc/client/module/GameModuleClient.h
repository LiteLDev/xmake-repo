#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/app_extensions/AppExtensionsNonOwner.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ActorMigratedDefinitionFactory;
class BaseGameVersion;
class ClientInputMappingFactory;
class ClientLevel;
class CommandRegistry;
class Experiments;
class GameModuleDocumentation;
class IClientInstance;
class IResourcePackRepository;
class ItemRegistryRef;
class Level;
class ResourcePackStack;
class ServerboundDiagnosticsPacket;
// clang-format on

class GameModuleClient : public ::AppExtensions::AppExtensionsNonOwner {
public:
    // GameModuleClient inner types define
    enum class ResourceLoadingPhase : int {
        AppStartup = 0,
        Frontend   = 1,
        InGame     = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~GameModuleClient();

    virtual void init(::IClientInstance&, ::gsl::not_null<Bedrock::NonOwnerPointer<Level>> const&) = 0;

    virtual void configureLevel(::IClientInstance&, ::gsl::not_null<Bedrock::NonOwnerPointer<ClientLevel>> const&, ::Experiments const&, ::BaseGameVersion const&) = 0;

    virtual void deconfigureLevel(::IClientInstance&) = 0;

    virtual void initializeResourceStack(::Experiments const*, ::gsl::not_null<Bedrock::NonOwnerPointer<IResourcePackRepository>> const&, ::ResourcePackStack&, ::BaseGameVersion const&, ::GameModuleClient::ResourceLoadingPhase, bool) = 0;

    virtual void configureDocumentation(::GameModuleDocumentation&, ::ItemRegistryRef const) = 0;

    virtual void tick(::IClientInstance const&) = 0;

    virtual void setupStandardCommands(::CommandRegistry&) = 0;

    virtual void setupStartMenuScreenCommands(::CommandRegistry&) = 0;

    virtual void setupUI() = 0;

    virtual void registerActorRenderers(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&) = 0;

    virtual std::unique_ptr<ClientInputMappingFactory> createInputMappingFactory(::IClientInstance&) = 0;

    virtual std::shared_ptr<void> registerVanillaGoalsForUpgrader(::Experiments const&, ::BaseGameVersion const&, ::ItemRegistryRef const, ::ActorMigratedDefinitionFactory&) const = 0;

    virtual ::ServerboundDiagnosticsPacket createServerboundDiagnosticsPacket() = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameModuleClient();
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
