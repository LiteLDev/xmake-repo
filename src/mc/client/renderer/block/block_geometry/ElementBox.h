#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/block_geometry/Face.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/block_geometry/Face.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace BlockGeometry {

#if defined(LL_PLAT_A) // @header-generator platform
struct ElementBox {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mOrigin;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mSize;
    ::ll::TypedStorage<8, 336, std::array<BlockGeometry::Face, 6>>     mFaces;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ElementBox {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec3>                             mOrigin;
    ::ll::TypedStorage<4, 12, ::glm::vec3>                             mSize;
    ::ll::TypedStorage<8, 384, ::std::array<::BlockGeometry::Face, 6>> mFaces;
    // NOLINTEND
};
#else // @header-generator platform
struct ElementBox {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace BlockGeometry
