#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/minecraft_renderer/framebuilder/dragon/RenderMetadata.h"
#include "mc/deps/minecraft_renderer/game/ShadowCategory.h"
#include "mc/deps/minecraft_renderer/game/ShadowContext.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
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
struct RenderSkinnedMeshDescription {
public:
    // RenderSkinnedMeshDescription inner types define
    using SkinnedMeshVolumeBounds =
        std::variant<std::pair<glm::vec<3, float, (glm::qualifier)0>, glm::vec<3, float, (glm::qualifier)0>>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mWorldTransform;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mPrevWorldTransform;
    ::ll::TypedStorage<4, 28, std::variant<std::pair<glm::vec<3, float, (glm::qualifier)0>, glm::vec<3, float, (glm::qualifier)0>>>> mBoundingVolume;
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&> mMesh;
    ::ll::TypedStorage<4, 4, int> mSkinnedIndexCount;
    ::ll::TypedStorage<8, 16, ::gsl::span<glm::mat<4, 4, float, (glm::qualifier)0>>> mBones;
    ::ll::TypedStorage<8, 16, ::gsl::span<glm::mat<4, 4, float, (glm::qualifier)0>>> mPreviousBones;
    ::ll::TypedStorage<8, 136, ::ServerPBRTextureData> mServerTextureData;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mMaterial;
    ::ll::TypedStorage<1, 1, bool> mIsDrawingFirstPersonObjects;
    ::ll::TypedStorage<1, 1, bool> mIsDrawingUI;
    ::ll::TypedStorage<1, 1, ::ShadowContext> mShadowContext;
    ::ll::TypedStorage<1, 1, ::ShadowCategory> mShadowCategory;
    ::ll::TypedStorage<4, 16, ::mce::Color> mColor;
    ::ll::TypedStorage<4, 20, std::optional<MERSUniformData>> mMERSUniforms;
    ::ll::TypedStorage<2, 2, ushort> mSubRenderLayerIndex;
    ::ll::TypedStorage<8, 64, ::dragon::RenderMetadata const> mRenderMetadata;
    ::ll::TypedStorage<4, 20, std::optional<glm::vec<4, float, (glm::qualifier)0>>> mClipRegion;
    ::ll::TypedStorage<2, 2, ushort const> mViewId;
    ::ll::TypedStorage<1, 1, bool> mIsDitheringEnabled;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RenderSkinnedMeshDescription& operator=(RenderSkinnedMeshDescription const&);
    RenderSkinnedMeshDescription(RenderSkinnedMeshDescription const&);
    RenderSkinnedMeshDescription();
};
#else // @header-generator platform
struct RenderSkinnedMeshDescription {};
#endif // @header-generator platform

} // namespace mce::framebuilder
