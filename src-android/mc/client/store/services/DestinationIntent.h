#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services::multiplayer::model {

enum class DestinationIntent : int {
    Notify = 0,
    OptIn  = 1,
    OptOut = 2,
};

}
