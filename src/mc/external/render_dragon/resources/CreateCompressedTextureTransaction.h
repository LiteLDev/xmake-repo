#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/CompressedImageBuffer.h"
#include "mc/external/render_dragon/resources/CompressedTextureDescription.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::res {

#if defined(LL_PLAT_A) // @header-generator platform
class CreateCompressedTextureTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::cg::CompressedImageBuffer>            mImageBuffer;
    ::ll::TypedStorage<8, 32, ::dragon::CompressedTextureDescription> mTextureDescription;
    // NOLINTEND
};
#else // @header-generator platform
class CreateCompressedTextureTransaction {};
#endif // @header-generator platform

} // namespace dragon::res
