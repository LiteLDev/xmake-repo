#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/ImageBuffer.h"
#include "mc/external/render_dragon/resources/TextureDescription.h"

namespace dragon::res {

class CreateTextureTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::dragon::TextureDescription> mTextureDescription;
    ::ll::TypedStorage<8, 24, std::vector<cg::ImageBuffer>> mImageBuffers;
    ::ll::TypedStorage<8, 24, std::vector<uchar>>           mLoadedMips;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>         mImageHash;
    ::ll::TypedStorage<1, 1, bool>                          mAllowDroppingMips;
    // NOLINTEND
};

} // namespace dragon::res
