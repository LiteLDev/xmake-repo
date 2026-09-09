#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/deps/minecraft_renderer/resources/ResourceServiceRenderContext.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct ResolvedIndexBufferResource; }
namespace dragon { struct ResolvedVertexBufferResource; }
namespace mce { class RenderContext; }
// clang-format on

namespace mce {

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

} // namespace mce
