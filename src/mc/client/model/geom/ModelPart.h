#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/model/Geometry.h"
#include "mc/client/model/geom/Cube.h"
#include "mc/client/model/geom/TextureOffset.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/actor/ModelPartLocator.h"
#include "mc/world/actor/animation/BoneAnimationRelativeMode.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class ActorResourceDefinition;
class BaseActorRenderContext;
class BoneOrientation;
class DataDrivenGeometry;
class GeometryPtr;
class MaterialVariants;
class Matrix;
class MinecraftGameplayGraphicsResources;
class Model;
class RenderController;
class RenderParams;
class ScreenContext;
class Tessellator;
class TextureTessellator;
namespace DirectX { struct XMMATRIX; }
namespace Json { class Value; }
namespace mce { class Color; }
namespace mce { class MaterialPtr; }
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/client/model/Geometry.h"
#include "mc/client/model/geom/TextureOffset.h"
#include "mc/client/renderer/controller/RenderController.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/actor/animation/BoneAnimationRelativeMode.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class ActorResourceDefinition;
class BoneOrientation;
class Cube;
class DataDrivenGeometry;
class GeometryPtr;
class Matrix;
class MinecraftGameplayGraphicsResources;
class Model;
class ModelPartLocator;
class RenderParams;
class ScreenContext;
class Tessellator;
namespace mce { class Color; }
namespace mce { class MaterialPtr; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class ModelPart {
public:
    // ModelPart inner types declare
    // clang-format off
    struct TextureMesh;
    // clang-format on

    // ModelPart inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct TextureMesh {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>        mFriendlyName;
        ::ll::TypedStorage<8, 48, ::ResourceLocation> mResourceLocation;
        ::ll::TypedStorage<4, 12, ::Vec3>             mPosition;
        ::ll::TypedStorage<4, 12, ::Vec3>             mLocalPivot;
        ::ll::TypedStorage<4, 12, ::Vec3>             mRotation;
        ::ll::TypedStorage<4, 12, ::Vec3>             mScale;
        ::ll::TypedStorage<1, 1, bool>                mUsePixelDepth;
        // NOLINTEND

    public:
        // prevent constructor by default
        TextureMesh& operator=(TextureMesh const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString>                      mName;
    ::ll::TypedStorage<4, 12, ::Vec3>                              mPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                              mOffset;
    ::ll::TypedStorage<4, 12, ::Vec3>                              mRot;
    ::ll::TypedStorage<4, 12, ::Vec3>                              mScale;
    ::ll::TypedStorage<4, 12, ::Vec3>                              mWorldPos;
    ::ll::TypedStorage<4, 24, ::AABB>                              mAABB;
    ::ll::TypedStorage<4, 4, int>                                  mGroupIndex;
    ::ll::TypedStorage<4, 4, int>                                  mPartIndex;
    ::ll::TypedStorage<4, 4, int>                                  mMeshIndex;
    ::ll::TypedStorage<4, 4, int>                                  mBoneOrientationIndex;
    ::ll::TypedStorage<8, 24, std::vector<ModelPartLocator>>       mLocators;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                    mBinding;
    ::ll::TypedStorage<1, 1, ::BoneAnimationRelativeMode>          mRotationRelativeMode;
    ::ll::TypedStorage<1, 1, bool>                                 mDebug;
    ::ll::TypedStorage<4, 4, int const>                            IndexNotSet;
    ::ll::TypedStorage<1, 1, bool>                                 mMirror;
    ::ll::TypedStorage<1, 1, bool>                                 mVisible;
    ::ll::TypedStorage<4, 4, int>                                  mSkinnedMeshGroupIdentifier;
    ::ll::TypedStorage<8, 24, std::vector<Cube>>                   mCubes;
    ::ll::TypedStorage<8, 24, std::vector<ModelPart::TextureMesh>> mTextureMeshes;
    ::ll::UntypedStorage<8, 128>                                   mPolyMesh;
    ::ll::TypedStorage<8, 8, ::ModelPart*>                         mParent;
    ::ll::TypedStorage<8, 24, std::vector<ModelPart*>>             mChildren;
    ::ll::TypedStorage<4, 8, ::Vec2>                               mTexSize;
    ::ll::TypedStorage<8, 16, ::TextureOffset>                     mTexOffs;
    ::ll::TypedStorage<1, 1, bool>                                 mNeverRender;
    ::ll::TypedStorage<4, 12, ::Vec3>                              mOriginPos;
    ::ll::TypedStorage<1, 1, bool>                                 mHasColor;
    ::ll::TypedStorage<1, 1, bool>                                 mMaterialExpressionsNeedColorVertexFormatField;
    ::ll::UntypedStorage<8, 48>                                    mIsVisibleMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<const RenderController*, ExpressionNode>> mMaterialExpressionMap;
    // NOLINTEND

public:
    // prevent constructor by default
    ModelPart& operator=(ModelPart const&);
    ModelPart(ModelPart const&);
    ModelPart();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ModelPart(::ModelPart&&);

    MCNAPI void _copyBoneMatricesToSkinnedMeshes(
        ::RenderParams&,
        ::gsl::span<const BoneOrientation>,
        ::RenderController const*,
        ::DataDrivenGeometry&,
        bool
    );

    MCNAPI void addBox(::Vec3 const&, ::Vec3 const&, bool, float, ::mce::Color const&);

    MCNAPI ::ModelPart& addBoxMapTex(::Vec3 const&, ::Vec3 const&, ::TextureOffset const&, bool, float);

    MCNAPI void assignPartToGroup(::Model&, bool);

    MCNAPI void assignPartToGroup(::Model&, bool, ::DataDrivenGeometry*);

    MCNAPI void compileCubes(::Tessellator&);

    MCNAPI void compileQuads(::MinecraftGameplayGraphicsResources&, ::Tessellator&);

    MCNAPI void compileTris(::Tessellator&);

    MCNAPI void copyBoneMatricesToActor(
        ::RenderParams&,
        ::gsl::span<const BoneOrientation>,
        ::RenderController const*,
        ::DataDrivenGeometry&
    );

    MCNAPI void copyBoneMatricesToSkinnedMeshes(
        ::RenderParams&,
        ::gsl::span<const BoneOrientation>,
        ::RenderController const*,
        ::DataDrivenGeometry&
    );

    MCNAPI void expandAABB(::AABB&) const;

    MCNAPI void expandAABBWithCompiledGeometry(::AABB&) const;

    MCNAPI void generateBoneTransformMatrices(
        ::RenderParams&,
        ::gsl::span<BoneOrientation>,
        ::RenderController const*,
        ::DirectX::XMMATRIX const
    );

    MCNAPI bool getNeverRender() const;

    MCNAPI ::Vec3 const& getOrigin() const;

    MCNAPI ::ModelPart* getParent() const;

    MCNAPI void getPolyCounts(int&, int&);

    MCNAPI void getTotalPolyCounts(ulong&, ulong&) const;

    MCNAPI bool isVisible(::RenderParams&, ::RenderController const*) const;

    MCNAPI bool load(::GeometryPtr const, std::string_view, ::ModelPart*);

    MCNAPI bool
    load(std::shared_ptr<ActorResourceDefinition> const, ::GeometryPtr const, std::string_view, ::ModelPart*);

    MCNAPI void loadBoxes(::Vec3 const&, ::Vec3 const&, std::vector<Geometry::Box> const&, ::Vec3 const&);

    MCNAPI void loadPolyMesh(::Vec3 const&, ::Vec3 const&, ::Geometry::NodePolyMesh const&);

    MCNAPI void loadPos(::Vec3 const&, ::ModelPart*, bool);

    MCNAPI bool loadWithOrientation(
        std::shared_ptr<ActorResourceDefinition> const,
        ::GeometryPtr const,
        std::string_view,
        ::Vec3 const&,
        ::Vec3 const&,
        ::ModelPart*
    );

    MCNAPI bool loadWithOrientation_(::GeometryPtr const, std::string_view, ::Vec3 const&, ::Vec3 const&, ::ModelPart*);

    MCNAPI bool needsColourVertexFormatField(::MaterialVariants const&) const;

    MCNAPI ulong numCubes() const;

    MCNAPI ::ModelPart& operator=(::ModelPart&&);

    MCNAPI void render(::ScreenContext&, ::Model&, float, bool, uint, ::Matrix);

    MCNAPI void renderAtPosition(::ScreenContext&, ::Model&, ::Vec3 const&, float, bool, uint, ::Matrix);

    MCNAPI void reset();

    MCNAPI void setModelPartMaterial(::mce::MaterialPtr const&, ::RenderController const*);

    MCNAPI void setModelPartMaterial(::ExpressionNode const&, ::RenderController const*, bool);

    MCNAPI void setOrigin(::Vec3 const&);

    MCNAPI void setPos(::Vec3 const&);

    MCNAPI ::ModelPart& setTexSize(int, int);

    MCNAPI void setVisibility(::ExpressionNode const&, ::RenderController const*);

    MCNAPI void setVisible(bool);

    MCNAPI void translateTo(::Matrix&, float);

    MCNAPI ~ModelPart();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ModelPart&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct TextureMesh {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk6a7c78;
        ::ll::UntypedStorage<8, 56> mUnkddeb87;
        ::ll::UntypedStorage<4, 12> mUnk202e6d;
        ::ll::UntypedStorage<4, 12> mUnkb2c2b2;
        ::ll::UntypedStorage<4, 12> mUnka0bfb0;
        ::ll::UntypedStorage<4, 12> mUnkc2fbc4;
        ::ll::UntypedStorage<1, 1>  mUnka93767;
        // NOLINTEND

    public:
        // prevent constructor by default
        TextureMesh& operator=(TextureMesh const&);
        TextureMesh(TextureMesh const&);
        TextureMesh();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                          mName;
    ::ll::TypedStorage<4, 12, ::Vec3>                                  mPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                  mOffset;
    ::ll::TypedStorage<4, 12, ::Vec3>                                  mRot;
    ::ll::TypedStorage<4, 12, ::Vec3>                                  mScale;
    ::ll::TypedStorage<4, 12, ::Vec3>                                  mWorldPos;
    ::ll::TypedStorage<4, 24, ::AABB>                                  mAABB;
    ::ll::TypedStorage<4, 4, int>                                      mGroupIndex;
    ::ll::TypedStorage<4, 4, int>                                      mPartIndex;
    ::ll::TypedStorage<4, 4, int>                                      mMeshIndex;
    ::ll::TypedStorage<4, 4, int>                                      mBoneOrientationIndex;
    ::ll::TypedStorage<8, 24, ::std::vector<::ModelPartLocator>>       mLocators;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                        mBinding;
    ::ll::TypedStorage<1, 1, ::BoneAnimationRelativeMode>              mRotationRelativeMode;
    ::ll::TypedStorage<1, 1, bool>                                     mDebug;
    ::ll::TypedStorage<4, 4, int const>                                IndexNotSet;
    ::ll::TypedStorage<1, 1, bool>                                     mMirror;
    ::ll::TypedStorage<1, 1, bool>                                     mVisible;
    ::ll::TypedStorage<4, 4, int>                                      mSkinnedMeshGroupIdentifier;
    ::ll::TypedStorage<8, 24, ::std::vector<::Cube>>                   mCubes;
    ::ll::TypedStorage<8, 24, ::std::vector<::ModelPart::TextureMesh>> mTextureMeshes;
    ::ll::TypedStorage<8, 128, ::Geometry::NodePolyMesh>               mPolyMesh;
    ::ll::TypedStorage<8, 8, ::ModelPart*>                             mParent;
    ::ll::TypedStorage<8, 24, ::std::vector<::ModelPart*>>             mChildren;
    ::ll::TypedStorage<4, 8, ::Vec2>                                   mTexSize;
    ::ll::TypedStorage<8, 16, ::TextureOffset>                         mTexOffs;
    ::ll::TypedStorage<1, 1, bool>                                     mNeverRender;
    ::ll::TypedStorage<4, 12, ::Vec3>                                  mOriginPos;
    ::ll::TypedStorage<1, 1, bool>                                     mHasColor;
    ::ll::TypedStorage<1, 1, bool>                                     mMaterialExpressionsNeedColorVertexFormatField;
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::RenderController const*,
            ::ExpressionNode,
            ::std::less<::RenderController const*>,
            ::std::vector<::RenderController const*>,
            ::std::vector<::ExpressionNode>>>
                                                                                                 mIsVisibleMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::RenderController const*, ::ExpressionNode>> mMaterialExpressionMap;
    // NOLINTEND

public:
    // prevent constructor by default
    ModelPart& operator=(ModelPart const&);
    ModelPart(ModelPart const&);
    ModelPart();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ModelPart(::ModelPart&& rhs);

    MCAPI ModelPart(int xTexOffs, int yTexOffs, int texWidth, int texHeight);

    MCAPI void _copyBoneMatricesToSkinnedMeshes(
        ::RenderParams&                      renderParams,
        ::gsl::span<::BoneOrientation const> boneOrientations,
        ::RenderController const*            renderControllerId,
        ::DataDrivenGeometry&                geo,
        bool                                 deferred
    );

    MCAPI void addBox(::Vec3 const& point0, ::Vec3 const& extents, bool mirror, float g, ::mce::Color const& color);

    MCAPI void assignPartToGroup(::Model& model, bool forceToUniqueGroup, ::DataDrivenGeometry* owningGeometry);

    MCAPI void compileCubes(::Tessellator& tessellator);

    MCAPI void compileQuads(::MinecraftGameplayGraphicsResources& gameplayResources, ::Tessellator& tessellator);

    MCAPI void compileTris(::Tessellator& tessellator);

    MCAPI void copyBoneMatricesToActor(
        ::RenderParams&                      renderParams,
        ::gsl::span<::BoneOrientation const> boneOrientations,
        ::RenderController const*            renderControllerId,
        ::DataDrivenGeometry&                geo
    );

    MCAPI void copyBoneMatricesToSkinnedMeshes(
        ::RenderParams&                      renderParams,
        ::gsl::span<::BoneOrientation const> boneOrientations,
        ::RenderController const*            renderControllerId,
        ::DataDrivenGeometry&                geo
    );

    MCAPI void expandAABB(::AABB& bb) const;

    MCAPI void LL_CC_V generateBoneTransformMatrices(
        ::RenderParams&                renderParams,
        ::gsl::span<::BoneOrientation> boneOrientations,
        ::RenderController const*      renderControllerId,
        ::DirectX::XMMATRIX const      boneToEntitySpaceMatrix
    );

    MCAPI bool isVisible(::RenderParams& renderParams, ::RenderController const* renderControllerId) const;

    MCAPI bool load(::GeometryPtr source, ::std::string_view nodeName, ::ModelPart* parentPart);

    MCAPI bool load(
        ::std::shared_ptr<::ActorResourceDefinition> const resourceDefinition,
        ::GeometryPtr const                                source,
        ::std::string_view                                 nodeName,
        ::ModelPart*                                       parentPart
    );

    MCAPI void loadBoxes(
        ::Vec3 const&                         newPivot,
        ::Vec3 const&                         offset,
        ::std::vector<::Geometry::Box> const& boxes,
        ::Vec3 const&                         bindPoseRotation
    );

    MCAPI void
    loadPolyMesh(::Vec3 const& newPivot, ::Vec3 const& bindPoseRotation, ::Geometry::NodePolyMesh const& sourceMesh);

    MCAPI bool loadWithOrientation(
        ::std::shared_ptr<::ActorResourceDefinition> const resourceDefinition,
        ::GeometryPtr const                                source,
        ::std::string_view                                 nodeName,
        ::Vec3 const&                                      basePos,
        ::Vec3 const&                                      pivot,
        ::ModelPart*                                       parentPart
    );

    MCAPI bool loadWithOrientation_(
        ::GeometryPtr const source,
        ::std::string_view  nodeName,
        ::Vec3 const&       basePos,
        ::Vec3 const&       pivot,
        ::ModelPart*        parentPart
    );

    MCAPI uint64 numCubes() const;

    MCAPI ::ModelPart& operator=(::ModelPart&& rhs);

    MCAPI void render(
        ::ScreenContext& screenContext,
        ::Model&         model,
        float            scale,
        bool             hideParentBodyPart,
        uint             count,
        ::Matrix         boneToEntitySpaceMatrix
    );

    MCAPI void renderAtPosition(
        ::ScreenContext& screenContext,
        ::Model&         model,
        ::Vec3 const&    position,
        float            scale,
        bool             hideParentBodyPart,
        uint             count,
        ::Matrix         boneToEntitySpaceMatrix
    );

    MCAPI void reset();

    MCAPI void setModelPartMaterial(::mce::MaterialPtr const& mat, ::RenderController const* renderControllerId);

    MCAPI void translateTo(::Matrix& mv, float scale);

    MCAPI ~ModelPart();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ModelPart&& rhs);

    MCAPI void* $ctor(int xTexOffs, int yTexOffs, int texWidth, int texHeight);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct TextureMesh {};
#endif // @header-generator platform
#endif // @header-generator platform
};
