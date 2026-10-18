#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct ScissorTestState {};
#endif // @header-generator platform

} // namespace dragon::rendering
