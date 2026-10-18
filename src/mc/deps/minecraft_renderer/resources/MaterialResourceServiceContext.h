#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/deps/minecraft_renderer/resources/ResourceServiceRenderContext.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedMaterialResource; }
namespace mce { class RenderContext; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class MaterialResourceServiceContext : public ::mce::ResourceServiceRenderContext {
public:
    // prevent constructor by default
    MaterialResourceServiceContext();
};
#else // @header-generator platform
class MaterialResourceServiceContext {};
#endif // @header-generator platform

} // namespace mce
