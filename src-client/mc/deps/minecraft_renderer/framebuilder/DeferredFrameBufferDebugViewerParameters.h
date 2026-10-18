#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/DeferredFrameBufferOptions.h"
#include "mc/external/render_dragon/frame_renderer/modules/BufferDebugViewerParameters.h"

namespace mce::framebuilder {

struct DeferredFrameBufferDebugViewerParameters {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, ::mce::framebuilder::DeferredFrameBufferOptions> mMode;
    ::ll::TypedStorage<4, 20, ::dragon::framerenderer::modules::BufferDebugViewerParameters> mBufferDebugViewerParameters;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredFrameBufferDebugViewerParameters& operator=(DeferredFrameBufferDebugViewerParameters const&);
};

} // namespace mce::framebuilder
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
