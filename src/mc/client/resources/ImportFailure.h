#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ImportFailure : int {
    UnknownFileType             = 0,
    Duplicate                   = 1,
    MalformedZip                = 2,
    Default                     = 3,
    Incompatible                = 4,
    Cancelled                   = 5,
    UnknownPackType             = 6,
    NoFilenamesFound            = 7,
    UnableToDetermineRootForZip = 8,
    NoRootDirectory             = 9,
    NoPackInRepo                = 10,
};
#else // @header-generator platform
enum class ImportFailure : int {};
#endif // @header-generator platform
