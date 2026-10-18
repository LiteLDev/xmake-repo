#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::mesh {

enum class VertexFieldType : uchar {
    Unknown = 0,
    SInt8   = 1,
    UInt8   = 2,
    SInt16  = 3,
    UInt16  = 4,
    SInt32  = 5,
    UInt32  = 6,
    Half    = 7,
    Float   = 8,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
