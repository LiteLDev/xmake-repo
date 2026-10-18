#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules::postfx {

#if defined(LL_PLAT_A) // @header-generator platform
enum class BufferDebugBlitMode : int {
    Color           = 0,
    Alpha           = 1,
    Normal          = 2,
    NormalSigned    = 3,
    MotionVectors   = 4,
    MotionVectorsBA = 5,
    Chroma          = 6,
    Position        = 7,
    Raw             = 8,
    Red             = 9,
    Green           = 10,
    Blue            = 11,
    RedSigned       = 12,
    Luminance       = 13,
    VanillaAmbient  = 14,
    Depth           = 15,
    Metalness       = 16,
    Subsurface      = 17,
    BlockLightColor = 18,
    Roughness       = 19,
    Emissive        = 20,
    HiZ             = 21,
    Count           = 22,
};
#else // @header-generator platform
enum class BufferDebugBlitMode : int {};
#endif // @header-generator platform

}
