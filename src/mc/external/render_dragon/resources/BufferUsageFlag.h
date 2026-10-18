#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon {

#if defined(LL_PLAT_A) // @header-generator platform
enum class BufferUsageFlag : uchar {
    ShaderResource  = 0,
    UnorderedAccess = 1,
    Count           = 2,
};
#else // @header-generator platform
enum class BufferUsageFlag : uchar {};
#endif // @header-generator platform

}
