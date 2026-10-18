#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class WebviewInterfaceType : uchar {
    CodeBuilder     = 0,
    ImmersiveReader = 1,
    Count           = 2,
};
#else // @header-generator platform
enum class WebviewInterfaceType : uchar {};
#endif // @header-generator platform
