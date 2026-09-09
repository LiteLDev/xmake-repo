#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory {

class IVirtualAllocator {
public:
    // IVirtualAllocator inner types declare
    // clang-format off
    struct ReservationInfo;
    struct Flags;
    // clang-format on

    // IVirtualAllocator inner types define
    struct ReservationInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, void*> mPtr;
        ::ll::TypedStorage<8, 8, ulong> mReservedSize;
        // NOLINTEND
    };

    struct Flags {
    public:
        // member variables
        // NOLINTBEGIN
        uint mAutomaticallyRoundToMinimumSize : 1;
        uint mMapNoCoalesce                   : 1;
        uint mMapNoOverwrite                  : 1;
        // NOLINTEND
    };
};

} // namespace Bedrock::Memory
