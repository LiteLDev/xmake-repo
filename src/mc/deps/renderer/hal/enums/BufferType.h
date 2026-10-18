#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum class BufferType : uchar {
    VertexBuffer      = 0,
    IndexBuffer       = 1,
    MaxBufferTypes    = 2,
    UnknownBufferType = 3,
};
#else // @header-generator platform
enum class BufferType : uchar {};
#endif // @header-generator platform

}
