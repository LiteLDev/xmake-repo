#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/renderer/hal/interface/Buffer.h"
#include "mc/external/render_dragon/mesh/ResolvedIndexBufferResource.h"
#include "mc/external/render_dragon/mesh/ResolvedVertexBufferResource.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderDevice; }
namespace mce { struct BufferResourceService; }
// clang-format on

namespace mce {

class QuadIndexBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>  mCapacity;
    ::ll::TypedStorage<1, 1, uchar> mIndexSize;
    ::ll::UntypedStorage<8, 24>     mGlobalBuffer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI QuadIndexBuffer();

    MCNAPI void ensureSize(::mce::RenderDevice&, ::mce::BufferResourceService&, uint const);

    MCNAPI uint getCapacity() const;

    MCNAPI ~QuadIndexBuffer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
