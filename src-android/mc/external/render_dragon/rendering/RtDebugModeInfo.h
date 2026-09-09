#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/RtDebugMode.h"
#include "mc/external/render_dragon/frame_renderer/modules/BufferDebugBlitMode.h"
#include "mc/external/render_dragon/rendering/RtDebugType.h"

namespace dragon::rendering {

struct RtDebugModeInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::string_view>                                             mModeName;
    ::ll::TypedStorage<4, 4, ::dragon::rendering::RtDebugType>                              mDebugType;
    ::ll::TypedStorage<4, 4, uint>                                                          mResourceIdx;
    ::ll::TypedStorage<4, 4, ::dragon::framerenderer::modules::postfx::BufferDebugBlitMode> mDebugBlitMode;
    ::ll::TypedStorage<1, 1, bool>                                                          mEnableDenoising;
    ::ll::TypedStorage<4, 4, ::bgfx::RtDebugMode>                                           mBackendRtDebugMode;
    // NOLINTEND
};

} // namespace dragon::rendering
