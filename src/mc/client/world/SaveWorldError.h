#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
enum class SaveWorldError : uchar {
    IncorrectWorldId                        = 0,
    UnableToCreateWorldDirectoryPath        = 1,
    UnableToCreateResourcePackDirectoryPath = 2,
    UnableToCreateBehaviorDirectoryPath     = 3,
    InsufficientDiskSpace                   = 4,
    UnknownError                            = 5,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class SaveWorldError : uchar {
    IncorrectWorldId                        = 0,
    UnableToCreateWorldDirectoryPath        = 1,
    UnableToCreateResourcePackDirectoryPath = 2,
    UnableToCreateBehaviorDirectoryPath     = 3,
    InsufficientDiskSpace                   = 4,
    UnknownError                            = 5,
};
#else // @header-generator platform
enum class SaveWorldError : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
