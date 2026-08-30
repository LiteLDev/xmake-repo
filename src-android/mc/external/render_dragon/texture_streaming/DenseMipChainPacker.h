#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
namespace dragon::texturestreaming { struct MipModificationRequest; }
namespace dragon::texturestreaming { struct TextureData; }
// clang-format on

namespace dragon::texturestreaming {

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

} // namespace dragon::texturestreaming
