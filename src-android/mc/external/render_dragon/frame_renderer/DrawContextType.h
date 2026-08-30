#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_object/components/Transform.h"
#include "mc/external/render_dragon/frame_renderer/DrawContextBaseType.h"

namespace dragon::framerenderer::drawutils {

struct DrawContextType : public ::dragon::framerenderer::drawutils::DrawContextBaseType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::dragon::frameobject::components::Transform> mTr;
    // NOLINTEND
};

} // namespace dragon::framerenderer::drawutils
