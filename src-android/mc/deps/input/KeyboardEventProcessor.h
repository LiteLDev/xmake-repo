#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Input {

class KeyboardEventProcessor {
public:
    // KeyboardEventProcessor inner types define
    enum class InputOrigin : int {
        UNKNOWN  = 0,
        HARDWARE = 1,
        VIRTUAL  = 2,
    };
};

} // namespace Bedrock::Input
