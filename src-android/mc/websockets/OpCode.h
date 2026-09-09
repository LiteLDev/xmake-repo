#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class OpCode : uchar {
    OP_CONTINUATION           = 0,
    OP_NON_CONTROL_TEXT       = 1,
    OP_NON_CONTROL_BINARY     = 2,
    OP_NON_CONTROL_RESERVED_1 = 3,
    OP_NON_CONTROL_RESERVED_2 = 4,
    OP_NON_CONTROL_RESERVED_3 = 5,
    OP_NON_CONTROL_RESERVED_4 = 6,
    OP_NON_CONTROL_RESERVED_5 = 7,
    OP_CONTROL_CLOSE          = 8,
    OP_CONTROL_PING           = 9,
    OP_CONTROL_PONG           = 10,
    OP_CONTROL_RESERVED_1     = 11,
    OP_CONTROL_RESERVED_2     = 12,
    OP_CONTROL_RESERVED_3     = 13,
    OP_CONTROL_RESERVED_4     = 14,
    OP_CONTROL_RESERVED_5     = 15,
};
