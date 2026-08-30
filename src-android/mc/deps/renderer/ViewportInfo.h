#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct ViewportInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> size;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> offset;
    ::ll::TypedStorage<4, 4, float>                                   minDepth;
    ::ll::TypedStorage<4, 4, float>                                   maxDepth;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewportInfo& operator=(ViewportInfo const&);
};

} // namespace mce
