#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/GamefaceMeshTexture.h"
#include "mc/deps/minecraft_renderer/framebuilder/GamefacePSConstantBuffer.h"
#include "mc/deps/minecraft_renderer/framebuilder/GamefaceVSConstantBuffer.h"
#include "mc/deps/renderer/hal/interface/SamplerStateDescription.h"
#include "mc/external/render_dragon/mesh/Mesh.h"

namespace mce::framebuilder {

struct GamefaceBatchDrawMesh {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::dragon::mesh::Mesh>                                        mMesh;
    ::ll::TypedStorage<8, 16, ::mce::framebuilder::GamefacePSConstantBuffer>               pixelShaderConstantBuffer;
    ::ll::TypedStorage<8, 16, ::mce::framebuilder::GamefaceVSConstantBuffer>               vertexShaderConstantBuffer;
    ::ll::TypedStorage<8, 200, ::mce::framebuilder::GamefaceMeshTexture[5]>                mTextures;
    ::ll::TypedStorage<8, 16, ::gsl::span<const glm::mat<4, 4, float, (glm::qualifier)0>>> mInstanceData;
    ::ll::UntypedStorage<4, 0>                                                             mSamplers;
    ::ll::TypedStorage<4, 4, uint>                                                         indexOffset;
    ::ll::TypedStorage<4, 4, uint>                                                         indexCount;
    ::ll::TypedStorage<1, 1, uchar>                                                        stencilRef;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>>                     scissor;
    // NOLINTEND

public:
    // prevent constructor by default
    GamefaceBatchDrawMesh& operator=(GamefaceBatchDrawMesh const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GamefaceBatchDrawMesh(::mce::framebuilder::GamefaceBatchDrawMesh const&);

    MCNAPI ~GamefaceBatchDrawMesh();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::framebuilder::GamefaceBatchDrawMesh const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce::framebuilder
