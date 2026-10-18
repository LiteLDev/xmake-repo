#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace flighting {

#if defined(LL_PLAT_A) // @header-generator platform
enum class TagType : uint {
    Configuration = 0,
    Treatment     = 1,
    None          = 2,
};
#else // @header-generator platform
enum class TagType : uint {};
#endif // @header-generator platform

}
