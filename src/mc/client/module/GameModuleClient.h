#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
#else // @header-generator platform
class GameModuleClient {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // GameModuleClient inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class ResourceLoadingPhase : int {
        AppStartup = 0,
        Frontend   = 1,
        InGame     = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameModuleClient() /*override*/ = default;

    virtual void init(::IClientInstance& client, ::Bedrock::NotNullNonOwnerPtr<::Level> const& level) = 0;

    virtual void configureLevel(
        ::IClientInstance&                                  client,
        ::Bedrock::NotNullNonOwnerPtr<::ClientLevel> const& level,
        ::Experiments const&                                experiments,
        ::BaseGameVersion const&                            baseGameVersion
    ) = 0;

    virtual void deconfigureLevel(::IClientInstance& client) = 0;

    virtual void initializeResourceStack(
        ::Experiments const*                                            experiments,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& repo,
        ::ResourcePackStack&                                            stack,
        ::BaseGameVersion const&                                        baseGameVersion,
        ::GameModuleClient::ResourceLoadingPhase                        loadingPhase,
        bool                                                            includeEditorPacks
    ) = 0;

    virtual void configureDocumentation(::GameModuleDocumentation&, ::ItemRegistryRef const) = 0;

    virtual void tick(::IClientInstance const& client) = 0;

    virtual void setupStandardCommands(::CommandRegistry& commandRegistry) = 0;

    virtual void setupStartMenuScreenCommands(::CommandRegistry& commandRegistry) = 0;

    virtual void setupUI() = 0;

    virtual void registerActorRenderers(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client) = 0;

    virtual ::std::unique_ptr<::ClientInputMappingFactory> createInputMappingFactory(::IClientInstance& client) = 0;

    virtual ::std::shared_ptr<void> registerVanillaGoalsForUpgrader(
        ::Experiments const&              experiments,
        ::BaseGameVersion const&          baseGameVersion,
        ::ItemRegistryRef const           itemRegistryRef,
        ::ActorMigratedDefinitionFactory& migratedFactory
    ) const = 0;

    virtual ::ServerboundDiagnosticsPacket createServerboundDiagnosticsPacket() = 0;
    // NOLINTEND
#else // @header-generator platform
    enum class ResourceLoadingPhase : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
