#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/MemoryCategory.h"

namespace Memory {

struct MemoryCategoryCounter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Memory::MemoryCategory> mCategory;
    ::ll::TypedStorage<8, 8, ulong>                    mCurrentBytes;
    ::ll::UntypedStorage<8, 24>                        detailed;
    // NOLINTEND
};

} // namespace Memory
