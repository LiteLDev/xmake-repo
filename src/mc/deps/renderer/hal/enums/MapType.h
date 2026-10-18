#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum class MapType : uchar {
    MapRead             = 0,
    MapWrite            = 1,
    MapReadWrite        = 2,
    MapWriteDiscard     = 3,
    MapWriteNoOverwrite = 4,
    UnknownMapFlag      = 5,
};
#else // @header-generator platform
enum class MapType : uchar {};
#endif // @header-generator platform

}
