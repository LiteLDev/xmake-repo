#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/module/GameModuleClient.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class ActorMigratedDefinitionFactory;
class BaseGameVersion;
class BiomeRegistry;
class ClientInputMappingFactory;
class ClientLevel;
class ClientPlayerRewindListener;
class CommandRegistry;
class EduTelemetryEventListener;
class EntitySystems;
class Experiments;
class FrameAnomalyDetector;
class GameModuleDocumentation;
class IAchievementsListener;
class IClientInstance;
class IECSModulesCollection;
class IResourcePackRepository;
class ItemRegistryRef;
class Level;
class LocalProfilerControlBroker;
class ResourcePackStack;
class ServerboundDiagnosticsPacket;
class VanillaBlockInteractionsUIListener;
class VanillaClientGameplayEventListener;
class VanillaTelemetryEventListener;
struct GameModuleClientArgs;
namespace Bedrock::Profile::Whisker::Diagnostics { class ScopeDataSummarizer; }
namespace Bedrock::Profiling::Control { struct ProfilerControlRequest; }
namespace Bedrock::Profiling::Control { struct ProfilerControlResult; }
namespace ECS::Profiling { class EntitySystemProfiler; }
namespace ECS::Profiling::Diagnostics { class EntitySystemDiagnosticSummarizer; }
namespace GameplayUI { class GameplayUIClient; }
namespace GameplayUI { struct GameplayUIContext; }
namespace VanillaSystemsRegistration { struct RegistrationOptions; }
namespace VanillaWorldSystems { class Impl; }
// clang-format on

class VanillaGameModuleClient : public ::GameModuleClient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<IECSModulesCollection>>              mECSModules;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IAchievementsListener>>              mGenericAchievementsListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IAchievementsListener>>              mXboxLiveAchievementsListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IAchievementsListener>>              mPlatformAchievementsListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VanillaClientGameplayEventListener>> mGameplayListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VanillaTelemetryEventListener>>      mTelemetryListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VanillaBlockInteractionsUIListener>> mBlockInteractionsUI;
    ::ll::TypedStorage<8, 8, std::unique_ptr<GameplayUI::GameplayUIClient>>       mGameplayUIClient;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClientPlayerRewindListener>>         mPlayerRewindListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<EduTelemetryEventListener>>          mEduTelemetryEventListener;
    ::ll::UntypedStorage<8, 16>                                                   mEntitySystemProfiler;
    ::ll::UntypedStorage<8, 16>                                                   mWhiskerDataSummarizer;
    ::ll::UntypedStorage<8, 16>                                                   mEntitySystemDiagnosticSummarizer;
    ::ll::UntypedStorage<8, 24>                                                   mFrameAnomalyDetector;
    ::ll::UntypedStorage<8, 24>                                                   mLocalProfilerControlBroker;
    ::ll::TypedStorage<8, 8, ::GameplayUI::GameplayUIContext&>                    mGameplayUIContext;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                    mOnLevelBiomesRegisteredSubscription;
    ::ll::TypedStorage<8, 16, std::shared_ptr<VanillaWorldSystems::Impl>>         mWorldSystems;
    ::ll::TypedStorage<1, 1, bool const>                                          mIsConnectedToRemoteServer;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaGameModuleClient& operator=(VanillaGameModuleClient const&);
    VanillaGameModuleClient(VanillaGameModuleClient const&);
    VanillaGameModuleClient();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~VanillaGameModuleClient();

    virtual void init(::IClientInstance&, ::gsl::not_null<Bedrock::NonOwnerPointer<Level>> const&);

    virtual void configureLevel(::IClientInstance&, ::gsl::not_null<Bedrock::NonOwnerPointer<ClientLevel>> const&, ::Experiments const&, ::BaseGameVersion const&);

    virtual void deconfigureLevel(::IClientInstance&);

    virtual void initializeResourceStack(::Experiments const*, ::gsl::not_null<Bedrock::NonOwnerPointer<IResourcePackRepository>> const&, ::ResourcePackStack&, ::BaseGameVersion const&, ::GameModuleClient::ResourceLoadingPhase, bool);

    virtual void configureDocumentation(::GameModuleDocumentation&, ::ItemRegistryRef const);

    virtual void tick(::IClientInstance const&);

    virtual void setupStandardCommands(::CommandRegistry&);

    virtual void setupStartMenuScreenCommands(::CommandRegistry&);

    virtual void setupUI();

    virtual void registerActorRenderers(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&);

    virtual std::unique_ptr<ClientInputMappingFactory> createInputMappingFactory(::IClientInstance&);

    virtual std::shared_ptr<void> registerVanillaGoalsForUpgrader(::Experiments const&, ::BaseGameVersion const&, ::ItemRegistryRef const, ::ActorMigratedDefinitionFactory&) const;

    virtual ::ServerboundDiagnosticsPacket createServerboundDiagnosticsPacket();
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _onLevelBiomesRegistered(::BiomeRegistry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init(::IClientInstance&, ::gsl::not_null<Bedrock::NonOwnerPointer<Level>> const&);

    MCNAPI void $configureLevel(
        ::IClientInstance&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ClientLevel>> const&,
        ::Experiments const&,
        ::BaseGameVersion const&
    );

    MCNAPI void $deconfigureLevel(::IClientInstance&);

    MCNAPI void $initializeResourceStack(
        ::Experiments const*,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IResourcePackRepository>> const&,
        ::ResourcePackStack&,
        ::BaseGameVersion const&,
        ::GameModuleClient::ResourceLoadingPhase,
        bool
    );

    MCNAPI void $configureDocumentation(::GameModuleDocumentation&, ::ItemRegistryRef const);

    MCNAPI void $tick(::IClientInstance const&);

    MCNAPI void $setupStandardCommands(::CommandRegistry&);

    MCNAPI void $setupStartMenuScreenCommands(::CommandRegistry&);

    MCNAPI void $setupUI();

    MCNAPI void $registerActorRenderers(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&);

    MCNAPI std::unique_ptr<ClientInputMappingFactory> $createInputMappingFactory(::IClientInstance&);

    MCNAPI std::shared_ptr<void> $registerVanillaGoalsForUpgrader(
        ::Experiments const&,
        ::BaseGameVersion const&,
        ::ItemRegistryRef const,
        ::ActorMigratedDefinitionFactory&
    ) const;

    MCNAPI ::ServerboundDiagnosticsPacket $createServerboundDiagnosticsPacket();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
