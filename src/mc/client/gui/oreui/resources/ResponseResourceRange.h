#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Gameface {

class ResponseResourceRange {
public:
    // ResponseResourceRange inner types declare
    // clang-format off
    struct RangeInBytes;
    // clang-format on

    // ResponseResourceRange inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class Status : ushort {
        Ok                  = 200,
        PartialContent      = 206,
        RangeNotSatisfiable = 416,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Status : ushort {
        Ok                  = 200,
        PartialContent      = 206,
        RangeNotSatisfiable = 416,
    };
#else // @header-generator platform
    enum class Status : ushort {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct RangeInBytes {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> start;
        ::ll::TypedStorage<8, 8, ulong> end;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::Gameface::ResponseResourceRange::Status>                     mStatus;
    ::ll::TypedStorage<8, 24, std::optional<Gameface::ResponseResourceRange::RangeInBytes>> mRangeInBytes;
    ::ll::TypedStorage<8, 8, ulong>                                                         mSize;
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct RangeInBytes {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64> start;
        ::ll::TypedStorage<8, 8, uint64> end;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::Gameface::ResponseResourceRange::Status>                         mStatus;
    ::ll::TypedStorage<8, 24, ::std::optional<::Gameface::ResponseResourceRange::RangeInBytes>> mRangeInBytes;
    ::ll::TypedStorage<8, 8, uint64>                                                            mSize;
    // NOLINTEND
#else // @header-generator platform
    struct RangeInBytes {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace Gameface
