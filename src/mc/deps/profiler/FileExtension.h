#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

enum class FileExtension : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    HTML = 0,
    CSV  = 1,
    BOTH = 2,
#else // @header-generator platform
    Html = 0,
    Csv  = 1,
    Both = 2,
#endif // @header-generator platform
};

}
