#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/mesh/MeshDescription.h"
#include "mc/external/render_dragon/mesh/ResolvedVertexBufferResource.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct ResolvedIndexBufferResource; }
// clang-format on

namespace dragon::mesh {

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

} // namespace dragon::mesh
