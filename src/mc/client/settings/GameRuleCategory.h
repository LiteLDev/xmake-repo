#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Settings::GameRulesUtil {

#if defined(LL_PLAT_A) // @header-generator platform
enum class GameRuleCategory : uchar {
    None        = 0,
    WorldOption = 1,
    Cheat       = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class GameRuleCategory : uchar {
    None        = 0,
    WorldOption = 1,
    Cheat       = 2,
};
#else // @header-generator platform
enum class GameRuleCategory : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
