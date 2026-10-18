#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/raknet/data_structures/Queue.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong> value1;
        ::ll::TypedStorage<8, 8, ulong> time;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnk3607c9;
        ::ll::UntypedStorage<8, 8> mUnk83e56b;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        TimeAndValue2& operator=(TimeAndValue2 const&);
        TimeAndValue2(TimeAndValue2 const&);
        TimeAndValue2();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> total1;
    ::ll::TypedStorage<8, 8, ulong> lastSec1;
    ::ll::UntypedStorage<8, 24>     dataQueue;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk85e95b;
    ::ll::UntypedStorage<8, 8>  mUnkfb361b;
    ::ll::UntypedStorage<8, 24> mUnke01d2f;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BPSTracker& operator=(BPSTracker const&);
    BPSTracker(BPSTracker const&);
    BPSTracker();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void Push1(ulong, ulong);
#else // @header-generator platform
    MCAPI void Push1(uint64 time, uint64 value1);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace RakNet
