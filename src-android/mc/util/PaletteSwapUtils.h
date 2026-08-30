#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

class PaletteSwapUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::map<uint, uint> _createPaletteMap(uint const, uint const*, uint const*);

    MCNAPI static ::cg::ImageBuffer
    swapColors(::cg::ImageBuffer const&, ::cg::ImageBuffer const&, ::cg::ImageBuffer const&);
    // NOLINTEND
};
