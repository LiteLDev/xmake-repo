#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct ResolvedAccelerationStructureResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer::details {

#if defined(LL_PLAT_A) // @header-generator platform
class BgfxAccelerationStructurePoolImplementation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mAccelerationStructureResourceService;
    // NOLINTEND
};
#else // @header-generator platform
class BgfxAccelerationStructurePoolImplementation {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::details
