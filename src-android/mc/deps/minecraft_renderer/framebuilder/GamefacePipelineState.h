#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/interface/BlendStateDescription.h"
#include "mc/deps/minecraft_renderer/framebuilder/GamefaceRenderTarget.h"
#include "mc/deps/renderer/hal/interface/DepthStencilStateDescription.h"

namespace mce::framebuilder {

struct GamefacePipelineState {
public:
    // GamefacePipelineState inner types define
    enum class Shader : int {
        Standard             = 0,
        StandardRare         = 1,
        Stencil              = 2,
        StencilRare          = 3,
        StencilPath          = 4,
        ClearQuad            = 5,
        Renoir               = 6,
        Path                 = 7,
        TexturesWithColorMix = 8,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>                                     shader;
    ::ll::UntypedStorage<8, 104>                                   renderTarget;
    ::ll::UntypedStorage<1, 8>                                     blendStateDesc;
    ::ll::TypedStorage<4, 24, ::mce::DepthStencilStateDescription> depthStateDesc;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~GamefacePipelineState();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce::framebuilder
