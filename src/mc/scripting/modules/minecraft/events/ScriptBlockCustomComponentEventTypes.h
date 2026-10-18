#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

enum class ScriptBlockCustomComponentEventTypes : ushort {
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    OnStepOn            = 0,
    OnRandomTick        = 1,
    OnRandomTickLegacy  = 2,
    OnEntityFallOn      = 3,
    OnTick              = 4,
    OnStepOff           = 5,
    OnPlayerInteract    = 6,
    OnPlayerBreak       = 7,
    OnPlace             = 8,
    OnBreak             = 9,
    OnActor             = 10,
    BeforeOnPlayerPlace = 11,
    OnRedstoneUpdate    = 12,
    OnBlockStateChange  = 13,
    Count               = 14,
#endif // @header-generator platform
};

}
