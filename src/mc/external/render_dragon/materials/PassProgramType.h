#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials {

#if defined(LL_PLAT_A) // @header-generator platform
enum class PassProgramType : int {
    VertexOnly        = 0,
    VertexAndFragment = 1,
    Compute           = 2,
};
#else // @header-generator platform
enum class PassProgramType : int {};
#endif // @header-generator platform

}
