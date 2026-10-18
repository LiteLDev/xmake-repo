#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

#if defined(LL_PLAT_A) // @header-generator platform
template <auto T0>
#else // @header-generator platform
template <int T0>
#endif // @header-generator platform
class DerivedMovementScriptActorComponent {};

} // namespace ScriptModuleMinecraft
