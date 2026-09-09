#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/memory/SynchronizedPartitionedAllocator.h"

// auto generated forward declare list
// clang-format off
namespace dragon::mesh { class IndexBufferResourceManager; }
namespace dragon::mesh { struct IndexBufferAllocator; }
// clang-format on

namespace dragon::mesh {

class IndexSpanContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::dragon::mesh::IndexBufferResourceManager&> mIbResourceManager;
    ::ll::UntypedStorage<8, 80>                                           mPartitionedAllocator;
    // NOLINTEND

public:
    // prevent constructor by default
    IndexSpanContext& operator=(IndexSpanContext const&);
    IndexSpanContext(IndexSpanContext const&);
    IndexSpanContext();
};

} // namespace dragon::mesh
