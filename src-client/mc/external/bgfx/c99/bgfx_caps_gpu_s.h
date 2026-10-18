#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct bgfx_caps_gpu_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort>      vendorId;
    ::ll::TypedStorage<2, 2, ushort>      deviceId;
    ::ll::TypedStorage<4, 4, uint>        subSysId;
    ::ll::TypedStorage<4, 4, uint>        revision;
    ::ll::TypedStorage<8, 8, ulong>       dedicatedVideoMemory;
    ::ll::TypedStorage<8, 8, ulong>       dedicatedSystemMemory;
    ::ll::TypedStorage<8, 8, ulong>       sharedSystemMemory;
    ::ll::TypedStorage<8, 8, ulong>       reservedVideoMemory;
    ::ll::TypedStorage<1, 512, char[512]> chipsetName;
    ::ll::TypedStorage<1, 512, char[512]> driverVersion;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
