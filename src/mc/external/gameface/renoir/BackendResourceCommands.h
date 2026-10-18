#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class BackendResourceCommands : int {
    WrapUserRT               = 0,
    CreateTexture            = 1,
    CreateTextureWithDataPtr = 2,
    CreateDSTexture          = 3,
    UpdateTexture            = 4,
    WrapUserTexture          = 5,
    CreateVertexBuffer       = 6,
    DestroyVertexBuffer      = 7,
    CreateIndexBuffer        = 8,
    DestroyIndexBuffer       = 9,
    DestroyTexture           = 10,
    DestroyDSTexture         = 11,
    CreateConstantBuffer     = 12,
    DestroyConstantBuffer    = 13,
    CreatePSO                = 14,
    DestroyPSO               = 15,
    CreateSampler            = 16,
    DestroySampler           = 17,
    SetDebugName             = 18,
    SetDSDebugName           = 19,
    SetVBODebugName          = 20,
    SetIBODebugName          = 21,
    SetPSODebugName          = 22,
    SetCBODebugName          = 23,
    SetSamplerDebugName      = 24,
    TransitionTextureState   = 25,
    CopyTextureToTexture     = 26,
    Count                    = 27,
};
#else // @header-generator platform
enum class BackendResourceCommands : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
