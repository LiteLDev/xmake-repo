#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services::layout::model {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ExperienceMode : int {
    Qa      = 0,
    Private = 1,
    Dev     = 2,
    Public  = 3,
};
#else // @header-generator platform
enum class ExperienceMode : int {};
#endif // @header-generator platform

}
