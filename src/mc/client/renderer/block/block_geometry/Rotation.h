#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/block_geometry/Axis.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/block_geometry/Axis.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace BlockGeometry {

#if defined(LL_PLAT_A) // @header-generator platform
struct Rotation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> origin;
    ::ll::TypedStorage<4, 4, ::BlockGeometry::Axis>                    axis;
    ::ll::TypedStorage<4, 4, float>                                    angle;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct Rotation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec3>          origin;
    ::ll::TypedStorage<4, 4, ::BlockGeometry::Axis> axis;
    ::ll::TypedStorage<4, 4, float>                 angle;
    // NOLINTEND
};
#else // @header-generator platform
struct Rotation {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace BlockGeometry
