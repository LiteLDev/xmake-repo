#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkStatMetrics {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint> sentPackets;
    ::ll::TypedStorage<4, 4, uint> sentBytes;
    ::ll::TypedStorage<4, 4, uint> receivedPackets;
    ::ll::TypedStorage<4, 4, uint> receivedBytes;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnke58846;
    ::ll::UntypedStorage<4, 4> mUnk7cbcb4;
    ::ll::UntypedStorage<4, 4> mUnkb28c5b;
    ::ll::UntypedStorage<4, 4> mUnkf13261;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    NetworkStatMetrics& operator=(NetworkStatMetrics const&);
    NetworkStatMetrics(NetworkStatMetrics const&);
    NetworkStatMetrics();
#endif // @header-generator platform
};
