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
#if defined(LL_PLAT_A) // @header-generator platform
class IECSModulesCollection;
#else // @header-generator platform
#endif // @header-generator platform
class IGameModuleDocumentation;
#if defined(LL_PLAT_A) // @header-generator platform
class IMinecraftEventing;
#else // @header-generator platform
#endif // @header-generator platform
class IResourcePackRepository;
#if defined(LL_PLAT_A) // @header-generator platform
class IWorldRegistriesProvider;
#else // @header-generator platform
#endif // @header-generator platform
class ItemRegistryRef;
class Level;
#if defined(LL_PLAT_A) // @header-generator platform
class LevelStorage;
class LinkedAssetValidator;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
class RealmsStoriesGameplayEventListener;
#else // @header-generator platform
#endif // @header-generator platform
class ResourcePackManager;
class ResourcePackStack;
class ServerInstance;
class ServerNetworkHandler;
class ServerScriptManager;
#if defined(LL_PLAT_A) // @header-generator platform
class VanillaServerGameplayEventListener;
#else // @header-generator platform
#endif // @header-generator platform
struct BiomeJsonDocumentGlueResolvedBiomeData;
#if defined(LL_PLAT_A) // @header-generator platform
struct SpawnSettings;
namespace VanillaSystemsRegistration { struct RegistrationOptions; }
namespace VanillaWorldSystems { class Impl; }
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class VanillaGameModuleServer : public ::GameModuleServer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<IECSModulesCollection>>              mECSModules;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VanillaServerGameplayEventListener>> mGameplayListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RealmsStoriesGameplayEventListener>> mRealmsStoriesListener;
    ::ll::TypedStorage<8, 16, std::shared_ptr<VanillaWorldSystems::Impl>>         mWorldSystems;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk7ee23b;
    ::ll::UntypedStorage<8, 8>  mUnk3398c6;
    ::ll::UntypedStorage<8, 8>  mUnkf51e1c;
    ::ll::UntypedStorage<8, 16> mUnkf08fc4;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    VanillaGameModuleServer& operator=(VanillaGameModuleServer const&);
    VanillaGameModuleServer(VanillaGameModuleServer const&);
    VanillaGameModuleServer();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~VanillaGameModuleServer();
#else // @header-generator platform
    virtual ~VanillaGameModuleServer() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void init(::ServerInstance&, ::gsl::not_null<Bedrock::NonOwnerPointer<Level>> const&);
#else // @header-generator platform
    virtual void init(::ServerInstance& server, ::Bedrock::NotNullNonOwnerPtr<::Level> const& level) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeBehaviorStack(::Experiments const&, ::gsl::not_null<Bedrock::NonOwnerPointer<IResourcePackRepository>> const&, ::ResourcePackStack&, ::BaseGameVersion const&, bool);
#else // @header-generator platform
    virtual void initializeBehaviorStack(
        ::Experiments const&                                            experiments,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& repo,
        ::ResourcePackStack&                                            stack,
        ::BaseGameVersion const&                                        baseGameVersion,
        bool                                                            includeEditorPacks
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void configureLevel(::gsl::not_null<Bedrock::NonOwnerPointer<Level>>&, ::Experiments const&, ::ResourcePackManager&, ::BaseGameVersion const&, ::ServerScriptManager const*, std::optional<std::reference_wrapper<std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>>>);
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
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void configureNewPlayer(::Player&);
#else // @header-generator platform
    virtual void configureNewPlayer(::Player& player) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void configureDocumentation(::IGameModuleDocumentation&, ::ItemRegistryRef const);
#else // @header-generator platform
    virtual void configureDocumentation(
        ::IGameModuleDocumentation& moduleDocumentation,
        ::ItemRegistryRef const     docItemRegistry
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick();
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setupCommands(::CommandRegistry&);
#else // @header-generator platform
    virtual void setupCommands(::CommandRegistry& commandRegistry) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void configureServerNetworkHandler(
        ::ServerInstance&                                     server,
        ::Bedrock::NotNullNonOwnerPtr<::ServerNetworkHandler> handler
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $init(::ServerInstance&, ::gsl::not_null<Bedrock::NonOwnerPointer<Level>> const&);
#else // @header-generator platform
    MCAPI void $init(::ServerInstance& server, ::Bedrock::NotNullNonOwnerPtr<::Level> const& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeBehaviorStack(
        ::Experiments const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IResourcePackRepository>> const&,
        ::ResourcePackStack&,
        ::BaseGameVersion const&,
        bool
#else // @header-generator platform
    MCAPI void $initializeBehaviorStack(
        ::Experiments const&                                            experiments,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& repo,
        ::ResourcePackStack&                                            stack,
        ::BaseGameVersion const&                                        baseGameVersion,
        bool                                                            includeEditorPacks
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $configureLevel(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Level>>&,
        ::Experiments const&,
        ::ResourcePackManager&,
        ::BaseGameVersion const&,
        ::ServerScriptManager const*,
        std::optional<std::reference_wrapper<
            std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>>>
#else // @header-generator platform
    MCAPI void $configureLevel(
        ::Bedrock::NotNullNonOwnerPtr<::Level>& level,
        ::Experiments const&                    experiments,
        ::ResourcePackManager&                  resourcePackManager,
        ::BaseGameVersion const&                baseGameVersion,
        ::ServerScriptManager const*            scriptManager,
        ::std::optional<::std::reference_wrapper<
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>>>
            biomeIdToResolvedData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $configureNewPlayer(::Player&);
#else // @header-generator platform
    MCFOLD void $configureNewPlayer(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $configureDocumentation(::IGameModuleDocumentation&, ::ItemRegistryRef const);
#else // @header-generator platform
    MCFOLD void
    $configureDocumentation(::IGameModuleDocumentation& moduleDocumentation, ::ItemRegistryRef const docItemRegistry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCFOLD void $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setupCommands(::CommandRegistry&);
#else // @header-generator platform
    MCAPI void $setupCommands(::CommandRegistry& commandRegistry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $configureServerNetworkHandler(::ServerInstance&, ::gsl::not_null<Bedrock::NonOwnerPointer<ServerNetworkHandler>>);
#else // @header-generator platform
    MCAPI void $configureServerNetworkHandler(
        ::ServerInstance&                                     server,
        ::Bedrock::NotNullNonOwnerPtr<::ServerNetworkHandler> handler
    );


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
