#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

class VertexPT {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> pos;
    ::ll::TypedStorage<4, 4, float>   u;
    ::ll::TypedStorage<4, 4, float>   v;
    // NOLINTEND
};
#else // @header-generator platform
class VertexPT {};
#endif // @header-generator platform
