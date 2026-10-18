#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::ZipUtils {

enum class UnzipResult : int {
#if defined(LL_PLAT_A) // @header-generator platform
    OK                  = 0,
#else // @header-generator platform
    Ok                  = 0,
#endif // @header-generator platform
    UnzipError          = 1,
    ParamError          = 2,
    BadZipFile          = 3,
    InternalError       = 4,
    CRCError            = 5,
    DirectoryDepthError = 6,
};

}
