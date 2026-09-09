#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/atlas/TileRenderConfig.h"

namespace dragon::atlas {

struct AtlasRenderInstruction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::glm::vec<4, int, (glm::qualifier)0>>   mPixelRect;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mAtlasToTileUV;
    ::ll::TypedStorage<8, 192, ::dragon::atlas::TileRenderConfig>      mConfig;
    // NOLINTEND
};

} // namespace dragon::atlas
