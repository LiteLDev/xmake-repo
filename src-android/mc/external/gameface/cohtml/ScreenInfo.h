#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct ScreenInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> Width;
    ::ll::TypedStorage<4, 4, uint> Height;
    ::ll::TypedStorage<4, 4, uint> AvailableWidth;
    ::ll::TypedStorage<4, 4, uint> AvailableHeight;
    ::ll::TypedStorage<4, 4, uint> ColorDepth;
    ::ll::TypedStorage<4, 4, uint> PixelDepth;
    // NOLINTEND
};

} // namespace cohtml
