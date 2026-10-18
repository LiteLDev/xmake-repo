#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"
#include "mc/external/render_dragon/rendering/TextureCubeFace.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct ActiveShadowTileInfo {};
#endif // @header-generator platform

} // namespace mce::framebuilder
