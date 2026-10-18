#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorDamageCause {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::EnumBinding bindV010();
#else // @header-generator platform
    MCAPI static ::Scripting::EnumBinding bindV010();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::EnumBinding bindV1();
#else // @header-generator platform
    MCAPI static ::Scripting::EnumBinding bindV1();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
