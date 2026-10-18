#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class OpCode : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    Continuation        = 0,
    NonControlText      = 1,
    NonControlBinary    = 2,
    NonControlReserved1 = 3,
    NonControlReserved2 = 4,
    NonControlReserved3 = 5,
    NonControlReserved4 = 6,
    NonControlReserved5 = 7,
    ControlClose        = 8,
    ControlPing         = 9,
    ControlPong         = 10,
    ControlReserved1    = 11,
    ControlReserved2    = 12,
    ControlReserved3    = 13,
    ControlReserved4    = 14,
    ControlReserved5    = 15,
#endif // @header-generator platform
};
