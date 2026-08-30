#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Rect2D {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> x;
    ::ll::TypedStorage<4, 4, int> y;
    ::ll::TypedStorage<4, 4, int> width;
    ::ll::TypedStorage<4, 4, int> height;
    ::ll::TypedStorage<4, 4, int> offsetX;
    ::ll::TypedStorage<4, 4, int> offsetY;
    // NOLINTEND
};
