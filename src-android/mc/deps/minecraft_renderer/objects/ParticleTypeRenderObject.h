#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/platform/NonCopyableField.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Mesh; }
// clang-format on

struct ParticleTypeRenderObject {
public:
    // member variables
    // NOLINTBEGIN
    union {
        ::ll::UntypedStorage<8, 16> mLayerMesh;
        ::ll::UntypedStorage<1, 1>  _;
    };
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mLayerTexture;
    ::ll::TypedStorage<1, 1, bool>               mBlend;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleTypeRenderObject& operator=(ParticleTypeRenderObject const&);
    ParticleTypeRenderObject(ParticleTypeRenderObject const&);
    ParticleTypeRenderObject();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ParticleTypeRenderObject();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
