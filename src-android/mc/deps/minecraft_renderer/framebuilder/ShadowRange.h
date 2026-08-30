#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct ShadowRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mNear;
    ::ll::TypedStorage<4, 4, float> mFar;
    // NOLINTEND
};

} // namespace mce::framebuilder
