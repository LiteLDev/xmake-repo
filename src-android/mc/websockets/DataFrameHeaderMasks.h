#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DataFrameHeaderMasks : uchar {
    // bitfield representation
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
};
