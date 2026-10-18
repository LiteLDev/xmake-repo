#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StructurePoolBlockPredicateType : int {
#if defined(LL_PLAT_A) // @header-generator platform
    TRUE_IF_FOUND                       = 0,
    ALWAYS_TRUE                         = 1,
    ALWAYS_TRUE_EXCEPT                  = 2,
    BLOCK_MATCH                         = 3,
    STATE_MATCH                         = 4,
    BLOCK_MATCH_RANDOM                  = 5,
    STATE_MATCH_RANDOM                  = 6,
    CAPPED_RANDOM_BLOCK_REPLACEMENT     = 7,
    LINEAR_POSITION                     = 8,
    AXIS_ALIGNED_POSITION               = 9,
    CAPPED_ARCHEOLOGY_BLOCK_REPLACEMENT = 10,
#else // @header-generator platform
    TrueIfFound                      = 0,
    AlwaysTrue                       = 1,
    AlwaysTrueExcept                 = 2,
    BlockMatch                       = 3,
    StateMatch                       = 4,
    BlockMatchRandom                 = 5,
    StateMatchRandom                 = 6,
    CappedRandomBlockReplacement     = 7,
    LinearPosition                   = 8,
    AxisAlignedPosition              = 9,
    CappedArcheologyBlockReplacement = 10,
#endif // @header-generator platform
};
