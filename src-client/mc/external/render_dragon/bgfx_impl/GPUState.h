#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/bgfx_impl/RenderStateFlags.h"
#include "mc/external/render_dragon/rendering/DepthBiasState.h"
#include "mc/external/render_dragon/rendering/ScissorTestState.h"

namespace dragon::bgfximpl {

struct GPUState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::dragon::bgfximpl::RenderStateFlags>  mStateFlags;
    ::ll::TypedStorage<4, 4, uint>                                   mBackStencilState;
    ::ll::TypedStorage<4, 4, uint>                                   mFrontStencilState;
    ::ll::TypedStorage<4, 20, ::dragon::rendering::ScissorTestState> mScissorTestState;
    ::ll::TypedStorage<4, 12, ::dragon::rendering::DepthBiasState>   mDepthBiasState;
    // NOLINTEND

public:
    // prevent constructor by default
    GPUState& operator=(GPUState const&);
    GPUState();
};

} // namespace dragon::bgfximpl
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
