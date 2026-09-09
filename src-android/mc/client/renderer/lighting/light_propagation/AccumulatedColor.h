#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LightPropagation {

struct AccumulatedColor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> r;
    ::ll::TypedStorage<2, 2, ushort> g;
    ::ll::TypedStorage<2, 2, ushort> b;
    ushort                           maxIntensity : 4;
    ushort                           count        : 12;
    // NOLINTEND
};

} // namespace LightPropagation
