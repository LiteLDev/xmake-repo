#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/memory/SynchronizedPartitionedAllocator.h"
#include "mc/external/render_dragon/mesh/VertexFormat.h"

// auto generated forward declare list
// clang-format off
namespace dragon::mesh { class VertexBufferResourceManager; }
namespace dragon::mesh { struct VertexBufferAllocator; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::mesh {

#if defined(LL_PLAT_A) // @header-generator platform
class VertexSpanContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::dragon::mesh::VertexBufferResourceManager&> mVbResourceManager;
    ::ll::UntypedStorage<8, 80>                                            mPartitionedAllocator;
    ::ll::TypedStorage<8, 136, ::dragon::mesh::VertexFormat>               mBytesDecl;
    // NOLINTEND

public:
    // prevent constructor by default
    VertexSpanContext& operator=(VertexSpanContext const&);
    VertexSpanContext(VertexSpanContext const&);
    VertexSpanContext();
};
#else // @header-generator platform
class VertexSpanContext {};
#endif // @header-generator platform

} // namespace dragon::mesh
