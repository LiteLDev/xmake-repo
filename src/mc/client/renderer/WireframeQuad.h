#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct WireframeQuad {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 48, std::array<Vec3, 4>> mQuad;
    ::ll::TypedStorage<4, 4, int>                  mColor;
    // NOLINTEND
};
#else // @header-generator platform
struct WireframeQuad {};
#endif // @header-generator platform
