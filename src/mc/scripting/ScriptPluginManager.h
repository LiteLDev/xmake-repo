#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceInformation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/RuntimeConditions.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/PluginExecutionGroup.h"
#include "mc/scripting/modules/FilterResult.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/BaseGameVersion.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class IScriptPluginSourceEnumerator;
#if defined(LL_PLAT_A) // @header-generator platform
class PackCapability;
#else // @header-generator platform
#endif // @header-generator platform
class PackManifest;
class ScriptPlugin;
class ScriptPluginManagerResult;
class ScriptPluginResult;
class ScriptStat;
#if defined(LL_PLAT_A) // @header-generator platform
class ScriptStatCollector;
#else // @header-generator platform
#endif // @header-generator platform
class ServerLevel;
namespace Scripting { class DependencyLocator; }
namespace Scripting { class IRuntime; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class ScriptEngine; }
namespace Scripting { struct ContextId; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>                    name;
        ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> scope;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnkf6e39d;
        ::ll::UntypedStorage<8, 16> mUnk7a40bc;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                                           mBaseGameVersion;
    ::ll::TypedStorage<8, 8, ::Scripting::ScriptEngine&>                  mScriptEngine;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ScriptPlugin>>> mScriptPlugins;
    ::ll::TypedStorage<8, 24, ::Scripting::RuntimeConditions>             mCurrentRuntimeConditions;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptStatCollector>>        mMemoryStatCollector;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptStatCollector>>        mHandleCountStatCollector;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptStatCollector>>        mSubscriberCountStatCollector;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptStatCollector>>        mQuickJsStatCollector;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnke51876;
    ::ll::UntypedStorage<8, 8>  mUnk49bd90;
    ::ll::UntypedStorage<8, 24> mUnk6c8a4d;
    ::ll::UntypedStorage<8, 24> mUnk174121;
    ::ll::UntypedStorage<8, 8>  mUnke00494;
    ::ll::UntypedStorage<8, 8>  mUnk904f06;
    ::ll::UntypedStorage<8, 8>  mUnk221d43;
    ::ll::UntypedStorage<8, 8>  mUnk117c4d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptPluginManager& operator=(ScriptPluginManager const&);
    ScriptPluginManager(ScriptPluginManager const&);
#endif // @header-generator platform
    ScriptPluginManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ScriptStat> _collectHandleCountStats(ulong, ulong, ulong);

    MCNAPI std::optional<ScriptStat> _collectMemoryStats(ulong, ulong, ulong);

    MCNAPI std::optional<ScriptStat> _collectQuickJsStats(ulong, ulong, ulong);

    MCNAPI std::optional<ScriptStat> _collectSubscriberCountStats(
        ::gsl::not_null<Bedrock::NonOwnerPointer<ServerLevel>>,
        ::gsl::not_null<Scripting::DependencyLocator*>,
        ulong,
        ulong,
        ulong
#else // @header-generator platform
    MCNAPI void _addContextResultsToPluginResults(
        ::Scripting::ScriptContextResult const& contextResult,
        ::ScriptPluginResult&                   pluginResult
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _createPluginContext(::ScriptPlugin&, ::ScriptPluginResult&);
#else // @header-generator platform
    MCNAPI ::std::optional<::ScriptStat> _collectHandleCountStats(uint64, uint64, uint64);

    MCNAPI ::std::optional<::ScriptStat> _collectMemoryStats(uint64, uint64, uint64);

    MCNAPI ::std::optional<::ScriptStat> _collectQuickJsStats(uint64, uint64, uint64);

    MCNAPI ::std::optional<::ScriptStat> _collectSubscriberCountStats(
        ::Bedrock::NotNullNonOwnerPtr<::ServerLevel>     serverLevel,
        ::gsl::not_null<::Scripting::DependencyLocator*> locator,
        uint64,
        uint64,
        uint64
    );

#ifdef LL_PLAT_C
    MCNAPI void _createPluginContext(::ScriptPlugin& plugin, ::ScriptPluginResult& pluginResult);
#endif
#endif // @header-generator platform

    MCNAPI void _disableHandleCounter();

    MCNAPI void _enableHandleCounter();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _reloadHandleCounter(bool);
#else // @header-generator platform
    MCNAPI void _reloadHandleCounter(bool publisherEnabled);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _runPlugin(::ScriptPlugin&, ::ScriptPluginResult&, ::Scripting::Privilege);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void
    _runPlugin(::ScriptPlugin& plugin, ::ScriptPluginResult& pluginResult, ::Scripting::Privilege privilege);
#endif
#endif // @header-generator platform

    MCNAPI ::Scripting::RuntimeStats collectRuntimeStats() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptPluginManagerResult createContextAll();

    MCNAPI ::ScriptPluginManagerResult createContextsForGroup(::PluginExecutionGroup);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::ScriptPluginManagerResult createContextsForGroup(::PluginExecutionGroup group);
#endif
#endif // @header-generator platform

    MCNAPI ::ScriptPluginManagerResult discoverPlugins(
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ResourceInformation::ResourceType moduleType,
        ::IScriptPluginSourceEnumerator&    pluginEnumerator,
        ::std::vector<::std::function<::ScriptModuleFilters::FilterResult(
            ::PackManifest const&,
            ::Scripting::ModuleDescriptor const&,
            ::Scripting::ModuleDescriptor const&,
            ::ScriptPluginResult&
        )>> const&                          moduleFilters,
        ::std::vector<::mce::UUID>          excludeModuleIDs,
        ::std::function<::PluginExecutionGroup(::std::vector<::Scripting::ModuleDescriptor> const&)>&&
            pluginExecutionGroupSelector
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachPlugin(std::function<void(ScriptPlugin&)>);
#else // @header-generator platform
    MCNAPI void forEachRuntime(::std::function<void(::Scripting::IRuntime&)> func);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachRuntime(std::function<void(Scripting::IRuntime&)>);

    MCNAPI ::ScriptPlugin* getPluginByContextId(::Scripting::ContextId const&);

    MCNAPI std::vector<std::unique_ptr<ScriptPlugin>>& getPlugins();

    MCNAPI ::ScriptPluginManagerResult runAll();

    MCNAPI ::ScriptPluginManagerResult runGroup(::PluginExecutionGroup);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::ScriptPluginManagerResult runGroup(::PluginExecutionGroup group);
#endif
#endif // @header-generator platform

    MCNAPI ~ScriptPluginManager();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PackCapability getPackCapability();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
