#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class EducationWorldType : uchar {
    Default            = 0,
    HasQuiz_Deprecated = 1,
    SinglePlayerLesson = 2,
    MultiplayerLesson  = 4,
    AnyLesson          = 6,
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
