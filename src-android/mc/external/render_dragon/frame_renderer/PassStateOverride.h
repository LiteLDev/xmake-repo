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

namespace dragon::framerenderer {

struct PassStateOverride {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, std::optional<dragon::materials::definition::BlendMode>>   mBlendMode;
    ::ll::TypedStorage<1, 2, std::optional<dragon::rendering::ColorWriteMask>>          mColorWriteMask;
    ::ll::TypedStorage<4, 8, std::optional<dragon::rendering::CullMode>>                mCullMode;
    ::ll::TypedStorage<1, 4, std::optional<dragon::rendering::DepthState>>              mDepthState;
    ::ll::TypedStorage<4, 8, std::optional<dragon::rendering::PrimitiveType>>           mPrimitiveType;
    ::ll::TypedStorage<4, 24, std::optional<dragon::rendering::ScissorTestState>>       mScissorTestState;
    ::ll::TypedStorage<4, 16, std::optional<dragon::rendering::DepthBiasState>>         mDepthBiasState;
    ::ll::TypedStorage<4, 20, std::optional<dragon::rendering::StencilFaceDescription>> mFrontFaceStencil;
    ::ll::TypedStorage<4, 20, std::optional<dragon::rendering::StencilFaceDescription>> mBackFaceStencil;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                                       mUseStencils;
    ::ll::TypedStorage<1, 2, std::optional<uchar>>                                      mStencilRef;
    ::ll::TypedStorage<1, 2, std::optional<uchar>>                                      mStencilMask;
    // NOLINTEND
};

} // namespace dragon::framerenderer
