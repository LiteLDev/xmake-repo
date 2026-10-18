#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace DeclarativeBlockTessellation {

#if defined(LL_PLAT_A) // @header-generator platform
struct UVMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2> mStart;
    ::ll::TypedStorage<4, 8, ::Vec2> mEnd;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct UVMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2> mStart;
    ::ll::TypedStorage<4, 8, ::Vec2> mEnd;
    // NOLINTEND
};
#else // @header-generator platform
struct UVMap {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace DeclarativeBlockTessellation
