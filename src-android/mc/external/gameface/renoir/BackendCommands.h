#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

enum BackendCommands : uint {
    BC_SetPipelineState            = 0,
    BC_SetVSConstantBuffers        = 1,
    BC_SetPSConstantBuffers        = 2,
    BC_UpdateConstantBuffer        = 3,
    BC_SetVertexBuffer             = 4,
    BC_SetIndexBuffer              = 5,
    BC_DrawIndexed                 = 6,
    BC_DrawCustomEffect            = 7,
    BC_SetRenderTarget             = 8,
    BC_ClearRenderTarget           = 9,
    BC_SetScissorRect              = 10,
    BC_SetViewport                 = 11,
    BC_ResolveRenderTarget         = 12,
    BC_SetPSSamplers               = 13,
    BC_SetPSTextures               = 14,
    BC_SetStencilReference         = 15,
    BC_Draw                        = 16,
    BC_DrawInstanced               = 17,
    BC_DrawIndexedInstanced        = 18,
    BC_SetMultipleVertexBuffers    = 19,
    BC_SetMultipleRenderTargets    = 20,
    BC_ClearRenderTargetWithState  = 21,
    BC_PushMetadata                = 22,
    BC_PopMetadata                 = 23,
    BC_BeginRenderPass             = 24,
    BC_EndRenderPass               = 25,
    BC_TransitionTextureState      = 26,
    BC_TransitionDSTextureState    = 27,
    BC_ResolveAndCopyStencilRegion = 28,
    BC_Count                       = 29,
};

}
