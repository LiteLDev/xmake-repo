#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

enum BackendResourceCommands : uint {
    BRC_WrapUserRT               = 0,
    BRC_CreateTexture            = 1,
    BRC_CreateTextureWithDataPtr = 2,
    BRC_CreateDSTexture          = 3,
    BRC_UpdateTexture            = 4,
    BRC_WrapUserTexture          = 5,
    BRC_CreateVertexBuffer       = 6,
    BRC_DestroyVertexBuffer      = 7,
    BRC_CreateIndexBuffer        = 8,
    BRC_DestroyIndexBuffer       = 9,
    BRC_DestroyTexture           = 10,
    BRC_DestroyDSTexture         = 11,
    BRC_CreateConstantBuffer     = 12,
    BRC_DestroyConstantBuffer    = 13,
    BRC_CreatePSO                = 14,
    BRC_DestroyPSO               = 15,
    BRC_CreateSampler            = 16,
    BRC_DestroySampler           = 17,
    BRC_SetDebugName             = 18,
    BRC_SetDSDebugName           = 19,
    BRC_SetVBODebugName          = 20,
    BRC_SetIBODebugName          = 21,
    BRC_SetPSODebugName          = 22,
    BRC_SetCBODebugName          = 23,
    BRC_SetSamplerDebugName      = 24,
    BRC_TransitionTextureState   = 25,
    BRC_CopyTextureToTexture     = 26,
    BRC_Count                    = 27,
};

}
