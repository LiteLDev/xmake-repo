#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct EncoderStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long> cpuTimeBegin;
    ::ll::TypedStorage<8, 8, long> cpuTimeEnd;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct EncoderStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64> cpuTimeBegin;
    ::ll::TypedStorage<8, 8, int64> cpuTimeEnd;
    // NOLINTEND
};
#else // @header-generator platform
struct EncoderStats {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace bgfx
