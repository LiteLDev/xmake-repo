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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~GameModuleServer();
#else // @header-generator platform
    virtual ~GameModuleServer() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void init(::ServerInstance&, ::gsl::not_null<Bedrock::NonOwnerPointer<Level>> const&) = 0;
#else // @header-generator platform
    virtual void init(::ServerInstance& server, ::Bedrock::NotNullNonOwnerPtr<::Level> const& level) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeBehaviorStack(::Experiments const&, ::gsl::not_null<Bedrock::NonOwnerPointer<IResourcePackRepository>> const&, ::ResourcePackStack&, ::BaseGameVersion const&, bool) = 0;
#else // @header-generator platform
    virtual void initializeBehaviorStack(
        ::Experiments const&                                            experiments,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& repo,
        ::ResourcePackStack&                                            stack,
        ::BaseGameVersion const&                                        baseGameVersion,
        bool                                                            includeEditorPacks
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void configureLevel(::gsl::not_null<Bedrock::NonOwnerPointer<Level>>&, ::Experiments const&, ::ResourcePackManager&, ::BaseGameVersion const&, ::ServerScriptManager const*, std::optional<std::reference_wrapper<std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>>>) = 0;
#else // @header-generator platform
    virtual void configureLevel(
        ::Bedrock::NotNullNonOwnerPtr<::Level>& level,
        ::Experiments const&                    experiments,
        ::ResourcePackManager&                  resourcePackManager,
        ::BaseGameVersion const&                baseGameVersion,
        ::ServerScriptManager const*            scriptManager,
        ::std::optional<::std::reference_wrapper<
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>>>
            biomeIdToResolvedData
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void configureNewPlayer(::Player&) = 0;
#else // @header-generator platform
    virtual void configureNewPlayer(::Player& player) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void configureDocumentation(::IGameModuleDocumentation&, ::ItemRegistryRef const) = 0;
#else // @header-generator platform
    virtual void configureDocumentation(
        ::IGameModuleDocumentation& moduleDocumentation,
        ::ItemRegistryRef const     docItemRegistry
    ) = 0;
#endif // @header-generator platform

    virtual void tick() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setupCommands(::CommandRegistry&) = 0;
#else // @header-generator platform
    virtual void setupCommands(::CommandRegistry& commandRegistry) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void configureServerNetworkHandler(
        ::ServerInstance&                                     server,
        ::Bedrock::NotNullNonOwnerPtr<::ServerNetworkHandler> handler
    ) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
