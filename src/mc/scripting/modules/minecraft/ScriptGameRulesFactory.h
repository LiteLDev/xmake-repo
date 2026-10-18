#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace ScriptModuleMinecraft { class ScriptGameRules; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptGameRulesFactory {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptGameRules>
    getHandle(::Scripting::WeakLifetimeScope&, ::Level&);
#else // @header-generator platform
    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptGameRules>
    getHandle(::Scripting::WeakLifetimeScope& scope, ::Level& level);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
