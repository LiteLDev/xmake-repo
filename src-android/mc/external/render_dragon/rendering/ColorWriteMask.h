#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

struct ColorWriteMask {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> mWriteMask;
    // NOLINTEND

public:
    // prevent constructor by default
    ColorWriteMask(ColorWriteMask const&);
    ColorWriteMask();
};

} // namespace dragon::rendering
