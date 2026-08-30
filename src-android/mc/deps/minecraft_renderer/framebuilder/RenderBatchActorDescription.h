#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/FogDescription.h"
#include "mc/deps/minecraft_renderer/resources/OffscreenCaptureDescription.h"

// auto generated forward declare list
// clang-format off
struct MERSUniformData;
struct ServerPBRTextureData;
namespace mce::framebuilder { struct RenderBatchActorInstanceDescription; }
namespace mce::framebuilder { struct RenderBatchRenderControllerDescription; }
namespace mce::framebuilder { struct RenderBatchSkinnedMeshDescription; }
// clang-format on

namespace mce::framebuilder {

struct RenderBatchActorDescription {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 28, ::mce::framebuilder::FogDescription> mFog;
    ::ll::TypedStorage<2, 2, ushort const> mViewId;
    ::ll::TypedStorage<4, 20, std::optional<glm::vec<4, float, (glm::qualifier)0>>> mClipRegion;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mColor;
    ::ll::TypedStorage<8, 40, ::OffscreenCaptureDescription> mOffscreenCaptureDescription;
    ::ll::TypedStorage<8, 16, ::gsl::span<const mce::framebuilder::RenderBatchActorInstanceDescription>> mActorDescs;
    ::ll::TypedStorage<8, 16, ::gsl::span<const ushort>> mPerActorDrawMeshCount;
    ::ll::TypedStorage<8, 8, ushort const*> mPerDrawMeshRenderCount;
    ::ll::TypedStorage<8, 8, ::glm::mat<4, 4, float, (glm::qualifier)0> const*> mBoneList;
    ::ll::TypedStorage<8, 8, ::glm::vec<4, float, (glm::qualifier)0> const*> mCustomOverlayColorList;
    ::ll::TypedStorage<8, 8, ::glm::vec<4, float, (glm::qualifier)0> const*> mCustomChangeColorList;
    ::ll::TypedStorage<8, 8, ::glm::vec<4, float, (glm::qualifier)0> const*> mCustomMultiplicitiveTintColorList;
    ::ll::TypedStorage<8, 8, ::glm::vec<4, float, (glm::qualifier)0> const*> mCustomUVAnimList;
    ::ll::TypedStorage<8, 8, ::ServerPBRTextureData const*> mTextureList;
    ::ll::TypedStorage<8, 16, ::gsl::span<const std::optional<MERSUniformData>>> mMERSUniformsList;
    ::ll::TypedStorage<8, 16, ::gsl::span<const mce::framebuilder::RenderBatchRenderControllerDescription>> mRenderControllerDescs;
    ::ll::TypedStorage<8, 16, ::gsl::span<const mce::framebuilder::RenderBatchSkinnedMeshDescription>> mSkinnedMeshDescs;
    ::ll::TypedStorage<8, 16, ::gsl::span<const glm::mat<4, 4, float, (glm::qualifier)0>>> mPrevBoneList;
    ::ll::TypedStorage<8, 16, ::gsl::span<const glm::mat<4, 4, float, (glm::qualifier)0>>> mPerActorPrevTransform;
    // clang-format on
    // NOLINTEND
};

} // namespace mce::framebuilder
