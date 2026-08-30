#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/minecraft_renderer/framebuilder/FogDescription.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce { class Mesh; }
// clang-format on

namespace mce::framebuilder {

struct RenderEnvironmentalTextDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&>                                    mMesh;
    ::ll::UntypedStorage<8, 24>                                                     mTexture;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>>           mWorldMatrix;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>              mSortOrigin;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                         mColor;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                   mOldMat;
    ::ll::TypedStorage<1, 1, bool>                                                  mIsDitheringEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                  mIsNametag;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>>              mTileLightColor;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>               mTileLightIntensity;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>>              mBlockLightColor;
    ::ll::TypedStorage<4, 28, ::mce::framebuilder::FogDescription>                  mFog;
    ::ll::TypedStorage<4, 20, std::optional<glm::vec<4, float, (glm::qualifier)0>>> mClipRegion;
    ::ll::TypedStorage<2, 2, ushort const>                                          mViewId;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderEnvironmentalTextDescription& operator=(RenderEnvironmentalTextDescription const&);
    RenderEnvironmentalTextDescription(RenderEnvironmentalTextDescription const&);
    RenderEnvironmentalTextDescription();
};

} // namespace mce::framebuilder
