#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
