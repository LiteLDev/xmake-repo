#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

namespace mce::framebuilder {

struct LightDirectionalDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color>                            mColor;
    ::ll::TypedStorage<1, 1, bool>                                     mIsSun;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mDirectionToLightSource;
    ::ll::TypedStorage<2, 2, ushort>                                   mViewId;
    // NOLINTEND
};

} // namespace mce::framebuilder
