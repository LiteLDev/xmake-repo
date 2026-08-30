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
    // prevent constructor by default
    ScriptDebugUtils& operator=(ScriptDebugUtils const&);
    ScriptDebugUtils(ScriptDebugUtils const&);

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ScriptModuleDebugUtilities::ScriptPluginStats collectPluginStats(::Scripting::DependencyLocator&);

    MCNAPI static ::ScriptModuleDebugUtilities::ScriptRuntimeStats collectRuntimeStats(::Scripting::DependencyLocator&);

    MCNAPI static ::Scripting::Result_deprecated<void>
    disableWatchdogTimingWarnings(::Scripting::WeakLifetimeScope&, ::Scripting::DependencyLocator&, bool);
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
