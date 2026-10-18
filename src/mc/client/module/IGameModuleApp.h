#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/module/IGameModuleShared.h"

// auto generated forward declare list
// clang-format off
class AppSystemRegistry;
class ClientInputMappingFactory;
class ClientInstanceEventCoordinator;
class CommandRegistry;
class EntityContext;
class FrameAnomalyDetector;
class GameModuleClient;
class IAdvancedGraphicsOptions;
class IClientInstance;
class IMinecraftGame;
class MinecraftInputHandler;
class SceneFactory;
class Scheduler;
class WorkerPool;
struct GameModuleClientArgs;
namespace GameplayUI { struct GameplayUIContext; }
namespace Input::Debug { class ISplitscreenRedirect; }
namespace OreUI { class SceneProvider; }
namespace mce::framebuilder { class FrameBuilder; }
// clang-format on

class IGameModuleApp : public ::IGameModuleShared {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual std::unique_ptr<GameModuleClient> createGameModuleClient(::GameModuleClientArgs, ::gsl::not_null<Bedrock::NonOwnerPointer<FrameAnomalyDetector>> const&) = 0;

    virtual std::unique_ptr<mce::framebuilder::FrameBuilder> createFrameBuilder(::WorkerPool*, ::gsl::span<std::reference_wrapper<WorkerPool>> const, ::Scheduler&) = 0;

    virtual std::unique_ptr<MinecraftInputHandler> createInputHandler(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&, ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>> const&, ::gsl::not_null<Bedrock::NonOwnerPointer<Input::Debug::ISplitscreenRedirect>> const&) = 0;

    virtual std::unique_ptr<SceneFactory> createSceneFactory(::IMinecraftGame&, ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&, ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>> const&, ::OreUI::SceneProvider&) const = 0;

    virtual std::unique_ptr<ClientInputMappingFactory> createInputMappingFactory(::IClientInstance&) = 0;

    virtual void setupStartMenuScreenCommands(::CommandRegistry&) = 0;

    virtual void registerAppEntityContextAndSystems(::EntityContext&, ::AppSystemRegistry&) = 0;

    virtual void registerClientInstanceHandler(::ClientInstanceEventCoordinator&) = 0;

    virtual std::function<std::vector<NamedImGuiModule> (std::weak_ptr<ImguiClientInstance>)> getAdditionalImguiModulesFunc() = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUI::GameplayUIContext>> getGameplayUIContext(::SubClientId) = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
class IGameModuleApp {};
#endif // @header-generator platform
