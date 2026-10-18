#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/PaletteColor.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Palette {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SharedTypes::Legacy::PaletteColor fromByte(uchar);

    MCNAPI static ::mce::Color const& getColor(::SharedTypes::Legacy::PaletteColor);
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::mce::Color const& BLACK();

    MCNAPI static ::mce::Color const& BLUE();

    MCNAPI static ::mce::Color const& BROWN();

    MCNAPI static ::mce::Color const& CYAN();

    MCNAPI static ::mce::Color const& GRAY();

    MCNAPI static ::mce::Color const& GREEN();

    MCNAPI static ::mce::Color const& LIGHT_BLUE();

    MCNAPI static ::mce::Color const& LIGHT_GREEN();

    MCNAPI static ::mce::Color const& MAGENTA();

    MCNAPI static ::mce::Color const& ORANGE();

    MCNAPI static ::mce::Color const& PINK();

    MCNAPI static ::mce::Color const& PURPLE();

    MCNAPI static ::mce::Color const& RED();

    MCNAPI static ::mce::Color const& SILVER();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::mce::Color const& MAGENTA();

    MCNAPI static ::mce::Color const& PURPLE();
#endif
#endif // @header-generator platform

    MCNAPI static ::mce::Color const& WHITE();
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI static ::mce::Color const& YELLOW();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
