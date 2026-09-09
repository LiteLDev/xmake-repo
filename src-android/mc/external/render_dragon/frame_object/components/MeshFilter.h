#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/mesh/ResolvedIndexBufferResource.h"
#include "mc/external/render_dragon/mesh/ResolvedVertexBufferResource.h"
#include "mc/external/render_dragon/mesh/TypedVertexBufferHandle.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon::frameobject { struct IntraFrameAllocatorContainer; }
namespace dragon::rendering::details { template<typename T0, typename T1> class BufferHandleTypeWrapper; }
// clang-format on

namespace dragon::frameobject::components {

struct MeshFilter {
public:
    // MeshFilter inner types declare
    // clang-format off
    struct VertexBuffer;
    // clang-format on

    // MeshFilter inner types define
    struct VertexBuffer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40>    mBuffer;
        ::ll::TypedStorage<4, 4, uint> mOffset;
        // NOLINTEND

    public:
        // prevent constructor by default
        VertexBuffer& operator=(VertexBuffer const&);
        VertexBuffer();
    };

    using VertexBuffers = std::vector<dragon::frameobject::components::MeshFilter::VertexBuffer>;

    using VertexBufferType = std::variant<
        dragon::ResolvedVertexBufferResource*,
        dragon::mesh::TypedVertexBufferHandle,
        mce::ServerResourcePointer<dragon::ResolvedVertexBufferResource>>;

    using IndexBufferType = std::variant<
        std::monostate,
        dragon::ResolvedIndexBufferResource*,
        std::optional<dragon::rendering::details::
                          BufferHandleTypeWrapper<dragon::mesh::details::IndexBufferHandleTypeKey, ulong>>,
        mce::ServerResourcePointer<dragon::ResolvedIndexBufferResource>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<dragon::frameobject::components::MeshFilter::VertexBuffer>> mVertexBuffers;
    ::ll::TypedStorage<8, 8, ulong>                                                                   mVertexCount;
    ::ll::UntypedStorage<8, 40>                                                                       mIndexBuffer;
    ::ll::TypedStorage<4, 4, uint>                                                                    mIndexOffset;
    ::ll::TypedStorage<8, 8, ulong>                                                                   mIndexCount;
    ::ll::TypedStorage<8, 8, ::dragon::frameobject::IntraFrameAllocatorContainer*>                    mAllocator;
    // NOLINTEND

public:
    // prevent constructor by default
    MeshFilter& operator=(MeshFilter const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MeshFilter(::dragon::frameobject::components::MeshFilter&&);

    MCNAPI void addBuffer(
        std::variant<
            dragon::ResolvedVertexBufferResource*,
            dragon::mesh::TypedVertexBufferHandle,
            mce::ServerResourcePointer<dragon::ResolvedVertexBufferResource>> const&,
        uint,
        ulong
    );

    MCNAPI bool isValid() const;

    MCNAPI ::dragon::frameobject::components::MeshFilter& operator=(::dragon::frameobject::components::MeshFilter&&);

    MCNAPI void setBuffer(
        std::variant<
            std::monostate,
            dragon::ResolvedIndexBufferResource*,
            std::optional<dragon::rendering::details::
                              BufferHandleTypeWrapper<dragon::mesh::details::IndexBufferHandleTypeKey, ulong>>,
            mce::ServerResourcePointer<dragon::ResolvedIndexBufferResource>> const&,
        uint,
        ulong
    );

    MCNAPI ~MeshFilter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dragon::frameobject::components::MeshFilter&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::frameobject::components
