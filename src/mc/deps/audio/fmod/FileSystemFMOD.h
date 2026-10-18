#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class FMODFileTracker;
// clang-format on

class FileSystemFMOD {
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<FMODFileTracker>& fileTracker();
    // NOLINTEND
};
#else // @header-generator platform
class FileSystemFMOD {};
#endif // @header-generator platform
