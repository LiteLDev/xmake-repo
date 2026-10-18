#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::mesh {

#if defined(LL_PLAT_A) // @header-generator platform
enum class IndexSize : uchar {
    Bytes16 = 0,
    Bytes32 = 1,
};
#else // @header-generator platform
enum class IndexSize : uchar {};
#endif // @header-generator platform

}
