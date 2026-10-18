#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptBiomeType; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleServerGraphics { class ScriptBiomeColorGrading; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

#endif // @header-generator platform
namespace ScriptModuleServerGraphics {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptColorGradingFactory {};
#else // @header-generator platform
class ScriptColorGradingFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleServerGraphics::ScriptBiomeColorGrading> getHandle(
        ::Scripting::WeakLifetimeScope&                 scope,
        ::ServerLevel&                                  level,
        ::ScriptModuleMinecraft::ScriptBiomeType const& biomeType,
        ::ScriptModuleMinecraft::ScriptPlayer*          player
    );
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace ScriptModuleServerGraphics
