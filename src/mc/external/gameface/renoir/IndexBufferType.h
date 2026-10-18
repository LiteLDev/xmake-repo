#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
enum IndexBufferType : uint {
    IBT_U8    = 0,
    IBT_U16   = 1,
    IBT_U32   = 2,
    IBT_Count = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class IndexBufferType : int {
    U8    = 0,
    U16   = 1,
    U32   = 2,
    Count = 3,
};
#else // @header-generator platform
enum class IndexBufferType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
