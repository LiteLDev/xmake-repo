#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/debugdrawer/ScriptLineShape.h"

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
class ScriptArrowShape : public ::ScriptModuleDebugUtilities::ScriptLineShape {
public:
    // prevent constructor by default
    ScriptArrowShape();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptArrowShape();
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
class ScriptArrowShape : public ::ScriptModuleDebugUtilities::ScriptLineShape {};
#endif // @header-generator platform

} // namespace ScriptModuleDebugUtilities
