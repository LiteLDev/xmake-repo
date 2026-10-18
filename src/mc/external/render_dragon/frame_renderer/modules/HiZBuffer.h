#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/frame_graph/AbstractResource.h"

// auto generated forward declare list
// clang-format off
namespace dragon::framerenderer { class RenderContext; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer::modules::postfx {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct HiZBuffer {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::modules::postfx
