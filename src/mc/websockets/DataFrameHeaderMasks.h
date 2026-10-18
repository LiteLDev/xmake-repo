#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DataFrameHeaderMasks : uchar {
    // bitfield representation
#if defined(LL_PLAT_A) // @header-generator platform
    BIT1           = 1 << 0,
    BIT2           = 1 << 1,
    BIT3           = 1 << 2,
    BIT4           = 1 << 3,
    BIT5           = 1 << 4,
    BIT6           = 1 << 5,
    BIT7           = 1 << 6,
    BIT8           = 1 << 7,
    OP_CODE        = BIT1 | BIT2 | BIT3 | BIT4,
    PAYLOAD_LENGTH = BIT1 | BIT2 | BIT3 | BIT4 | BIT5 | BIT6 | BIT7,
#else // @header-generator platform
    Bit1          = 1 << 0,
    Bit2          = 1 << 1,
    Bit3          = 1 << 2,
    Bit4          = 1 << 3,
    Bit5          = 1 << 4,
    Bit6          = 1 << 5,
    Bit7          = 1 << 6,
    Bit8          = 1 << 7,
    OpCode        = Bit1 | Bit2 | Bit3 | Bit4,
    PayloadLength = Bit1 | Bit2 | Bit3 | Bit4 | Bit5 | Bit6 | Bit7,
#endif // @header-generator platform
};
