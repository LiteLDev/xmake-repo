#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/data_structures/Queue.h"

namespace RakNet {

struct BPSTracker {
public:
    // BPSTracker inner types declare
    // clang-format off
    struct TimeAndValue2;
    // clang-format on

    // BPSTracker inner types define
    struct TimeAndValue2 {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> value1;
        ::ll::TypedStorage<8, 8, ulong> time;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> total1;
    ::ll::TypedStorage<8, 8, ulong> lastSec1;
    ::ll::UntypedStorage<8, 24>     dataQueue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Push1(ulong, ulong);
    // NOLINTEND
};

} // namespace RakNet
