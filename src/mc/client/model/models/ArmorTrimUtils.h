#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

class ArmorTrimUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void adjustLeatherTrimAlpha(::cg::ImageBuffer& trim);
    // NOLINTEND
};
#else // @header-generator platform
class ArmorTrimUtils {};
#endif // @header-generator platform
#endif // @header-generator platform
