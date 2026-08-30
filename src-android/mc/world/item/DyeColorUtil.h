#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemColor.h"

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

class DyeColorUtil {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int getAuxValue(::ItemColor);

    MCNAPI static ::ItemColor getItemColor(int);

    MCNAPI static ::ItemColor getRandomItemColor(::Random&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::array<short, 16> const& COLOR_TO_AUX();

    MCNAPI static std::array<short, 4> const& DEPRECATED_DYE_AUX_VALUES();

    MCNAPI static std::array<short, 16> const& DYE_AUX_VALUES();

    MCNAPI static std::array<ItemColor, 20> const& mColorMap();
    // NOLINTEND
};
