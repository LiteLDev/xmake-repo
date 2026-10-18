#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_graph/BindFramebufferDepth.h"

// auto generated forward declare list
// clang-format off
namespace dragon::framerenderer { class RenderContext; }
// clang-format on

namespace dragon::framerenderer::drawutils {

struct DepthClear {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::dragon::framegraph::dependency::BindFramebufferDepth<dragon::framerenderer::RenderContext> const&> mFramebufferAttachment;
    ::ll::TypedStorage<4, 4, float> mDepthClear;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    DepthClear& operator=(DepthClear const&);
    DepthClear(DepthClear const&);
    DepthClear();
};

} // namespace dragon::framerenderer::drawutils
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
