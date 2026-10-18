#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/game/ShadowContext.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BaseActorRenderContext;
class ClientPBRTextureData;
class MaterialVariants;
class ModelPart;
class RenderController;
class ScreenContext;
class SortedMeshDrawList;
struct MERSUniformData;
namespace dragon { struct RenderMetadata; }
// clang-format on

class SkinnedMesh {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mShouldDrawThisFrame;
    ::ll::TypedStorage<8, 24, std::vector<ModelPart*>> mSkinnedParts;
    ::ll::TypedStorage<8, 616, ::mce::Mesh> mSkinnedMeshQuads;
    ::ll::TypedStorage<8, 616, ::mce::Mesh> mSkinnedMeshTris;
    ::ll::TypedStorage<8, 24, std::vector<glm::mat<4, 4, float, (glm::qualifier)0>>> mBoneMatrices;
    ::ll::TypedStorage<8, 24, std::vector<glm::mat<4, 4, float, (glm::qualifier)0>>> mPreviousBoneMatrices;
    ::ll::TypedStorage<4, 24, std::pair<glm::vec<3, float, (glm::qualifier)0>, glm::vec<3, float, (glm::qualifier)0>>> mBounds;
    ::ll::TypedStorage<4, 4, int> mVertexCount;
    ::ll::TypedStorage<4, 4, int> mTotalVertices;
    ::ll::TypedStorage<1, 1, bool> mUseBones;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void constructMesh(::ScreenContext&);

    MCNAPI void constructMesh(::BaseActorRenderContext&, ::MaterialVariants const&);

    MCNAPI void draw(
        ::ScreenContext&,
        ::dragon::RenderMetadata const&,
        ::RenderController const*,
        uint,
        ::MaterialVariants const&,
        ::ClientPBRTextureData const&,
        ::SortedMeshDrawList*,
        std::optional<glm::mat<4, 4, float, (glm::qualifier)0>> const&,
        std::optional<MERSUniformData> const&,
        ::ShadowContext,
        bool
    );

    MCNAPI ::mce::Mesh const& getMesh() const;

    MCNAPI void registerPart(::ModelPart&, int, int);

    MCNAPI void setMesh(::mce::Mesh&&);

    MCNAPI ~SkinnedMesh();
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
#include "mc/deps/minecraft_renderer/game/ShadowContext.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class ClientPBRTextureData;
class MaterialVariants;
class ModelPart;
class RenderController;
class ScreenContext;
class SortedMeshDrawList;
struct MERSUniformData;
namespace dragon { struct RenderMetadata; }
// clang-format on

class SkinnedMesh {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                   mShouldDrawThisFrame;
    ::ll::TypedStorage<8, 24, ::std::vector<::ModelPart*>>           mSkinnedParts;
    ::ll::TypedStorage<8, 616, ::mce::Mesh>                          mSkinnedMeshQuads;
    ::ll::TypedStorage<8, 616, ::mce::Mesh>                          mSkinnedMeshTris;
    ::ll::TypedStorage<8, 24, ::std::vector<::glm::mat4x4>>          mBoneMatrices;
    ::ll::TypedStorage<8, 24, ::std::vector<::glm::mat4x4>>          mPreviousBoneMatrices;
    ::ll::TypedStorage<4, 24, ::std::pair<::glm::vec3, ::glm::vec3>> mBounds;
    ::ll::TypedStorage<4, 4, int>                                    mVertexCount;
    ::ll::TypedStorage<4, 4, int>                                    mTotalVertices;
    ::ll::TypedStorage<1, 1, bool>                                   mUseBones;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SkinnedMesh();

    MCAPI void constructMesh(::ScreenContext& screenContext);

    MCAPI void
    constructMesh(::BaseActorRenderContext& baseActorRenderContext, ::MaterialVariants const& defaultMaterialVariants);

    MCAPI void draw(
        ::ScreenContext&                          screenContext,
        ::dragon::RenderMetadata const&           renderMetadata,
        ::RenderController const*                 renderController,
        uint                                      subRenderLayerIndex,
        ::MaterialVariants const&                 materialVariants,
        ::ClientPBRTextureData const&             textureData,
        ::SortedMeshDrawList*                     sortedMeshDrawList,
        ::std::optional<::glm::mat4x4> const&     previousActorTransform,
        ::std::optional<::MERSUniformData> const& mersUniforms,
        ::ShadowContext                           shadowContext,
        bool                                      isDitheringEnabled
    );

    MCAPI ~SkinnedMesh();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class SkinnedMesh {};
#endif // @header-generator platform
#endif // @header-generator platform
