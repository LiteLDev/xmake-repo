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
    enum class Status : ushort {
        Ok                  = 200,
        PartialContent      = 206,
        RangeNotSatisfiable = 416,
    };

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
};

} // namespace Gameface
