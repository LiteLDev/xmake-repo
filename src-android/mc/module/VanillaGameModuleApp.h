#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/gameplayui/GameplayUIContext.h"
#include "mc/client/module/IGameModuleApp.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/ecs/gamerefs_entity/TickingSystemRegistrationToken.h"

// auto generated forward declare list
// clang-format off
class AppSystemRegistry;
class ClientInputMappingFactory;
class ClientInstanceEventCoordinator;
class CommandRegistry;
class EntityContext;
class FrameAnomalyDetector;
class GameModuleClient;
class GameModuleServer;
class IAdvancedGraphicsOptions;
class IClientInstance;
class IInPackagePacks;
class IMinecraftGame;
class MinecraftInputHandler;
class SceneFactory;
class Scheduler;
class ServerInstanceEventCoordinator;
class WorkerPool;
struct GameModuleClientArgs;
namespace AppExtensions { class IGameModuleExtensions; }
namespace Input::Debug { class ISplitscreenRedirect; }
namespace OreUI { class SceneProvider; }
namespace mce::framebuilder { class FrameBuilder; }
// clang-format on

class VanillaGameModuleApp : public ::IGameModuleApp {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<TickingSystemRegistrationToken>> mTickingSystemRegistrationTokens;
    ::ll::TypedStorage<8, 40, std::unordered_map<SubClientId, GameplayUI::GameplayUIContext>> mGameplayUIContexts;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~VanillaGameModuleApp();

    virtual std::unique_ptr<GameModuleServer> createGameModuleServer();

    virtual std::shared_ptr<IInPackagePacks> createInPackagePacks();

    virtual void registerMolangQueries();

    virtual void registerServerInstanceHandler(::ServerInstanceEventCoordinator&);

    virtual std::unique_ptr<GameModuleClient> createGameModuleClient(::GameModuleClientArgs, ::gsl::not_null<Bedrock::NonOwnerPointer<FrameAnomalyDetector>> const&);

    virtual std::unique_ptr<mce::framebuilder::FrameBuilder> createFrameBuilder(::WorkerPool*, ::gsl::span<std::reference_wrapper<WorkerPool>> const, ::Scheduler&);

    virtual std::unique_ptr<MinecraftInputHandler> createInputHandler(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&, ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>> const&, ::gsl::not_null<Bedrock::NonOwnerPointer<Input::Debug::ISplitscreenRedirect>> const&);

    virtual std::unique_ptr<SceneFactory> createSceneFactory(::IMinecraftGame&, ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&, ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>> const&, ::OreUI::SceneProvider&) const;

    virtual std::unique_ptr<ClientInputMappingFactory> createInputMappingFactory(::IClientInstance&);

    virtual void setupStartMenuScreenCommands(::CommandRegistry&);

    virtual void registerAppEntityContextAndSystems(::EntityContext&, ::AppSystemRegistry&);

    virtual void registerClientInstanceHandler(::ClientInstanceEventCoordinator&);

    virtual std::function<std::vector<NamedImGuiModule> (std::weak_ptr<ImguiClientInstance>)> getAdditionalImguiModulesFunc();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUI::GameplayUIContext>> getGameplayUIContext(::SubClientId);
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<AppExtensions::IGameModuleExtensions> createGameModuleExtension();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<GameModuleServer> $createGameModuleServer();

    MCNAPI std::shared_ptr<IInPackagePacks> $createInPackagePacks();

    MCNAPI void $registerMolangQueries();

    MCNAPI void $registerServerInstanceHandler(::ServerInstanceEventCoordinator&);

    MCNAPI std::unique_ptr<GameModuleClient> $createGameModuleClient(
        ::GameModuleClientArgs,
        ::gsl::not_null<Bedrock::NonOwnerPointer<FrameAnomalyDetector>> const&
    );

    MCNAPI std::unique_ptr<mce::framebuilder::FrameBuilder>
           $createFrameBuilder(::WorkerPool*, ::gsl::span<std::reference_wrapper<WorkerPool>> const, ::Scheduler&);

    MCNAPI std::unique_ptr<MinecraftInputHandler> $createInputHandler(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Input::Debug::ISplitscreenRedirect>> const&
    );

    MCNAPI std::unique_ptr<SceneFactory> $createSceneFactory(
        ::IMinecraftGame&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>> const&,
        ::OreUI::SceneProvider&
    ) const;

    MCNAPI std::unique_ptr<ClientInputMappingFactory> $createInputMappingFactory(::IClientInstance&);

    MCNAPI void $setupStartMenuScreenCommands(::CommandRegistry&);

    MCNAPI void $registerAppEntityContextAndSystems(::EntityContext&, ::AppSystemRegistry&);

    MCNAPI void $registerClientInstanceHandler(::ClientInstanceEventCoordinator&);

    MCNAPI std::function<std::vector<NamedImGuiModule>(std::weak_ptr<ImguiClientInstance>)>
           $getAdditionalImguiModulesFunc();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUI::GameplayUIContext>>
        $getGameplayUIContext(::SubClientId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
