#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/CoordinateContext.h"
#include "mc/deps/core_graphics/Resolution.h"
#include "mc/external/render_dragon/texture_streaming/ScreenSpaceOccupancyEntry.h"

namespace dragon::texturestreaming {

struct TextureHeuristics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>    mScreenSpaceOccupancy;
    ::ll::TypedStorage<4, 4, uint> mFramesSinceLastUse;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureHeuristics(TextureHeuristics const&);
    TextureHeuristics();
};

} // namespace dragon::texturestreaming
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
