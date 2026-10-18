#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace npc::_ActionType {

#if defined(LL_PLAT_A) // @header-generator platform
enum Enum : uchar {
    URL     = 0,
    COMMAND = 1,
    INVALID = 2,
#else // @header-generator platform
enum class Enum : uchar {
    Url     = 0,
    Command = 1,
    Invalid = 2,
#endif // @header-generator platform
};

}
