#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaBlockTessellation {

#if defined(LL_PLAT_A) // @header-generator platform
enum class PipelineType : int {
    World            = 0,
    SingleBlock      = 1,
    MaterialOverride = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class PipelineType : int {
    World            = 0,
    SingleBlock      = 1,
    MaterialOverride = 2,
};
#else // @header-generator platform
enum class PipelineType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
