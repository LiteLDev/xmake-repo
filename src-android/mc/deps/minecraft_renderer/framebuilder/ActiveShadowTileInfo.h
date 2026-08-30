#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"
#include "mc/external/render_dragon/rendering/TextureCubeFace.h"

namespace mce::framebuilder {

struct ActiveShadowTileInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::dragon::atlas::AtlasTileHandle>        mHandle;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mLightSteveSpacePosition;
    ::ll::TypedStorage<1, 1, uchar>                                    mVanillaBrightness;
    ::ll::TypedStorage<1, 1, ::dragon::rendering::TextureCubeFace>     mFaceDirection;
    // NOLINTEND
};

} // namespace mce::framebuilder
