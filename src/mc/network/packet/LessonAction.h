#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class LessonAction : uchar {
#else // @header-generator platform
enum class LessonAction : schar {
#endif // @header-generator platform
    Start    = 0,
    Complete = 1,
    Restart  = 2,
};
