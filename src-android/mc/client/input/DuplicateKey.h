#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DuplicateKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> index;
    ::ll::TypedStorage<4, 4, int>   key;
    // NOLINTEND
};
