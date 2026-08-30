#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

enum class ScriptItemCustomComponentEventTypes : ushort {
    completeUse            = 0,
    consume                = 1,
    hitEntity              = 2,
    mineBlock              = 3,
    use                    = 4,
    useOn                  = 5,
    beforeDurabilityDamage = 6,
    _Count                 = 7,
};

}
