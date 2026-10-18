#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LightPropagation {

#if defined(LL_PLAT_A) // @header-generator platform
struct Wall {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                                   absorption;
    ::ll::TypedStorage<1, 3, ::glm::vec<3, uchar, (glm::qualifier)0>> pos;
    // NOLINTEND
};
#else // @header-generator platform
struct Wall {};
#endif // @header-generator platform

} // namespace LightPropagation
