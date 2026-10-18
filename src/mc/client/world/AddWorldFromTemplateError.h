#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
enum class AddWorldFromTemplateError : uchar {
    IncorrectWorldId = 0,
    MissingTemplate  = 1,
    LoadingError     = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class AddWorldFromTemplateError : uchar {
    IncorrectWorldId = 0,
    MissingTemplate  = 1,
    LoadingError     = 2,
};
#else // @header-generator platform
enum class AddWorldFromTemplateError : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
