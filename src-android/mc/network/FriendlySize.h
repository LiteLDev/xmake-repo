#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FriendlySize {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> bytes;
    // NOLINTEND

public:
    // prevent constructor by default
    FriendlySize();
};
