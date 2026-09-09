#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

namespace dragon::texturestreaming {

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

} // namespace dragon::texturestreaming
