#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/external/render_dragon/frame_renderer/EmulatedIndexType.h"
#include "mc/external/render_dragon/mesh/IndexSize.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct ResolvedIndexBufferResource; }
namespace dragon::mesh { class IndexBufferResourceManager; }
namespace dragon::rendering::details { template<typename T0, typename T1> class BufferHandleTypeWrapper; }
// clang-format on

namespace dragon::framerenderer {

class BgfxPrimitiveIndexBuffer {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, ::dragon::framerenderer::EmulatedIndexType const> mPrimitiveType;
    ::ll::TypedStorage<8, 8, ::dragon::mesh::IndexBufferResourceManager&> mIbManager;
    ::ll::TypedStorage<8, 8, ::mce::CheckedResourceService<dragon::ResolvedIndexBufferResource>&> mIndexBufferResourceService;
    ::ll::UntypedStorage<8, 16> mIndexBuffer;
    ::ll::TypedStorage<1, 1, ::dragon::mesh::IndexSize> mIndexSize;
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mIndices;
    ::ll::UntypedStorage<8, 24> mServerIndexBuffer;
    ::ll::TypedStorage<4, 4, uint> mCapacity;
    ::ll::UntypedStorage<1, 140> mAccess;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    BgfxPrimitiveIndexBuffer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BgfxPrimitiveIndexBuffer(
        ::dragon::mesh::IndexBufferResourceManager&,
        ::mce::CheckedResourceService<dragon::ResolvedIndexBufferResource>&,
        ::dragon::mesh::IndexSize const,
        ::dragon::framerenderer::EmulatedIndexType const
    );

    MCNAPI void ensureSize(uint const);

    MCNAPI ::mce::ServerResourcePointer<dragon::ResolvedIndexBufferResource> const& getIndexBuffer(uint const);

    MCNAPI ~BgfxPrimitiveIndexBuffer();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint calculateIndexCount(uint const, ::dragon::framerenderer::EmulatedIndexType const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::dragon::mesh::IndexBufferResourceManager&,
        ::mce::CheckedResourceService<dragon::ResolvedIndexBufferResource>&,
        ::dragon::mesh::IndexSize const,
        ::dragon::framerenderer::EmulatedIndexType const
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::framerenderer
