#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/renderer/hal/interface/Buffer.h"
#include "mc/external/render_dragon/mesh/ResolvedIndexBufferResource.h"
#include "mc/external/render_dragon/mesh/ResolvedVertexBufferResource.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct BufferResourceService; }
// clang-format on

namespace mce {

class IndexBufferContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>    mIndexBuffer;
    ::ll::TypedStorage<4, 4, uint> mIndexCount;
    ::ll::TypedStorage<4, 4, uint> mIndexSize;
    ::ll::TypedStorage<4, 4, int>  mIteration;
    // NOLINTEND

public:
    // prevent constructor by default
    IndexBufferContainer& operator=(IndexBufferContainer const&);
    IndexBufferContainer(IndexBufferContainer const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint getIndexCount() const;

    MCNAPI int getIteration() const;

    MCNAPI void
    loadIndexBuffer(::mce::BufferResourceService&, uint const, uchar const* const, uint const, std::string_view const);

    MCNAPI void setIteration(int const);
    // NOLINTEND
};

} // namespace mce
