#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LightGradientColor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> r;
    ::ll::TypedStorage<1, 1, uchar> g;
    ::ll::TypedStorage<1, 1, uchar> b;
    ::ll::TypedStorage<1, 1, uchar> _padding;
    // NOLINTEND
};
