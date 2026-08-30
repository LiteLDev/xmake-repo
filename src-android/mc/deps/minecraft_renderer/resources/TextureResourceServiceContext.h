#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/deps/minecraft_renderer/resources/ResourceServiceRenderContext.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce { class RenderContext; }
// clang-format on

namespace mce {

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

} // namespace mce
