#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/texture_streaming/MipStatus.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

namespace dragon::texturestreaming {

struct MipModificationRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>                         mDirection;
    ::ll::TypedStorage<1, 1, uchar>                    mMipLevel;
    ::ll::TypedStorage<8, 8, ::cg::ImageBuffer const*> mMip;
    // NOLINTEND
};

} // namespace dragon::texturestreaming
