#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_graph/BindFramebufferDepth.h"

// auto generated forward declare list
// clang-format off
namespace dragon::framerenderer { class RenderContext; }
// clang-format on

namespace dragon::framerenderer::drawutils {

struct DepthStencilClear {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::dragon::framegraph::dependency::BindFramebufferDepth<dragon::framerenderer::RenderContext> const&> mFramebufferAttachment;
    ::ll::TypedStorage<4, 4, float> mDepthClear;
    ::ll::TypedStorage<1, 1, uchar> mStencilClear;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    DepthStencilClear& operator=(DepthStencilClear const&);
    DepthStencilClear(DepthStencilClear const&);
    DepthStencilClear();
};

} // namespace dragon::framerenderer::drawutils
