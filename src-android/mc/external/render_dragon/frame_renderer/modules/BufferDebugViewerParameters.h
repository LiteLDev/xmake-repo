#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/modules/BufferDebugBlitMode.h"

namespace dragon::framerenderer::modules {

struct BufferDebugViewerParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::dragon::framerenderer::modules::postfx::BufferDebugBlitMode> mDebugBlitMode;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, int, (glm::qualifier)0>>                         mOffset;
    ::ll::TypedStorage<4, 4, float>                                                         mScale;
    ::ll::TypedStorage<1, 1, uchar>                                                         mTextureArrayIndex;
    ::ll::TypedStorage<1, 1, uchar>                                                         mVolumeIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    BufferDebugViewerParameters& operator=(BufferDebugViewerParameters const&);
    BufferDebugViewerParameters();
};

} // namespace dragon::framerenderer::modules
