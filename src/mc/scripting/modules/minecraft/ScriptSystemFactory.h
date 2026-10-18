#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptSystem; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSystemFactory {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptSystem>
    getHandle(::Scripting::WeakLifetimeScope&, ::ServerLevel&, ::Scripting::DependencyLocator&);
#else // @header-generator platform
    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSystem>
    getHandle(::Scripting::WeakLifetimeScope& scope, ::ServerLevel& level, ::Scripting::DependencyLocator& locator);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
