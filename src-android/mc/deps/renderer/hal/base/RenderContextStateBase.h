#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/interface/BlendStateDescription.h"
#include "mc/deps/renderer/ViewportInfo.h"
#include "mc/deps/renderer/hal/interface/DepthStencilStateDescription.h"
#include "mc/deps/renderer/hal/interface/RasterizerStateDescription.h"
#include "mc/deps/renderer/hal/interface/SamplerStateDescription.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderTargetState; }
namespace mce { class TextureBase; }
// clang-format on

namespace mce {

class RenderContextStateBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 8>                                        blendStateDescription;
    ::ll::TypedStorage<4, 24, ::mce::DepthStencilStateDescription>    depthStencilStateDescription;
    ::ll::UntypedStorage<4, 108>                                      rasterizerStateDescription;
    ::ll::UntypedStorage<4, 0>                                        samplerStateDescription;
    ::ll::TypedStorage<1, 8, bool[8]>                                 textureUnitActive;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, int, (glm::qualifier)0>>  currentScissor;
    ::ll::TypedStorage<4, 24, ::mce::ViewportInfo>                    currentViewport;
    ::ll::TypedStorage<1, 8, bool[8]>                                 initializedSamplerState;
    ::ll::TypedStorage<8, 64, std::array<const mce::TextureBase*, 8>> lastBoundTexture;
    ::ll::TypedStorage<8, 8, ::mce::RenderTargetState*>               renderTargetState;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderContextStateBase();

    MCNAPI void removeIfBound(::mce::TextureBase const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace mce
