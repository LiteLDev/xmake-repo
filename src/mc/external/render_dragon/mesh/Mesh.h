#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/mesh/MeshDescription.h"
#include "mc/external/render_dragon/mesh/ResolvedVertexBufferResource.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct ResolvedIndexBufferResource; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct ResolvedIndexBufferResource; }
namespace dragon { struct ResolvedVertexBufferResource; }
namespace dragon::mesh { struct MeshDescription; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace dragon::mesh {

#if defined(LL_PLAT_A) // @header-generator platform
class Mesh {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::dragon::mesh::MeshDescription> mMeshDescription;
    ::ll::UntypedStorage<8, 24>                                mVertexBuffers;
    ::ll::UntypedStorage<8, 24>                                mIndexBuffer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Mesh(
        ::dragon::mesh::MeshDescription const&,
        ::mce::ServerResourcePointer<dragon::ResolvedVertexBufferResource>&,
        ::mce::ServerResourcePointer<dragon::ResolvedIndexBufferResource>&
    );

    MCNAPI bool areBuffersValid() const;

    MCNAPI ::dragon::mesh::Mesh& operator=(::dragon::mesh::Mesh const&);

    MCNAPI ~Mesh();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::dragon::mesh::MeshDescription const&,
        ::mce::ServerResourcePointer<dragon::ResolvedVertexBufferResource>&,
        ::mce::ServerResourcePointer<dragon::ResolvedIndexBufferResource>&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class Mesh {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnka798ae;
    ::ll::UntypedStorage<8, 24> mUnkdbf63d;
    ::ll::UntypedStorage<8, 24> mUnk4000f3;
    // NOLINTEND

public:
    // prevent constructor by default
    Mesh();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Mesh(::dragon::mesh::Mesh const&);

    MCNAPI Mesh(
        ::dragon::mesh::MeshDescription const&                                meshDescription,
        ::mce::ServerResourcePointer<::dragon::ResolvedVertexBufferResource>& vertexBuffer,
        ::mce::ServerResourcePointer<::dragon::ResolvedIndexBufferResource>&  indexBuffer
    );

    MCNAPI bool areBuffersValid() const;

    MCNAPI ::dragon::mesh::Mesh& operator=(::dragon::mesh::Mesh const&);

    MCNAPI ~Mesh();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dragon::mesh::Mesh const&);

    MCNAPI void* $ctor(
        ::dragon::mesh::MeshDescription const&                                meshDescription,
        ::mce::ServerResourcePointer<::dragon::ResolvedVertexBufferResource>& vertexBuffer,
        ::mce::ServerResourcePointer<::dragon::ResolvedIndexBufferResource>&  indexBuffer
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class Mesh {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace dragon::mesh
