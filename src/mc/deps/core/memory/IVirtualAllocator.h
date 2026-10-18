#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory {

#if defined(LL_PLAT_A) // @header-generator platform
class IVirtualAllocator {
#else // @header-generator platform
struct IVirtualAllocator {
#endif // @header-generator platform
public:
    // IVirtualAllocator inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct ReservationInfo;
#else // @header-generator platform
#endif // @header-generator platform
    struct Flags;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ReservationInfo;
#endif // @header-generator platform
    // clang-format on

    // IVirtualAllocator inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct Flags {};

#endif // @header-generator platform
    struct ReservationInfo {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, void*>  mPtr;
        ::ll::TypedStorage<8, 8, uint64> mReservedSize;
#endif // @header-generator platform
        // NOLINTEND
    };
};

} // namespace Bedrock::Memory
