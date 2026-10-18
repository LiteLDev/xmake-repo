#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/VertexBufferHandle.h"

namespace bgfx {

struct InstanceDataBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uchar*>                     data;
    ::ll::TypedStorage<4, 4, uint>                       size;
    ::ll::TypedStorage<4, 4, uint>                       offset;
    ::ll::TypedStorage<4, 4, uint>                       num;
    ::ll::TypedStorage<2, 2, ushort>                     stride;
    ::ll::TypedStorage<2, 2, ::bgfx::VertexBufferHandle> handle;
    // NOLINTEND
};

} // namespace bgfx
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
