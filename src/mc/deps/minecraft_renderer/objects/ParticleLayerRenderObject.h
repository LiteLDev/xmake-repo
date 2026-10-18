#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/memory/LinearAllocator.h"

// auto generated forward declare list
// clang-format off
struct ParticleTypeRenderObject;
namespace mce { class MaterialPtr; }
// clang-format on

struct ParticleLayerRenderObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::vector<::ParticleTypeRenderObject, ::LinearAllocator<::ParticleTypeRenderObject>>>
                                                        mLayers;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*> mLayerMaterial;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ParticleLayerRenderObject();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ParticleLayerRenderObject {};
#endif // @header-generator platform
#endif // @header-generator platform
