#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline::ItemTransforms {

#if defined(LL_PLAT_A) // @header-generator platform
enum Type : uint {
    GUI                   = 0,
    FIRSTPERSON_RIGHTHAND = 1,
    FIRSTPERSON_LEFTHAND  = 2,
    THIRDPERSON_RIGHTHAND = 3,
    THIRDPERSON_LEFTHAND  = 4,
    GROUND                = 5,
    FIXED                 = 6,
    HEAD                  = 7,
    EMBEDDED              = 8,
    SHELF                 = 9,
    MAX                   = 10,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class Type : uint {
    Gui                  = 0,
    FirstpersonRighthand = 1,
    FirstpersonLefthand  = 2,
    ThirdpersonRighthand = 3,
    ThirdpersonLefthand  = 4,
    Ground               = 5,
    Fixed                = 6,
    Head                 = 7,
    Embedded             = 8,
    Shelf                = 9,
    Max                  = 10,
};
#else // @header-generator platform
enum class Type : uint {};
#endif // @header-generator platform
#endif // @header-generator platform

}
