#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

enum class MapType : uchar {
    MapRead             = 0,
    MapWrite            = 1,
    MapReadWrite        = 2,
    MapWriteDiscard     = 3,
    MapWriteNoOverwrite = 4,
    UnknownMapFlag      = 5,
};

}
