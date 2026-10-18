#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

#if defined(LL_PLAT_A) // @header-generator platform
enum ScriptDisplayObjectiveSlotId : uint {
#else // @header-generator platform
enum class ScriptDisplayObjectiveSlotId : int {
#endif // @header-generator platform
    List      = 0,
    Sidebar   = 1,
    BelowName = 2,
};

}
