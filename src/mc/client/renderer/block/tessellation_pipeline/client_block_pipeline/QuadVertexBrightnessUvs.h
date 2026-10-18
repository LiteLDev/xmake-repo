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
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct QuadVertexBrightnessUvs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 32, std::array<Vec2, 4>> mUvs;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct QuadVertexBrightnessUvs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 32, ::std::array<::Vec2, 4>> mUvs;
    // NOLINTEND
};
#else // @header-generator platform
struct QuadVertexBrightnessUvs {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
