#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/FogDescription.h"
#include "mc/deps/minecraft_renderer/resources/MERSUniformData.h"
#include "mc/deps/minecraft_renderer/resources/ServerPBRTextureData.h"
#include "mc/external/render_dragon/frame_object/components/ViewSetId.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Mesh; }
// clang-format on

namespace mce::framebuilder {

struct RenderFlameBillboardDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&>                                 mMesh;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>>        mWorldMatrix;
    ::ll::TypedStorage<8, 136, ::ServerPBRTextureData>                           mServerTextureData;
    ::ll::TypedStorage<4, 20, std::optional<MERSUniformData>>                    mMERSUniforms;
    ::ll::TypedStorage<1, 1, bool>                                               mIsUIPass;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>            mUVOffset;
    ::ll::TypedStorage<4, 28, ::mce::framebuilder::FogDescription>               mFog;
    ::ll::TypedStorage<4, 4, float>                                              mFarChunkDistance;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>            mTileLightIntensity;
    ::ll::TypedStorage<1, 1, bool>                                               mDitheringEnabled;
    ::ll::TypedStorage<2, 2, ::dragon::frameobject::components::ViewSetId const> mViewId;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderFlameBillboardDescription& operator=(RenderFlameBillboardDescription const&);
    RenderFlameBillboardDescription(RenderFlameBillboardDescription const&);
    RenderFlameBillboardDescription();
};

} // namespace mce::framebuilder
