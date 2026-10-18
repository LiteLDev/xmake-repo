#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct ViewStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 256, char[256]> name;
    ::ll::TypedStorage<2, 2, ushort>      view;
    ::ll::TypedStorage<8, 8, long>        cpuTimeElapsed;
    ::ll::TypedStorage<8, 8, long>        cpuTimeBegin;
    ::ll::TypedStorage<8, 8, ulong>       gpuTimeBegin;
    ::ll::TypedStorage<8, 8, ulong>       gpuTimeEnd;
    ::ll::TypedStorage<8, 8, long>        gpuTimeElapsed;
    ::ll::TypedStorage<4, 4, uint>        gpuFrameNum;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ViewStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 256, char[256]> name;
    ::ll::TypedStorage<2, 2, ushort>      view;
    ::ll::TypedStorage<8, 8, int64>       cpuTimeElapsed;
    ::ll::TypedStorage<8, 8, int64>       cpuTimeBegin;
    ::ll::TypedStorage<8, 8, uint64>      gpuTimeBegin;
    ::ll::TypedStorage<8, 8, uint64>      gpuTimeEnd;
    ::ll::TypedStorage<8, 8, int64>       gpuTimeElapsed;
    ::ll::TypedStorage<4, 4, uint>        gpuFrameNum;
    // NOLINTEND
};
#else // @header-generator platform
struct ViewStats {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace bgfx
