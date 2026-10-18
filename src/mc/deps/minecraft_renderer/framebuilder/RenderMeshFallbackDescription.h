#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/debug/brstd/static_vector.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/minecraft_renderer/framebuilder/FogDescription.h"
#include "mc/deps/minecraft_renderer/framebuilder/dragon/RenderMetadata.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce { class GlobalConstantBuffers; }
namespace mce { class Mesh; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct RenderMeshFallbackDescription {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&> mMesh;
    ::ll::UntypedStorage<8, 200> mTextures;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mWorldMatrix;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mSortOrigin;
    ::ll::TypedStorage<1, 1, bool> mIsUI;
    ::ll::TypedStorage<1, 1, bool> mIsDrawingFirstPersonObjects;
    ::ll::TypedStorage<1, 1, bool> mIsDrawingPersistentUIElement;
    ::ll::TypedStorage<1, 1, bool> mIsDrawingMovingBlock;
    ::ll::TypedStorage<1, 1, bool> mIsDitheringEnabled;
    ::ll::TypedStorage<4, 16, ::mce::Color> mCurrentColorUniform;
    ::ll::TypedStorage<4, 16, ::mce::Color> mDarkenUniform;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mOldMat;
    ::ll::TypedStorage<8, 8, ::mce::GlobalConstantBuffers const&> mConstants;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mUVAnim;
    ::ll::TypedStorage<4, 4, float> mHudOpacity;
    ::ll::TypedStorage<4, 4, float> mAlphaMaskedTint;
    ::ll::TypedStorage<4, 28, ::mce::framebuilder::FogDescription> mFog;
    ::ll::TypedStorage<4, 20, std::optional<glm::vec<4, float, (glm::qualifier)0>>> mClipRegion;
    ::ll::TypedStorage<2, 2, ushort const> mViewId;
    ::ll::TypedStorage<8, 64, ::dragon::RenderMetadata const> mRenderMetadata;
    ::ll::TypedStorage<4, 24, std::pair<glm::vec<3, float, (glm::qualifier)0>, glm::vec<3, float, (glm::qualifier)0>>> mBoundingVolume;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RenderMeshFallbackDescription& operator=(RenderMeshFallbackDescription const&);
    RenderMeshFallbackDescription(RenderMeshFallbackDescription const&);
    RenderMeshFallbackDescription();
};
#else // @header-generator platform
struct RenderMeshFallbackDescription {};
#endif // @header-generator platform

} // namespace mce::framebuilder
