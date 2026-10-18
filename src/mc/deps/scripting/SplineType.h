#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::RenderHelper {

enum class SplineType : int {
    Line          = 0,
    HermiteSpline = 1,
};

}
#endif // @header-generator platform
