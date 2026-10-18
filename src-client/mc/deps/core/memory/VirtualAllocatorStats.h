#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory {

class VirtualAllocatorStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mTotalReservations;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mTotalCommits;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mReservedMemory;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mCommittedMemory;
    // NOLINTEND
};

} // namespace Bedrock::Memory
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
