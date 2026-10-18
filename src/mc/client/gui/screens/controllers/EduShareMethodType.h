#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class EduShareMethodType : int {
    Teams           = 0,
    Clipboard       = 1,
    ShareByOS       = 2,
    EMail           = 3,
    GoogleClassroom = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class EduShareMethodType : int {
    Teams           = 0,
    Clipboard       = 1,
    ShareByOS       = 2,
    EMail           = 3,
    GoogleClassroom = 4,
};
#else // @header-generator platform
enum class EduShareMethodType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
