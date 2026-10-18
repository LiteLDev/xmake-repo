#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct MemBlock {};
#endif // @header-generator platform
