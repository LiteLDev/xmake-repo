#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/math/Rect.h"
#include "mc/external/render_dragon/rendering/BufferClearFlags.h"

namespace dragon::framerenderer::modules {

struct ClearTaskContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 8>                                      mViewportRect;
    ::ll::TypedStorage<2, 2, ::dragon::rendering::BufferClearFlags> mBufferClearMask;
    // NOLINTEND
};

} // namespace dragon::framerenderer::modules
