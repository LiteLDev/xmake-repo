#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EDUScreenHelpers {

#if defined(LL_PLAT_A) // @header-generator platform
enum class TemplateType : uchar {
    Local   = 0,
    Invalid = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class TemplateType : uchar {
    Local   = 0,
    Invalid = 1,
};
#else // @header-generator platform
enum class TemplateType : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
