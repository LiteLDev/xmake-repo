#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/MemBlock.h"

struct AllocatorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                       mTotalBlocks;
    ::ll::TypedStorage<8, 8, ulong>                       mTotalCapacity;
    ::ll::TypedStorage<8, 8, ulong>                       mTotalSize;
    ::ll::TypedStorage<8, 8, std::forward_list<MemBlock>> mBlocks;
    // NOLINTEND
};
