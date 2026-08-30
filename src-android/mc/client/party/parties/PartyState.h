#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Parties {

enum class PartyState : int {
    Connected     = 0,
    Disconnecting = 1,
};

}
