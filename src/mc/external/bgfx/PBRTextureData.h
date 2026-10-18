#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct PBRTextureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, float[2]> colourToMaterialUvScale;
    ::ll::TypedStorage<4, 8, float[2]> colourToMaterialUvBias;
    ::ll::TypedStorage<4, 8, float[2]> colourToNormalUvScale;
    ::ll::TypedStorage<4, 8, float[2]> colourToNormalUvBias;
    ::ll::TypedStorage<4, 4, int>      flags;
    ::ll::TypedStorage<4, 4, float>    uniformRoughness;
    ::ll::TypedStorage<4, 4, float>    uniformEmissive;
    ::ll::TypedStorage<4, 4, float>    uniformMetalness;
    ::ll::TypedStorage<4, 4, float>    uniformSubsurface;
    ::ll::TypedStorage<4, 4, float>    maxMipColour;
    ::ll::TypedStorage<4, 4, float>    maxMipMer;
    ::ll::TypedStorage<4, 4, float>    maxMipNormalOrHeight;
    // NOLINTEND
};
#else // @header-generator platform
struct PBRTextureData {};
#endif // @header-generator platform

} // namespace bgfx
