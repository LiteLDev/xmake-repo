#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockTessellationFallbackUtils {

#if defined(LL_PLAT_A) // @header-generator platform
struct TessellationConfigInfo {
public:
    // member variables
    // NOLINTBEGIN
    bool mHasTextures                          : 1;
    bool mHasTexturesFromCreatorPacks          : 1;
    bool mHasBlockshapeFromCreatorPacks        : 1;
    bool mHasAmbientOcclusionFromCreatorPacks  : 1;
    bool mHasIsotropicTexturesFromCreatorPacks : 1;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TessellationConfigInfo {
public:
    // member variables
    // NOLINTBEGIN
    bool mHasTextures                          : 1;
    bool mHasTexturesFromCreatorPacks          : 1;
    bool mHasBlockshapeFromCreatorPacks        : 1;
    bool mHasAmbientOcclusionFromCreatorPacks  : 1;
    bool mHasIsotropicTexturesFromCreatorPacks : 1;
    // NOLINTEND
};
#else // @header-generator platform
struct TessellationConfigInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace BlockTessellationFallbackUtils
