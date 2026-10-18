#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLocation {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bindVec3();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bindVec3();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bindVec3_V010();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bindVec3_V010();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bindVecXZ();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bindVecXZ();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
