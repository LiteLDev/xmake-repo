#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"

namespace Scripting::RenderHelper {

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

} // namespace Scripting::RenderHelper
