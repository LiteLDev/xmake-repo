#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/minecraft_renderer/framebuilder/dragon/RenderMetadata.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce { class Mesh; }
// clang-format on

namespace mce::framebuilder {

struct FullscreenEffectDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&>                          mMesh;
    ::ll::UntypedStorage<8, 24>                                           mTexture;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mWorldMatrix;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>    mSortOrigin;
    ::ll::TypedStorage<4, 16, ::mce::Color>                               mCurrentColorUniform;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                         mOldMat;
    ::ll::TypedStorage<2, 2, ushort const>                                mViewId;
    ::ll::TypedStorage<8, 64, ::dragon::RenderMetadata const>             mRenderMetadata;
    ::ll::TypedStorage<1, 1, bool const>                                  mIsInsideBlockEffect;
    ::ll::TypedStorage<1, 1, bool const>                                  mIsPlayerOnFireEffect;
    // NOLINTEND

public:
    // prevent constructor by default
    FullscreenEffectDescription& operator=(FullscreenEffectDescription const&);
    FullscreenEffectDescription(FullscreenEffectDescription const&);
    FullscreenEffectDescription();
};

} // namespace mce::framebuilder
