#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IRenderContext.h"
#include "mc/client/gui/geometry_atlas/RenderContextArgs.h"

namespace GeometryAtlas {

class RenderContextImpl : public ::GeometryAtlas::IRenderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::GeometryAtlas::RenderContextArgs> mArgs;
    // NOLINTEND
};

} // namespace GeometryAtlas
