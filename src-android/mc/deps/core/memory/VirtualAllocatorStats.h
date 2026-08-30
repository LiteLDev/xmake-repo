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
