#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/deps/minecraft_renderer/resources/ResourceServiceRenderContext.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct ResolvedIndexBufferResource; }
namespace dragon { struct ResolvedVertexBufferResource; }
namespace mce { class RenderContext; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class BufferResourceServiceContext : public ::mce::ResourceServiceRenderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mFrameBuilderEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    BufferResourceServiceContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BufferResourceServiceContext(::mce::RenderContext&);

    MCNAPI ::mce::CheckedResourceService<dragon::ResolvedIndexBufferResource>*
    getDragonIndexBufferResourceService() const;

    MCNAPI ::mce::CheckedResourceService<dragon::ResolvedVertexBufferResource>*
    getDragonVertexBufferResourceService() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::RenderContext&);
    // NOLINTEND
};
#else // @header-generator platform
class BufferResourceServiceContext {};
#endif // @header-generator platform

} // namespace mce
