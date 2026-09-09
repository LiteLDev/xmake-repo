#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Seed128Bit {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> low;
    ::ll::TypedStorage<8, 8, ulong> high;
    // NOLINTEND
};
