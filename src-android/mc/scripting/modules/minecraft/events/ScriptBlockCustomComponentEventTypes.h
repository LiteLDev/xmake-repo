#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

enum class ScriptBlockCustomComponentEventTypes : ushort {
    onStepOn            = 0,
    onRandomTick        = 1,
    onRandomTickLegacy  = 2,
    onEntityFallOn      = 3,
    onTick              = 4,
    onStepOff           = 5,
    onPlayerInteract    = 6,
    onPlayerBreak       = 7,
    onPlace             = 8,
    onBreak             = 9,
    onActor             = 10,
    beforeOnPlayerPlace = 11,
    onRedstoneUpdate    = 12,
    onBlockStateChange  = 13,
    _Count              = 14,
};

}
