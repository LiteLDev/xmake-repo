#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class CommitFilterOptions : uchar {
    Protocol = 0,
    All      = 1,
    Main     = 2,
};
#else // @header-generator platform
enum class CommitFilterOptions : uchar {};
#endif // @header-generator platform

}
