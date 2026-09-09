#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/CoordinateContext.h"
#include "mc/deps/core_graphics/Resolution.h"

// auto generated forward declare list
// clang-format off
namespace dragon::texturestreaming { struct ScreenSpaceOccupancyEntry; }
// clang-format on

namespace dragon::texturestreaming {

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

} // namespace dragon::texturestreaming
