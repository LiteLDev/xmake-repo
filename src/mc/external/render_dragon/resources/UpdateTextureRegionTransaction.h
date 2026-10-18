#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/ImageBuffer.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::res {

#if defined(LL_PLAT_A) // @header-generator platform
class UpdateTextureRegionTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>               mX;
    ::ll::TypedStorage<4, 4, uint>               mY;
    ::ll::TypedStorage<8, 48, ::cg::ImageBuffer> mImageBuffer;
    // NOLINTEND
};
#else // @header-generator platform
class UpdateTextureRegionTransaction {};
#endif // @header-generator platform

} // namespace dragon::res
