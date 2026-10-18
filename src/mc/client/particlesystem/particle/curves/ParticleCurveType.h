#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ParticleSystem {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ParticleCurveType : int {
    Invalid     = -1,
    Linear      = 0,
    Bezier      = 1,
    CatmullRom  = 2,
    BezierChain = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ParticleCurveType : int {
    Invalid     = -1,
    Linear      = 0,
    Bezier      = 1,
    CatmullRom  = 2,
    BezierChain = 3,
};
#else // @header-generator platform
enum class ParticleCurveType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
