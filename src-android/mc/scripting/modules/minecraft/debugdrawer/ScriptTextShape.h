#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/debugdrawer/ScriptDebugShape.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleDebugUtilities {

class ScriptTextShape : public ::ScriptModuleDebugUtilities::ScriptDebugShape {
public:
    // prevent constructor by default
    ScriptTextShape();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptTextShape();
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
