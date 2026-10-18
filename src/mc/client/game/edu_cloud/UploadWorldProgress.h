#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EduCloud {

#if defined(LL_PLAT_A) // @header-generator platform
enum class UploadWorldProgress : int {
    Starting  = 0,
    Packaging = 1,
    Uploading = 2,
    Completed = 3,
};
#else // @header-generator platform
enum class UploadWorldProgress : int {};
#endif // @header-generator platform

}
