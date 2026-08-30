#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StructurePoolBlockPredicateType : int {
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
};
