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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                    mCurrentBytes;
    ::ll::UntypedStorage<8, 24>                        detailed;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>                   mCurrentBytes;
    struct {
        ::ll::TypedStorage<8, 8, uint64> mTotalAllocationCount;
        ::ll::TypedStorage<4, 4, uint>   mCurrentAllocationCount;
        ::ll::TypedStorage<4, 4, uint>   mMaxAllocationCount;
        ::ll::TypedStorage<8, 8, uint64> mMaxBytes;
    } detailed;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Memory
