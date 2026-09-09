#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/memory/SynchronizedPartitionedAllocator.h"
#include "mc/external/render_dragon/mesh/VertexFormat.h"

// auto generated forward declare list
// clang-format off
namespace dragon::mesh { class VertexBufferResourceManager; }
namespace dragon::mesh { struct VertexBufferAllocator; }
// clang-format on

namespace dragon::mesh {

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

} // namespace dragon::mesh
