#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/deps/minecraft_renderer/resources/ResourceServiceRenderContext.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce { class RenderContext; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/deps/minecraft_renderer/resources/ResourceServiceRenderContext.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class TextureResourceServiceContext : public ::mce::ResourceServiceRenderContext {
public:
    // prevent constructor by default
    TextureResourceServiceContext& operator=(TextureResourceServiceContext const&);
    TextureResourceServiceContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TextureResourceServiceContext(::mce::RenderContext&);

    MCNAPI ::mce::CheckedResourceService<dragon::ResolvedTextureResource>* getDragonTextureResourceService();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::RenderContext&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class TextureResourceServiceContext : public ::mce::ResourceServiceRenderContext {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::mce::CheckedResourceService<::dragon::ResolvedTextureResource>* getDragonTextureResourceService();
    // NOLINTEND
};
#else // @header-generator platform
class TextureResourceServiceContext {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
