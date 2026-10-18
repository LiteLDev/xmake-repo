#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer::modules {

#if defined(LL_PLAT_A) // @header-generator platform
struct LocalExposureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 6, ::glm::vec<3, ushort, (glm::qualifier)0>> mGridDimensions;
    ::ll::UntypedStorage<8, 32>                                        mBilateralGridTexture;
    // NOLINTEND
};
#else // @header-generator platform
struct LocalExposureData {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::modules
