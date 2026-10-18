#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/atlas/TileRenderConfig.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::atlas {

#if defined(LL_PLAT_A) // @header-generator platform
struct AtlasRenderInstruction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::glm::vec<4, int, (glm::qualifier)0>>   mPixelRect;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mAtlasToTileUV;
    ::ll::TypedStorage<8, 192, ::dragon::atlas::TileRenderConfig>      mConfig;
    // NOLINTEND
};
#else // @header-generator platform
struct AtlasRenderInstruction {};
#endif // @header-generator platform

} // namespace dragon::atlas
