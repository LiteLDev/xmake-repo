#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules {

struct HorizonBlendStops {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mMin;
    ::ll::TypedStorage<4, 4, float> mStart;
    ::ll::TypedStorage<4, 4, float> mMieStart;
    ::ll::TypedStorage<4, 4, float> mMax;
    // NOLINTEND
};

} // namespace dragon::framerenderer::modules
