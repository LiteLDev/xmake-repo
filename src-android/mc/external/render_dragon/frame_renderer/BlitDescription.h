#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/BlitDescriptionTarget.h"

namespace dragon::framerenderer::drawutils {

struct BlitDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::dragon::framerenderer::drawutils::BlitDescriptionTarget> mSource;
    ::ll::TypedStorage<8, 56, ::dragon::framerenderer::drawutils::BlitDescriptionTarget> mTarget;
    ::ll::TypedStorage<2, 6, std::optional<glm::vec<2, ushort, (glm::qualifier)0>>>      mArea;
    // NOLINTEND
};

} // namespace dragon::framerenderer::drawutils
