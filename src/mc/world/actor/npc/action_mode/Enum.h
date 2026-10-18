#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace npc::_ActionMode {

#if defined(LL_PLAT_A) // @header-generator platform
enum Enum : uchar {
    BUTTON   = 0,
    ON_CLOSE = 1,
    ON_OPEN  = 2,
#else // @header-generator platform
enum class Enum : uchar {
    Button  = 0,
    OnClose = 1,
    OnOpen  = 2,
#endif // @header-generator platform
};

}
