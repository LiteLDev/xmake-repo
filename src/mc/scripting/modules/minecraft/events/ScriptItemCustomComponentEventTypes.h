#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

enum class ScriptItemCustomComponentEventTypes : ushort {
#if defined(LL_PLAT_A) // @header-generator platform
    completeUse            = 0,
    consume                = 1,
    hitEntity              = 2,
    mineBlock              = 3,
    use                    = 4,
    useOn                  = 5,
    beforeDurabilityDamage = 6,
    _Count                 = 7,
#else // @header-generator platform
    CompleteUse            = 0,
    Consume                = 1,
    HitEntity              = 2,
    MineBlock              = 3,
    Use                    = 4,
    UseOn                  = 5,
    BeforeDurabilityDamage = 6,
    Count                  = 7,
#endif // @header-generator platform
};

}
