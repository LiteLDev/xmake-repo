#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

enum class ItemDescriptorType : uchar {
    Empty    = 0,
    ItemName = 1,
    Molang   = 2,
    ItemTag  = 3,
};

}
