#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CatalogRequestType : int {
    _Unknown = 0,
    Search   = 1,
    Hydrate  = 2,
    Review   = 3,
    Image    = 4,
};
