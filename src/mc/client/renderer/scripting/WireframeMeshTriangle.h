#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting::RenderHelper {

#if defined(LL_PLAT_A) // @header-generator platform
struct WireframeMeshTriangle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                    v0;
    ::ll::TypedStorage<4, 12, ::Vec3>                    v1;
    ::ll::TypedStorage<4, 12, ::Vec3>                    v2;
    ::ll::TypedStorage<4, 20, std::optional<mce::Color>> color;
    // NOLINTEND
};
#else // @header-generator platform
struct WireframeMeshTriangle {};
#endif // @header-generator platform

} // namespace Scripting::RenderHelper
