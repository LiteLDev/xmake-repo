#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/CompressedImageBuffer.h"
#include "mc/external/render_dragon/resources/CompressedTextureDescription.h"

namespace dragon::res {

class CreateCompressedTextureTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::cg::CompressedImageBuffer>            mImageBuffer;
    ::ll::TypedStorage<8, 32, ::dragon::CompressedTextureDescription> mTextureDescription;
    // NOLINTEND
};

} // namespace dragon::res
