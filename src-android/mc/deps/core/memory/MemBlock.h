#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MemBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong const>              mCapacity;
    ::ll::TypedStorage<8, 8, ulong>                    mSize;
    ::ll::TypedStorage<8, 8, std::unique_ptr<uchar[]>> mDataBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    MemBlock();
};
