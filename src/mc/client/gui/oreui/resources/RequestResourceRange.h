#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Gameface {

class RequestResourceRange {
public:
    // RequestResourceRange inner types declare
    // clang-format off
    struct RangeInBytes;
    // clang-format on

    // RequestResourceRange inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct RangeInBytes {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong>                 start;
        ::ll::TypedStorage<8, 16, std::optional<ulong>> end;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Gameface::RequestResourceRange::RangeInBytes> mRangeInBytes;
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct RangeInBytes {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64>                   start;
        ::ll::TypedStorage<8, 16, ::std::optional<uint64>> end;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Gameface::RequestResourceRange::RangeInBytes> mRangeInBytes;
    // NOLINTEND
#else // @header-generator platform
    struct RangeInBytes {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace Gameface
