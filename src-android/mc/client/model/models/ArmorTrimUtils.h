#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ArmorTrimTextureData;
class ArmorTrimUnloader;
namespace cg { class ImageBuffer; }
namespace mce { class TextureGroup; }
namespace mce { class TexturePtr; }
// clang-format on

class ArmorTrimUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void adjustLeatherTrimAlpha(::cg::ImageBuffer&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& LEATHER_ARMOR_TRIM_ALPHA();
    // NOLINTEND
};
