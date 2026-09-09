#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ActorDefinitionEventType : int {
    LEAF        = 0,
    SEQUENCE    = 1,
    RANDOM      = 2,
    FIRST_VALID = 3,
    NONE        = 4,
};
