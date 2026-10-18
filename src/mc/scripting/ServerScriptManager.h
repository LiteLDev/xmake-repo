#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/threading/Scheduler.h"
#include "mc/deps/script_core/script_engine/scripting/DependencyLocator.h"
#include "mc/scripting/ScriptFormPromiseTracker.h"
#include "mc/scripting/ScriptPluginManager.h"
#include "mc/scripting/ScriptPluginResult.h"
#include "mc/scripting/ScriptSettings.h"
#include "mc/scripting/ScriptTickListener.h"
#include "mc/scripting/debugger/ScriptDebugger.h"
#include "mc/scripting/debugger/ScriptDebuggerWatchdog.h"

#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/optional_ref.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/game_refs/OwnerPtr.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/game_refs/StackRefResult.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
class CommandRegistry;
#else // @header-generator platform
#endif // @header-generator platform
class IMinecraftEventing;
class IScriptServerNetworkInterface;
class IScriptTelemetryLogger;
class ItemRegistryRef;
class LevelEventHandlerRegistrar;
class LocalProfilerControlBroker;
class MinecraftCommands;
#if defined(LL_PLAT_A) // @header-generator platform
class MinecraftGameTest;
#else // @header-generator platform
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
class ServerScriptManager : public ::EventListenerDispatcher<ServerInstanceEventListener>,
                            public ::EventListenerDispatcher<LevelEventListener> {
#else // @header-generator platform
class ServerScriptManager : public ::EventListenerDispatcher<::ServerInstanceEventListener>,
                            public ::EventListenerDispatcher<::LevelEventListener> {
#endif // @header-generator platform
public:
    // ServerScriptManager inner types define
    enum class RuntimeVersion : int {
#if defined(LL_PLAT_A) // @header-generator platform
        v1 = 1,
        v2 = 2,
#else // @header-generator platform
        V1 = 1,
        V2 = 2,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 144, ::ServerScriptManagerEvents>                        mScriptStateEvents;
    ::ll::TypedStorage<8, 760, ::ScriptSettings>                                   mSettings;
    ::ll::TypedStorage<8, 8, ::ServerLevel&>                                       mServerLevel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ScriptPackSettingsCache>>        mPackSettingsCache;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Scheduler>>             mServerScheduler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cereal::ReflectionCtx>>           mCerealContext;
    ::ll::TypedStorage<1, 1, ::RegisterDiagnosticsStatsTypes>                      mRegisterDiagnosticsStatsTypes;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IScriptTelemetryLogger>>          mTelemetryLogger;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptClientDiagnosticsListener>> mClientDiagnosticsListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LevelEventHandlerRegistrar>>      mLevelEventHandlerRegistrar;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::CustomCommandRegistry>> mCustomCommandRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptCustomComponentParameterCache>>
        mCustomComponentParameterCache;
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry>>
        mBlockCustomComponentsRegistry;
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::ScriptModuleMinecraft::IScriptItemCustomComponentRegistry>>
        mItemCustomComponentRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptCustomSpawnRulesRegistry>>
        mCustomSpawnRulesRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptCustomDimensionRegistry>>
        mCustomDimensionRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptGlobalEventListeners>>
                                                                                       mGlobalEventListeners;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IScriptServerNetworkInterface>>       mServerNetworkInterface;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Scripting::ScriptEngine>>             mScriptEngine;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptPluginManager>>                 mScriptPluginManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptAsyncJobCoordinator>>           mAsyncJobCoordinator;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptFormPromiseTracker>>            mFormPromiseTracker;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptDebuggerWatchdog>>              mScriptDebuggerWatchdog;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptDebugger>>                      mScriptDebugger;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ScriptDiagnostics>>         mDiagnostics;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptDiagnosticsPublishToFile>>      mDiagnosticsPublishToFile;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptDiagnosticsCollectors>>         mScriptDiagnosticsCollectors;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptTickListener>>                  mScriptTickListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptTaskGroup>>                     mScriptTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptContentLogEndPoint>>            mScriptContentLogEndPoint;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptWatchdog>>                      mScriptWatchdog;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::AsyncJoinRegistrar>>                  mAsyncJoinRegistrar;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::InstanceIdGenerator>>                 mInstanceIdGenerator;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Scripting::DependencyLocator>>        mDependencyLocator;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::Scripting::IRuntime>>> mSharedRuntimes;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::function<::ScriptModuleFilters::FilterResult(
            ::PackManifest const&,
            ::Scripting::ModuleDescriptor const&,
            ::Scripting::ModuleDescriptor const&,
            ::ScriptPluginResult&
        )>>>
        mModuleFilters;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ServerScriptManager& operator=(ServerScriptManager const&);
    ServerScriptManager(ServerScriptManager const&);
    ServerScriptManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ServerScriptManager();
#else // @header-generator platform
    virtual ~ServerScriptManager() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onServerUpdateEnd(::ServerInstance&);
#else // @header-generator platform
    virtual ::EventResult onServerUpdateEnd(::ServerInstance& instance) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onServerThreadStarted(::ServerInstance&);
#else // @header-generator platform
    virtual ::EventResult onServerThreadStarted(::ServerInstance& instance) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::LevelStartLeaveGameEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::ServerInstanceRequestResourceReload const& reloadEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ServerInstanceRequestResourceReload const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::LevelStartLeaveGameEvent const& levelStartLeaveGameEvent) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ServerScriptManager(
        ::ScriptSettings&&                                       settings,
        ::ServerLevel&                                           serverLevel,
        ::std::shared_ptr<::ScriptPackSettingsCache>             packSettingsCache,
        ::Bedrock::NonOwnerPointer<::Scheduler>                  serverScheduler,
        ::MinecraftCommands&                                     commands,
        ::IMinecraftEventing&                                    eventing,
        ::ItemRegistryRef                                        itemRegistry,
        ::ServerInstance&                                        server,
        ::Scripting::RegistryManager&                            registry,
        ::Bedrock::NonOwnerPointer<::LocalProfilerControlBroker> localProfilerControlBroker,
        ::std::unique_ptr<::AsyncJoinRegistrar>&&                asyncJoinRegistrar,
        ::Bedrock::NonOwnerPointer<::ScriptDiagnostics>          diagnostics
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _loadPlugins(::ServerLevel&, bool);
#else // @header-generator platform
    MCAPI void _loadPlugins(::ServerLevel& serverLevel, bool fromReload);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _runPlugins(::PluginExecutionGroup, ::ServerInstance&);
#else // @header-generator platform
    MCAPI void _runPlugins(::PluginExecutionGroup exeGroup, ::ServerInstance& serverInstance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _sendScriptModuleStartupEvent(::ServerLevel&) const;
#else // @header-generator platform
    MCAPI void addModuleFilter(
        ::std::function<::ScriptModuleFilters::FilterResult(
            ::PackManifest const&,
            ::Scripting::ModuleDescriptor const&,
            ::Scripting::ModuleDescriptor const&,
            ::ScriptPluginResult&
        )> moduleFilter
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StackRefResult<ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry>
    getBlockCustomComponentRegistry() const;
#else // @header-generator platform
    MCAPI void setBlockCustomComponentCerealContext(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onMainThreadStartLeaveGame();

    MCNAPI void setBlockCustomComponentCerealContext(::cereal::ReflectionCtx&);

    MCNAPI void setItemCustomComponentCerealContext(::cereal::ReflectionCtx&);

    MCNAPI void setServerNetworkInterface(std::unique_ptr<IScriptServerNetworkInterface>&&);
#else // @header-generator platform
    MCAPI void setServerNetworkInterface(::std::unique_ptr<::IScriptServerNetworkInterface>&& serverNetworkInterface);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ScriptSettings&&                                       settings,
        ::ServerLevel&                                           serverLevel,
        ::std::shared_ptr<::ScriptPackSettingsCache>             packSettingsCache,
        ::Bedrock::NonOwnerPointer<::Scheduler>                  serverScheduler,
        ::MinecraftCommands&                                     commands,
        ::IMinecraftEventing&                                    eventing,
        ::ItemRegistryRef                                        itemRegistry,
        ::ServerInstance&                                        server,
        ::Scripting::RegistryManager&                            registry,
        ::Bedrock::NonOwnerPointer<::LocalProfilerControlBroker> localProfilerControlBroker,
        ::std::unique_ptr<::AsyncJoinRegistrar>&&                asyncJoinRegistrar,
        ::Bedrock::NonOwnerPointer<::ScriptDiagnostics>          diagnostics
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onServerUpdateEnd(::ServerInstance&);
#else // @header-generator platform
    MCAPI ::EventResult $onServerUpdateEnd(::ServerInstance& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onServerThreadStarted(::ServerInstance&);
#else // @header-generator platform
    MCAPI ::EventResult $onServerThreadStarted(::ServerInstance& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::LevelStartLeaveGameEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::ServerInstanceRequestResourceReload const& reloadEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ServerInstanceRequestResourceReload const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::LevelStartLeaveGameEvent const& levelStartLeaveGameEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
