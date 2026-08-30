#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/debugdrawer/ScriptDebugShape.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleDebugUtilities {

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

} // namespace ScriptModuleDebugUtilities
