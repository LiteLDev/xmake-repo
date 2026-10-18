#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemColor.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class DyeColorUtil {
#if defined(LL_PLAT_A) // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int getAuxValue(::ItemColor);

    MCNAPI static ::ItemColor getItemColor(int);

    MCNAPI static ::ItemColor getRandomItemColor(::Random&);
    // NOLINTEND

#else // @header-generator platform
#endif // @header-generator platform
public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::array<short, 16> const& COLOR_TO_AUX();
#else // @header-generator platform
    MCAPI static ::std::array<short, 16> const& COLOR_TO_AUX();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::array<short, 4> const& DEPRECATED_DYE_AUX_VALUES();
#else // @header-generator platform
    MCAPI static ::std::array<short, 16> const& DYE_AUX_VALUES();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::array<short, 16> const& DYE_AUX_VALUES();

    MCNAPI static std::array<ItemColor, 20> const& mColorMap();
#else // @header-generator platform
    MCAPI static ::std::array<::ItemColor, 20> const& mColorMap();
#endif // @header-generator platform
    // NOLINTEND
};
