#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/ShaderBufferHandle.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon {

#if defined(LL_PLAT_A) // @header-generator platform
struct ResolvedShaderBufferResource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::bgfx::ShaderBufferHandle> mResource;
    ::ll::TypedStorage<4, 4, uint>                       mCount;
    ::ll::TypedStorage<4, 4, uint>                       mStride;
    // NOLINTEND
};
#else // @header-generator platform
struct ResolvedShaderBufferResource {};
#endif // @header-generator platform

} // namespace dragon
