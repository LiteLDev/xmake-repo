#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/game/ShadowContext.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class ClientPBRTextureData;
class MaterialVariants;
class Matrix;
class ModelPart;
class RenderController;
class RenderParams;
class ScreenContext;
class SkinnedMesh;
struct MERSUniformData;
namespace dragon { struct RenderMetadata; }
// clang-format on

class SkinnedMeshGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<const RenderController*, ExpressionNode>> mMaterialExpressionMap;
    ::ll::TypedStorage<1, 1, bool>                                                         mShouldDrawThisFrame;
    ::ll::TypedStorage<1, 1, bool>                                                         mIsUniqueGroup;
    ::ll::TypedStorage<4, 4, int>                                                          mSkinnedMeshGroupIdentifier;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<SkinnedMesh>>>                   mSkinnedMeshes;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinnedMeshGroup& operator=(SkinnedMeshGroup const&);
    SkinnedMeshGroup(SkinnedMeshGroup const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _isVisibilityExpressionMapEqual(::ModelPart const&) const;

    MCNAPI bool canRegisterPart(::ModelPart const&, int) const;

    MCNAPI void clear();

    MCNAPI void constructMesh(::ScreenContext&);

    MCNAPI void constructMesh(::BaseActorRenderContext&, ::MaterialVariants const&);

    MCNAPI void copyBoneMatrixToSkinnedMesh(
        int,
        int,
        bool,
        ::Matrix const&,
        int,
        std::optional<glm::mat<4, 4, float, (glm::qualifier)0>> const
    );

    MCNAPI void dataDrivenDraw(
        ::RenderParams&,
        ::dragon::RenderMetadata const&,
        ::gsl::not_null<const RenderController*>,
        ::ClientPBRTextureData const&,
        std::optional<MERSUniformData> const&
    );

    MCNAPI void draw(
        ::ScreenContext&,
        ::dragon::RenderMetadata const&,
        ::MaterialVariants const&,
        ::ClientPBRTextureData const&,
        std::optional<MERSUniformData> const&
    );

    MCNAPI bool isUniqueGroup() const;

    MCNAPI void prepareSkinning();

    MCNAPI void registerPart(::ModelPart&, int);

    MCNAPI void setMaterialExpression(::RenderController const*, ::ExpressionNode const&);

    MCNAPI ~SkinnedMeshGroup();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ulong getMaxBoneCount();
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
#include "mc/client/renderer/controller/RenderController.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class ClientPBRTextureData;
class ExpressionNode;
class MaterialVariants;
class Matrix;
class ModelPart;
class RenderParams;
class ScreenContext;
class SkinnedMesh;
struct MERSUniformData;
namespace dragon { struct RenderMetadata; }
// clang-format on

class SkinnedMeshGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::RenderController const*, ::ExpressionNode>> mMaterialExpressionMap;
    ::ll::TypedStorage<1, 1, bool>                                                               mShouldDrawThisFrame;
    ::ll::TypedStorage<1, 1, bool>                                                               mIsUniqueGroup;
    ::ll::TypedStorage<4, 4, int>                                              mSkinnedMeshGroupIdentifier;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::SkinnedMesh>>> mSkinnedMeshes;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinnedMeshGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SkinnedMeshGroup(
        ::ModelPart& modelPart,
        int          skinnedMeshGroupIdentifier,
        bool         isUniqueGroup,
        uint64       skinnedMeshGroupIndex
    );

    MCAPI bool canRegisterPart(::ModelPart const& modelPart, int skinnedMeshGroupIdentifier) const;

    MCAPI void
    constructMesh(::BaseActorRenderContext& baseActorRenderContext, ::MaterialVariants const& defaultMaterialVariants);

    MCAPI void copyBoneMatrixToSkinnedMesh(
        int                            meshIndex,
        int                            partIndex,
        bool                           isVisible,
        ::Matrix const&                matrix,
        int                            vertexCount,
        ::std::optional<::glm::mat4x4> previousMatrix
    );

    MCAPI void dataDrivenDraw(
        ::RenderParams&                            renderParams,
        ::dragon::RenderMetadata const&            renderMetadata,
        ::gsl::not_null<::RenderController const*> renderController,
        ::ClientPBRTextureData const&              textureData,
        ::std::optional<::MERSUniformData> const&  mersUniforms
    );

    MCAPI void draw(
        ::ScreenContext&                          screenContext,
        ::dragon::RenderMetadata const&           renderMetadata,
        ::MaterialVariants const&                 modelMaterialVariants,
        ::ClientPBRTextureData const&             textureData,
        ::std::optional<::MERSUniformData> const& mersUniforms
    );

    MCAPI bool
    isMaterialExpressionMapEqual(::std::unordered_map<::RenderController const*, ::ExpressionNode> const& rhs) const;

    MCAPI void registerPart(::ModelPart& part, int groupIndex);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::ModelPart& modelPart, int skinnedMeshGroupIdentifier, bool isUniqueGroup, uint64 skinnedMeshGroupIndex);
    // NOLINTEND
};
#else // @header-generator platform
class SkinnedMeshGroup {};
#endif // @header-generator platform
#endif // @header-generator platform
