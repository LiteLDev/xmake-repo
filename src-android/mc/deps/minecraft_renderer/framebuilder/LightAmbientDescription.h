#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

namespace mce::framebuilder {

struct LightAmbientDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color> mColor;
    ::ll::TypedStorage<4, 4, float>         mIntensity;
    ::ll::TypedStorage<2, 2, ushort>        mViewId;
    // NOLINTEND
};

} // namespace mce::framebuilder
