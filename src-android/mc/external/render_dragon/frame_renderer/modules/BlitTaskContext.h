#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/math/Rect.h"
#include "mc/external/render_dragon/frame_renderer/systems/StateFlagPreparedDraws.h"

namespace dragon::framerenderer::modules {

struct BlitTaskContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 8>                                                  mViewportRect;
    ::ll::TypedStorage<8, 120, ::dragon::framerenderer::StateFlagPreparedDraws> mStateFlagPreparedDraws;
    // NOLINTEND
};

} // namespace dragon::framerenderer::modules
