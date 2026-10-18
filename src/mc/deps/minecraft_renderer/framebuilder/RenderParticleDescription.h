#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/enums/CullMode.h"
#include "mc/deps/core_graphics/interface/BlendStateDescription.h"
#include "mc/deps/minecraft_renderer/framebuilder/FogDescription.h"
#include "mc/deps/minecraft_renderer/resources/MERSUniformData.h"
#include "mc/deps/minecraft_renderer/resources/ServerPBRTextureData.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Mesh; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct RenderParticleDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&>                   mMesh;
    ::ll::TypedStorage<8, 136, ::ServerPBRTextureData const>       mTexture;
    ::ll::TypedStorage<4, 4, uint>                                 mParticleType;
    ::ll::TypedStorage<4, 28, ::mce::framebuilder::FogDescription> mFog;
    ::ll::TypedStorage<4, 4, float>                                mFarChunkDistance;
    ::ll::TypedStorage<1, 7, ::mce::BlendStateDescription const>   mBlendStateDescription;
    ::ll::TypedStorage<1, 1, ::mce::CullMode>                      mCullMode;
    ::ll::TypedStorage<2, 2, ushort const>                         mViewId;
    ::ll::TypedStorage<4, 20, std::optional<MERSUniformData>>      mMERSUniform;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderParticleDescription& operator=(RenderParticleDescription const&);
    RenderParticleDescription(RenderParticleDescription const&);
    RenderParticleDescription();
};
#else // @header-generator platform
struct RenderParticleDescription {};
#endif // @header-generator platform

} // namespace mce::framebuilder
