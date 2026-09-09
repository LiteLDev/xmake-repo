#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Safety {

enum class ChatFloodingAction : int {
    NONE     = -1,
    SUPPRESS = 0,
    KICK     = 1,
};

}
