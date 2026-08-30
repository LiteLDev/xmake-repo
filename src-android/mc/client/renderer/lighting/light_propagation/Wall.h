#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LightPropagation {

struct Wall {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                                   absorption;
    ::ll::TypedStorage<1, 3, ::glm::vec<3, uchar, (glm::qualifier)0>> pos;
    // NOLINTEND
};

} // namespace LightPropagation
