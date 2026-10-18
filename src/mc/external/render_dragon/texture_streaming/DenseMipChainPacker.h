#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
namespace dragon::texturestreaming { struct MipModificationRequest; }
namespace dragon::texturestreaming { struct TextureData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::texturestreaming {

#if defined(LL_PLAT_A) // @header-generator platform
struct DenseMipChainPacker {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::pair<ulong, std::vector<uchar>> getRequestData(::dragon::texturestreaming::TextureData const&);

    MCNAPI static void packRequestData(
        std::vector<dragon::texturestreaming::MipModificationRequest>&,
        ::dragon::texturestreaming::TextureData const&,
        std::vector<cg::ImageBuffer> const&
    );
    // NOLINTEND
};
#else // @header-generator platform
struct DenseMipChainPacker {};
#endif // @header-generator platform

} // namespace dragon::texturestreaming
