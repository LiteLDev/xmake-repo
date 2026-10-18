#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EduCloud {

#if defined(LL_PLAT_A) // @header-generator platform
enum class CloudItemType : int {
    MCWorld = 0,
};
#else // @header-generator platform
enum class CloudItemType : int {};
#endif // @header-generator platform

}
