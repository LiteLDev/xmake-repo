#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/DrawContextType.h"
#include "mc/external/render_dragon/materials/MaterialUniformOverrides.h"

namespace dragon::framerenderer::drawutils {

struct DrawContextWithUniformsType : public ::dragon::framerenderer::drawutils::DrawContextType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::dragon::materials::MaterialUniformOverrides> mUniformOverrides;
    // NOLINTEND
};

} // namespace dragon::framerenderer::drawutils
