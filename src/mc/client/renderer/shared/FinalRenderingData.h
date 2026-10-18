#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/RenderBatchActorInstanceDescription.h"
#include "mc/deps/minecraft_renderer/framebuilder/RenderBatchRenderControllerDescription.h"
#include "mc/deps/minecraft_renderer/framebuilder/RenderBatchSkinnedMeshDescription.h"
#include "mc/deps/minecraft_renderer/resources/MERSUniformData.h"
#include "mc/deps/minecraft_renderer/resources/ServerPBRTextureData.h"

struct FinalRenderingData {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<ushort>> mActorDrawMeshCount;
    ::ll::TypedStorage<8, 24, std::vector<ushort>> mDrawMeshRenderCount;
    ::ll::TypedStorage<8, 24, std::vector<glm::mat<4, 4, float, (glm::qualifier)0>>> mAllBones;
    ::ll::TypedStorage<8, 24, std::vector<glm::vec<4, float, (glm::qualifier)0>>> mCustomOverlayColorList;
    ::ll::TypedStorage<8, 24, std::vector<glm::vec<4, float, (glm::qualifier)0>>> mCustomChangeColorList;
    ::ll::TypedStorage<8, 24, std::vector<glm::vec<4, float, (glm::qualifier)0>>> mCustomMultiplicitiveTintColorList;
    ::ll::TypedStorage<8, 24, std::vector<glm::vec<4, float, (glm::qualifier)0>>> mCustomUVAnimList;
    ::ll::TypedStorage<8, 24, std::vector<ServerPBRTextureData>> mTextures;
    ::ll::TypedStorage<8, 24, std::vector<std::optional<MERSUniformData>>> mMERSUniforms;
    ::ll::TypedStorage<8, 24, std::vector<mce::framebuilder::RenderBatchActorInstanceDescription>> mActorDescriptors;
    ::ll::TypedStorage<8, 24, std::vector<mce::framebuilder::RenderBatchRenderControllerDescription>> mRenderControllerDescriptors;
    ::ll::TypedStorage<8, 24, std::vector<mce::framebuilder::RenderBatchSkinnedMeshDescription>> mSkinnedMeshDescriptors;
    ::ll::TypedStorage<8, 24, std::vector<glm::mat<4, 4, float, (glm::qualifier)0>>> mPreviousBoneList;
    ::ll::TypedStorage<8, 24, std::vector<glm::mat<4, 4, float, (glm::qualifier)0>>> mPreviousActorTransformList;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clear();

    MCNAPI ~FinalRenderingData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct FinalRenderingData {};
#endif // @header-generator platform
