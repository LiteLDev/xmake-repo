#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct MemBlock;
// clang-format on

struct AllocatorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                          mTotalBlocks;
    ::ll::TypedStorage<8, 8, uint64>                          mTotalCapacity;
    ::ll::TypedStorage<8, 8, uint64>                          mTotalSize;
    ::ll::TypedStorage<8, 8, ::std::forward_list<::MemBlock>> mBlocks;
    // NOLINTEND
};
#else // @header-generator platform
struct AllocatorData {};
#endif // @header-generator platform
#endif // @header-generator platform
