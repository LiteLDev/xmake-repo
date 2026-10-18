#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class TintMapColor;
namespace mce { class Color; }
// clang-format on

class TintUtility {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::mce::Color _applyTint(::mce::Color, ::mce::Color, ::mce::Color);

    MCNAPI static ::mce::Color _rgbToHsl(::mce::Color);

    MCNAPI static ::mce::Color _rgbToLch(::mce::Color);

    MCNAPI static ::mce::Color
        applyTintToPixel(::mce::Color, ::mce::Color, ::TintMapColor, ::TintMapColor, ::mce::Color);
    // NOLINTEND
};
#else // @header-generator platform
class TintUtility {};
#endif // @header-generator platform
