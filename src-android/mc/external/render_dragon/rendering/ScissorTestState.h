#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

struct ScissorTestState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                     mEnabled;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mScissorRect;
    // NOLINTEND

public:
    // prevent constructor by default
    ScissorTestState();
};

} // namespace dragon::rendering
