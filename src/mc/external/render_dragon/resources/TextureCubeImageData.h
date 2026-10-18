#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/ImageBuffer.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::res {

#if defined(LL_PLAT_A) // @header-generator platform
struct TextureCubeImageData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::cg::ImageBuffer> positiveXFace;
    ::ll::TypedStorage<8, 48, ::cg::ImageBuffer> negativeXFace;
    ::ll::TypedStorage<8, 48, ::cg::ImageBuffer> positiveYFace;
    ::ll::TypedStorage<8, 48, ::cg::ImageBuffer> negativeYFace;
    ::ll::TypedStorage<8, 48, ::cg::ImageBuffer> positiveZFace;
    ::ll::TypedStorage<8, 48, ::cg::ImageBuffer> negativeZFace;
    // NOLINTEND
};
#else // @header-generator platform
struct TextureCubeImageData {};
#endif // @header-generator platform

} // namespace dragon::res
