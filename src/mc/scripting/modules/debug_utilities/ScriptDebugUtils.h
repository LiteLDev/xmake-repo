#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleDebugUtilities { struct ScriptPluginStats; }
namespace ScriptModuleDebugUtilities { struct ScriptRuntimeStats; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleDebugUtilities {

class ScriptDebugUtils {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ScriptDebugUtils& operator=(ScriptDebugUtils const&);
    ScriptDebugUtils(ScriptDebugUtils const&);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ScriptModuleDebugUtilities::ScriptPluginStats collectPluginStats(::Scripting::DependencyLocator&);
#else // @header-generator platform
    MCAPI static ::ScriptModuleDebugUtilities::ScriptPluginStats
    collectPluginStats(::Scripting::DependencyLocator& locator);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ScriptModuleDebugUtilities::ScriptRuntimeStats collectRuntimeStats(::Scripting::DependencyLocator&);
#else // @header-generator platform
    MCAPI static ::ScriptModuleDebugUtilities::ScriptRuntimeStats
    collectRuntimeStats(::Scripting::DependencyLocator& locator);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::Result_deprecated<void>
    disableWatchdogTimingWarnings(::Scripting::WeakLifetimeScope&, ::Scripting::DependencyLocator&, bool);
#else // @header-generator platform
    MCAPI static ::Scripting::Result_deprecated<void> disableWatchdogTimingWarnings(
        ::Scripting::WeakLifetimeScope& scope,
        ::Scripting::DependencyLocator& locator,
        bool                            disable
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
