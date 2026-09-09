#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/ImageBuffer.h"

namespace dragon::res {

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

} // namespace dragon::res
