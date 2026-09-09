#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
