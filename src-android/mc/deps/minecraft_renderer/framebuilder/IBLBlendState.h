#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct IBLBlendState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mCurrentFrame;
    ::ll::TypedStorage<4, 4, int> mTargetFrame;
    // NOLINTEND
};

} // namespace mce::framebuilder
