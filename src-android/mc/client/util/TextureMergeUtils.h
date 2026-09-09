#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

class TextureMergeUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _mergeTopImageToBaseImage(::cg::ImageBuffer&, ::cg::ImageBuffer const&);

    MCNAPI static ::cg::ImageBuffer buildMergedTexture(::cg::ImageBuffer const&, std::vector<cg::ImageBuffer> const&);
    // NOLINTEND
};
