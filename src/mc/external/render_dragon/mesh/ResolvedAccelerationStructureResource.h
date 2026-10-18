#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/AccelerationStructureHandle.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon {

#if defined(LL_PLAT_A) // @header-generator platform
struct ResolvedAccelerationStructureResource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::bgfx::AccelerationStructureHandle> mResource;
    // NOLINTEND
};
#else // @header-generator platform
struct ResolvedAccelerationStructureResource {};
#endif // @header-generator platform

} // namespace dragon
