#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceInformation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#include "mc/deps/script_core/runtime/scripting/RuntimeConditions.h"
#include "mc/scripting/PluginExecutionGroup.h"
#include "mc/scripting/modules/FilterResult.h"
#include "mc/util/BaseGameVersion.h"

// auto generated forward declare list
// clang-format off
class IScriptPluginSourceEnumerator;
class PackCapability;
class PackManifest;
class ScriptPlugin;
class ScriptPluginManagerResult;
class ScriptPluginResult;
class ScriptStat;
class ScriptStatCollector;
class ServerLevel;
namespace Scripting { class DependencyLocator; }
namespace Scripting { class IRuntime; }
namespace Scripting { class ScriptEngine; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct RuntimeStats; }
namespace Scripting { struct ScriptContextResult; }
namespace mce { class UUID; }
// clang-format on

class ScriptPluginManager {
public:
    // ScriptPluginManager inner types declare
    // clang-format off
    struct PackNameAndWeakScope;
    // clang-format on

    // ScriptPluginManager inner types define
    struct PackNameAndWeakScope {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                    name;
        ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> scope;
        // NOLINTEND

    public:
        // prevent constructor by default
        PackNameAndWeakScope& operator=(PackNameAndWeakScope const&);
        PackNameAndWeakScope(PackNameAndWeakScope const&);
        PackNameAndWeakScope();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                                           mBaseGameVersion;
    ::ll::TypedStorage<8, 8, ::Scripting::ScriptEngine&>                  mScriptEngine;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ScriptPlugin>>> mScriptPlugins;
    ::ll::TypedStorage<8, 24, ::Scripting::RuntimeConditions>             mCurrentRuntimeConditions;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptStatCollector>>        mMemoryStatCollector;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptStatCollector>>        mHandleCountStatCollector;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptStatCollector>>        mSubscriberCountStatCollector;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptStatCollector>>        mQuickJsStatCollector;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPluginManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<ScriptStat> _collectHandleCountStats(ulong, ulong, ulong);

    MCNAPI std::optional<ScriptStat> _collectMemoryStats(ulong, ulong, ulong);

    MCNAPI std::optional<ScriptStat> _collectQuickJsStats(ulong, ulong, ulong);

    MCNAPI std::optional<ScriptStat> _collectSubscriberCountStats(
        ::gsl::not_null<Bedrock::NonOwnerPointer<ServerLevel>>,
        ::gsl::not_null<Scripting::DependencyLocator*>,
        ulong,
        ulong,
        ulong
    );

    MCNAPI void _createPluginContext(::ScriptPlugin&, ::ScriptPluginResult&);

    MCNAPI void _disableHandleCounter();

    MCNAPI void _enableHandleCounter();

    MCNAPI void _reloadHandleCounter(bool);

    MCNAPI void _runPlugin(::ScriptPlugin&, ::ScriptPluginResult&, ::Scripting::Privilege);

    MCNAPI ::Scripting::RuntimeStats collectRuntimeStats() const;

    MCNAPI ::ScriptPluginManagerResult createContextAll();

    MCNAPI ::ScriptPluginManagerResult createContextsForGroup(::PluginExecutionGroup);

    MCNAPI ::ScriptPluginManagerResult discoverPlugins(
        ::ResourceInformation::ResourceType,
        ::IScriptPluginSourceEnumerator&,
        std::vector<std::function<ScriptModuleFilters::FilterResult(
            const PackManifest&,
            const Scripting::ModuleDescriptor&,
            const Scripting::ModuleDescriptor&,
            ScriptPluginResult&
        )>> const&,
        std::vector<mce::UUID>,
        std::function<PluginExecutionGroup(const std::vector<Scripting::ModuleDescriptor>&)>&&
    );

    MCNAPI void forEachPlugin(std::function<void(ScriptPlugin&)>);

    MCNAPI void forEachRuntime(std::function<void(Scripting::IRuntime&)>);

    MCNAPI ::ScriptPlugin* getPluginByContextId(::Scripting::ContextId const&);

    MCNAPI std::vector<std::unique_ptr<ScriptPlugin>>& getPlugins();

    MCNAPI ::ScriptPluginManagerResult runAll();

    MCNAPI ::ScriptPluginManagerResult runGroup(::PluginExecutionGroup);

    MCNAPI ~ScriptPluginManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PackCapability getPackCapability();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
