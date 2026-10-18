#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/texture_streaming/MipStatus.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::texturestreaming {

#if defined(LL_PLAT_A) // @header-generator platform
struct MipModificationRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>                         mDirection;
    ::ll::TypedStorage<1, 1, uchar>                    mMipLevel;
    ::ll::TypedStorage<8, 8, ::cg::ImageBuffer const*> mMip;
    // NOLINTEND
};
#else // @header-generator platform
struct MipModificationRequest {};
#endif // @header-generator platform

} // namespace dragon::texturestreaming
