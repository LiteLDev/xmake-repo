#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

enum class JSONType : int {
    NULL_TYPE = 0,
    BOOLEAN   = 1,
    NUMBER    = 2,
    STRING    = 3,
    ARRAY     = 4,
    OBJECT    = 5,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
