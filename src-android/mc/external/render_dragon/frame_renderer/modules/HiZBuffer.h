#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_graph/AbstractResource.h"

// auto generated forward declare list
// clang-format off
namespace dragon::framerenderer { class RenderContext; }
// clang-format on

namespace dragon::framerenderer::modules::postfx {

struct HiZBuffer {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::dragon::framegraph::detail::AbstractResource<dragon::framerenderer::RenderContext> const*> mBuffer;
    ::ll::TypedStorage<2, 2, ushort> mViewportWidth;
    ::ll::TypedStorage<2, 2, ushort> mViewportHeight;
    ::ll::TypedStorage<2, 2, ushort> mBufferWidth;
    ::ll::TypedStorage<2, 2, ushort> mBufferHeight;
    ::ll::TypedStorage<2, 2, ushort> mMips;
    // clang-format on
    // NOLINTEND
};

} // namespace dragon::framerenderer::modules::postfx
