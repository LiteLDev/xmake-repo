#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/CoordinateContext.h"
#include "mc/deps/core_graphics/Resolution.h"

// auto generated forward declare list
// clang-format off
namespace dragon::texturestreaming { struct ScreenSpaceOccupancyEntry; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::texturestreaming {

#if defined(LL_PLAT_A) // @header-generator platform
struct ScreenSpaceOccupancyStreamer {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uchar _getMipLevelForScreenSpaceOccupancy(
        ::dragon::texturestreaming::ScreenSpaceOccupancyEntry,
        uint,
        uint,
        ::cg::Resolution<ushort, (cg::viewport::details::CoordinateContext)0> const&
    );
    // NOLINTEND
};
#else // @header-generator platform
struct ScreenSpaceOccupancyStreamer {};
#endif // @header-generator platform

} // namespace dragon::texturestreaming
