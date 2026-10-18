#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::texturestreaming {

#if defined(LL_PLAT_A) // @header-generator platform
struct MipEncoder {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _biasAlpha(::cg::ImageBuffer&, float);

    MCNAPI static float _computeAlphaCoverage(::cg::ImageBuffer const&, float);

    MCNAPI static ::cg::ImageBuffer _getDownsampledMip(::cg::ImageBuffer&&);

    MCNAPI static void downsizeToMipLevel(::cg::ImageBuffer&, uchar);

    MCNAPI static std::vector<cg::ImageBuffer> encode(::cg::ImageBuffer&&);

    MCNAPI static std::vector<cg::ImageBuffer> encode(::cg::ImageBuffer&&, uchar);
    // NOLINTEND
};
#else // @header-generator platform
struct MipEncoder {};
#endif // @header-generator platform

} // namespace dragon::texturestreaming
