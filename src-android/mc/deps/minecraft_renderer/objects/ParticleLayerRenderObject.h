#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/LinearAllocator.h"
#include "mc/deps/minecraft_renderer/objects/ParticleTypeRenderObject.h"

// auto generated forward declare list
// clang-format off
struct FrameRenderObject;
namespace mce { class MaterialPtr; }
// clang-format on

struct ParticleLayerRenderObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>                         mLayers;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*> mLayerMaterial;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleLayerRenderObject& operator=(ParticleLayerRenderObject const&);
    ParticleLayerRenderObject();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ParticleLayerRenderObject();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
