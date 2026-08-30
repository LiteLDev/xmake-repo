#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

class ModelPart {
public:
    // ModelPart inner types declare
    // clang-format off
    struct TextureMesh;
    // clang-format on

    // ModelPart inner types define
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
};
