#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentCommands {

enum class SubCommand : int {
    None     = 0,
    destroy  = 1,
    inspect  = 2,
    interact = 3,
};

}
