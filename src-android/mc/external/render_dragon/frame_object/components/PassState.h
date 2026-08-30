#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/materials/definition/BlendMode.h"
#include "mc/external/render_dragon/rendering/ColorWriteMask.h"
#include "mc/external/render_dragon/rendering/CullMode.h"
#include "mc/external/render_dragon/rendering/DepthBiasState.h"
#include "mc/external/render_dragon/rendering/DepthState.h"
#include "mc/external/render_dragon/rendering/PrimitiveType.h"
#include "mc/external/render_dragon/rendering/ScissorTestState.h"
#include "mc/external/render_dragon/rendering/StencilFaceDescription.h"

namespace dragon::frameobject::components {

struct PassState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::dragon::materials::definition::BlendMode>   mBlendMode;
    ::ll::TypedStorage<1, 1, ::dragon::rendering::ColorWriteMask>          mColorWriteMask;
    ::ll::TypedStorage<4, 4, ::dragon::rendering::CullMode>                mCullMode;
    ::ll::TypedStorage<1, 3, ::dragon::rendering::DepthState>              mDepthState;
    ::ll::TypedStorage<4, 4, ::dragon::rendering::PrimitiveType>           mPrimitiveType;
    ::ll::TypedStorage<4, 20, ::dragon::rendering::ScissorTestState>       mScissorTestState;
    ::ll::TypedStorage<4, 12, ::dragon::rendering::DepthBiasState>         mDepthBiasState;
    ::ll::TypedStorage<4, 16, ::dragon::rendering::StencilFaceDescription> mFrontFaceStencil;
    ::ll::TypedStorage<4, 16, ::dragon::rendering::StencilFaceDescription> mBackFaceStencil;
    ::ll::TypedStorage<1, 1, bool>                                         mUseStencils;
    ::ll::TypedStorage<1, 1, uchar>                                        mStencilRef;
    ::ll::TypedStorage<1, 1, uchar>                                        mStencilMask;
    // NOLINTEND

public:
    // prevent constructor by default
    PassState& operator=(PassState const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PassState(::dragon::frameobject::components::PassState&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dragon::frameobject::components::PassState&&);
    // NOLINTEND
};

} // namespace dragon::frameobject::components
