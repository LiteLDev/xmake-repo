#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class EnchantResultType : uchar {
    Fail      = 0,
    Conflict  = 1,
    Increment = 2,
    Enchant   = 3,
};
