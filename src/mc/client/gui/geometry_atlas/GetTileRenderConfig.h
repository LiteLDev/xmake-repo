#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace dragon::rendering { struct BufferClear; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
struct GetTileRenderConfig {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct GetTileRenderConfig {
public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::dragon::rendering::BufferClear const& CLEAR();

    MCAPI static ::glm::mat4x4 const& PROJ();
    // NOLINTEND
};
#else // @header-generator platform
struct GetTileRenderConfig {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas
