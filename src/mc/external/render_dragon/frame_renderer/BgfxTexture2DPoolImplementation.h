#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer::details {

#if defined(LL_PLAT_A) // @header-generator platform
class BgfxTexture2DPoolImplementation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mTextureResourceService;
    // NOLINTEND
};
#else // @header-generator platform
class BgfxTexture2DPoolImplementation {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::details
