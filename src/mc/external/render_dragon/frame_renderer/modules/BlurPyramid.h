#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core_graphics/CoordinateContext.h"
#include "mc/deps/core_graphics/Resolution.h"
#include "mc/deps/core_graphics/Viewport.h"
#include "mc/external/render_dragon/frame_graph/BindFramebufferColor.h"
#include "mc/external/render_dragon/frame_graph/Declarator.h"

// auto generated forward declare list
// clang-format off
namespace dragon::framerenderer { class RenderContext; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace dragon::framerenderer::modules::postfx {

struct BlurPyramid {
public:
    // BlurPyramid inner types declare
    // clang-format off
    struct Buffer;
    // clang-format on

    // BlurPyramid inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Buffer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 4>  mResourceResolution;
        ::ll::UntypedStorage<8, 32> mFrameBuffer;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<dragon::framerenderer::modules::postfx::BlurPyramid::Buffer>> mBuffers;
    // NOLINTEND

public:
    // prevent constructor by default
    BlurPyramid& operator=(BlurPyramid const&);
    BlurPyramid(BlurPyramid const&);
    BlurPyramid();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlurPyramid(::dragon::framegraph::Declarator<dragon::framerenderer::RenderContext>&, uchar, ushort, ushort);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dragon::framegraph::Declarator<dragon::framerenderer::RenderContext>&, uchar, ushort, ushort);
    // NOLINTEND
#else // @header-generator platform
    struct Buffer {};
#endif // @header-generator platform
};

} // namespace dragon::framerenderer::modules::postfx
