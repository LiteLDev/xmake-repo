#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_graph/BindFramebufferColor.h"

// auto generated forward declare list
// clang-format off
namespace dragon::framerenderer { class RenderContext; }
// clang-format on

namespace dragon::framerenderer::drawutils {

struct ColorClear {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::dragon::framegraph::dependency::BindFramebufferColor<dragon::framerenderer::RenderContext> const&> mFramebufferAttachment;
    ::ll::TypedStorage<4, 4, uint> mClearValue;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ColorClear& operator=(ColorClear const&);
    ColorClear(ColorClear const&);
    ColorClear();
};

} // namespace dragon::framerenderer::drawutils
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
