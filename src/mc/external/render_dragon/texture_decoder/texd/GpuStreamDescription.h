#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace texd {

#if defined(LL_PLAT_A) // @header-generator platform
struct GpuStreamDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>         width;
    ::ll::TypedStorage<4, 4, uint>         height;
    ::ll::TypedStorage<8, 8, uchar const*> pixelData;
    ::ll::TypedStorage<4, 4, uint>         pixelDatasize;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct GpuStreamDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>         width;
    ::ll::TypedStorage<4, 4, uint>         height;
    ::ll::TypedStorage<8, 8, uchar const*> pixelData;
    ::ll::TypedStorage<4, 4, uint>         pixelDatasize;
    // NOLINTEND
};
#else // @header-generator platform
struct GpuStreamDescription {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace texd
