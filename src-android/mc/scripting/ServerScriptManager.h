#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/scripting/PluginExecutionGroup.h"
#include "mc/scripting/RegisterDiagnosticsStatsTypes.h"
#include "mc/scripting/ScriptSettings.h"
#include "mc/scripting/ServerScriptManagerEvents.h"
#include "mc/scripting/modules/FilterResult.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"
#include "mc/world/events/ServerInstanceEventListener.h"

// auto generated forward declare list
// clang-format off
class AsyncJoinRegistrar;
class CommandRegistry;
class IMinecraftEventing;
class IScriptServerNetworkInterface;
class IScriptTelemetryLogger;
class ItemRegistryRef;
class LevelEventHandlerRegistrar;
class LocalProfilerControlBroker;
class MinecraftCommands;
class MinecraftGameTest;
class PackManifest;
class Scheduler;
class ScriptAsyncJobCoordinator;
class ScriptClientDiagnosticsListener;
class ScriptContentLogEndPoint;
class ScriptDebugger;
class ScriptDebuggerWatchdog;
class ScriptDiagnostics;
class ScriptDiagnosticsCollectors;
class ScriptDiagnosticsPublishToFile;
class ScriptFormPromiseTracker;
class ScriptPackSettingsCache;
class ScriptPluginManager;
class ScriptPluginResult;
class ScriptTaskGroup;
class ScriptTickListener;
class ScriptWatchdog;
class ServerInstance;
class ServerLevel;
struct InstanceIdGenerator;
struct LevelStartLeaveGameEvent;
struct ServerInstanceRequestResourceReload;
namespace ScriptModuleMinecraft { class CustomCommandRegistry; }
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentRegistry; }
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentsRegistry; }
namespace ScriptModuleMinecraft { class ScriptCustomComponentParameterCache; }
namespace ScriptModuleMinecraft { class ScriptCustomDimensionRegistry; }
namespace ScriptModuleMinecraft { class ScriptCustomSpawnRulesRegistry; }
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class IRuntime; }
namespace Scripting { class RegistryManager; }
namespace Scripting { class ScriptEngine; }
namespace Scripting { struct ModuleDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ServerScriptManager : public ::EventListenerDispatcher<ServerInstanceEventListener>,
                            public ::EventListenerDispatcher<LevelEventListener> {
public:
    // ServerScriptManager inner types define
    enum class RuntimeVersion : int {
        v1 = 1,
        v2 = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 120, ::ServerScriptManagerEvents> mScriptStateEvents;
    ::ll::UntypedStorage<8, 616> mSettings;
    ::ll::TypedStorage<8, 8, ::ServerLevel&> mServerLevel;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ScriptPackSettingsCache>> mPackSettingsCache;
    ::ll::UntypedStorage<8, 24> mServerScheduler;
    ::ll::TypedStorage<8, 8, std::unique_ptr<cereal::ReflectionCtx>> mCerealContext;
    ::ll::TypedStorage<1, 1, ::RegisterDiagnosticsStatsTypes> mRegisterDiagnosticsStatsTypes;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IScriptTelemetryLogger>> mTelemetryLogger;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptClientDiagnosticsListener>> mClientDiagnosticsListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LevelEventHandlerRegistrar>> mLevelEventHandlerRegistrar;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::CustomCommandRegistry>> mCustomCommandRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptCustomComponentParameterCache>> mCustomComponentParameterCache;
    ::ll::UntypedStorage<1, 16> mBlockCustomComponentsRegistry;
    ::ll::UntypedStorage<1, 16> mItemCustomComponentRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptCustomSpawnRulesRegistry>> mCustomSpawnRulesRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptCustomDimensionRegistry>> mCustomDimensionRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptGlobalEventListeners>> mGlobalEventListeners;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IScriptServerNetworkInterface>> mServerNetworkInterface;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scripting::ScriptEngine>> mScriptEngine;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptPluginManager>> mScriptPluginManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptAsyncJobCoordinator>> mAsyncJobCoordinator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptFormPromiseTracker>> mFormPromiseTracker;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptDebuggerWatchdog>> mScriptDebuggerWatchdog;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptDebugger>> mScriptDebugger;
    ::ll::UntypedStorage<8, 24> mDiagnostics;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptDiagnosticsPublishToFile>> mDiagnosticsPublishToFile;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptDiagnosticsCollectors>> mScriptDiagnosticsCollectors;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptTickListener>> mScriptTickListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptTaskGroup>> mScriptTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptContentLogEndPoint>> mScriptContentLogEndPoint;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptWatchdog>> mScriptWatchdog;
    ::ll::TypedStorage<8, 8, std::unique_ptr<AsyncJoinRegistrar>> mAsyncJoinRegistrar;
    ::ll::TypedStorage<8, 8, std::unique_ptr<InstanceIdGenerator>> mInstanceIdGenerator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scripting::DependencyLocator>> mDependencyLocator;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<Scripting::IRuntime>>> mSharedRuntimes;
    ::ll::TypedStorage<8, 24, std::vector<std::function<ScriptModuleFilters::FilterResult (const PackManifest&, const Scripting::ModuleDescriptor&, const Scripting::ModuleDescriptor&, ScriptPluginResult&)>>> mModuleFilters;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ServerScriptManager& operator=(ServerScriptManager const&);
    ServerScriptManager(ServerScriptManager const&);
    ServerScriptManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerScriptManager();

    virtual ::EventResult onServerUpdateEnd(::ServerInstance&);

    virtual ::EventResult onServerThreadStarted(::ServerInstance&);

    virtual ::EventResult onEvent(::LevelStartLeaveGameEvent const&);

    virtual ::EventResult onEvent(::ServerInstanceRequestResourceReload const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerScriptManager(
        ::ScriptSettings&&,
        ::ServerLevel&,
        std::shared_ptr<ScriptPackSettingsCache>,
        ::Bedrock::NonOwnerPointer<Scheduler>,
        ::MinecraftCommands&,
        ::IMinecraftEventing&,
        ::ItemRegistryRef,
        ::ServerInstance&,
        ::Scripting::RegistryManager&,
        ::Bedrock::NonOwnerPointer<LocalProfilerControlBroker>,
        std::unique_ptr<AsyncJoinRegistrar>&&,
        ::Bedrock::NonOwnerPointer<ScriptDiagnostics>
    );

    MCNAPI void _loadPlugins(::ServerLevel&, bool);

    MCNAPI void _runPlugins(::PluginExecutionGroup, ::ServerInstance&);

    MCNAPI void _sendScriptModuleStartupEvent(::ServerLevel&) const;

    MCNAPI ::StackRefResult<ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry>
    getBlockCustomComponentRegistry() const;

    MCNAPI void onMainThreadStartLeaveGame();

    MCNAPI void setBlockCustomComponentCerealContext(::cereal::ReflectionCtx&);

    MCNAPI void setItemCustomComponentCerealContext(::cereal::ReflectionCtx&);

    MCNAPI void setServerNetworkInterface(std::unique_ptr<IScriptServerNetworkInterface>&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ScriptSettings&&,
        ::ServerLevel&,
        std::shared_ptr<ScriptPackSettingsCache>,
        ::Bedrock::NonOwnerPointer<Scheduler>,
        ::MinecraftCommands&,
        ::IMinecraftEventing&,
        ::ItemRegistryRef,
        ::ServerInstance&,
        ::Scripting::RegistryManager&,
        ::Bedrock::NonOwnerPointer<LocalProfilerControlBroker>,
        std::unique_ptr<AsyncJoinRegistrar>&&,
        ::Bedrock::NonOwnerPointer<ScriptDiagnostics>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onServerUpdateEnd(::ServerInstance&);

    MCNAPI ::EventResult $onServerThreadStarted(::ServerInstance&);

    MCNAPI ::EventResult $onEvent(::LevelStartLeaveGameEvent const&);

    MCNAPI ::EventResult $onEvent(::ServerInstanceRequestResourceReload const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
