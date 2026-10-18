#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
enum ImageProperties : uint {
    // bitfield representation
    IMP_None                = 0,
    IMP_HasMips             = 1u << 1,
    IMP_Premultiplied       = 1u << 2,
    IMP_Dynamic             = 1u << 3,
    IMP_XBDDS               = 1u << 4,
    IMP_FilteringPoint      = 1u << 5,
    IMP_InvertAlpha         = 1u << 6,
    IMP_ClearOnInit         = 1u << 7,
    IMP_IgnoreInStats       = 1u << 8,
    IMP_WillGetTextureBytes = 1u << 9,
    IMP_AssumeAlphaOne      = 1u << 10,
    IMP_LinearColorValues   = 1u << 11,
    IMP_RenderSurface       = 1u << 12,
    IMP_UserRTPixelFormat   = 1u << 13,
    IMP_NeedsDepthStencil   = 1u << 14,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ImageProperties : int {
    // bitfield representation
    None                = 0,
    HasMips             = 1 << 1,
    Premultiplied       = 1 << 2,
    Dynamic             = 1 << 3,
    Xbdds               = 1 << 4,
    FilteringPoint      = 1 << 5,
    InvertAlpha         = 1 << 6,
    ClearOnInit         = 1 << 7,
    IgnoreInStats       = 1 << 8,
    WillGetTextureBytes = 1 << 9,
    AssumeAlphaOne      = 1 << 10,
    LinearColorValues   = 1 << 11,
    RenderSurface       = 1 << 12,
    UserRTPixelFormat   = 1 << 13,
    NeedsDepthStencil   = 1 << 14,
};
#else // @header-generator platform
enum class ImageProperties : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
