#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/debugdrawer/ScriptDebugShape.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleDebugUtilities {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptCylinderShape : public ::ScriptModuleDebugUtilities::ScriptDebugShape {
public:
    // prevent constructor by default
    ScriptCylinderShape();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptCylinderShape();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ScriptCylinderShape : public ::ScriptModuleDebugUtilities::ScriptDebugShape {};
#endif // @header-generator platform

} // namespace ScriptModuleDebugUtilities
