#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiler::details::AnnotationFlags::Flag::Composite {

enum Value : uchar {
    RetailLiteAndBelow = 1,
    RetailPlusAndBelow = 3,
    DevAndBelow        = 7,
    VerboseAndBelow    = 15,
    TraceAndBelow      = 31,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
