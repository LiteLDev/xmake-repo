#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class EducationWorldType : uchar {
    Default            = 0,
    HasQuizDeprecated  = 1,
    SinglePlayerLesson = 2,
    MultiplayerLesson  = 4,
    AnyLesson          = 6,
};
#endif // @header-generator platform
