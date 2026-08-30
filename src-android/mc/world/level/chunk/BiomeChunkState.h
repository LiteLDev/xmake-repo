#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeChunkState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> snowLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeChunkState();
};
