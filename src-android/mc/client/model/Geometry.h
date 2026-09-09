#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/FitToFrame.h"
#include "mc/client/model/geom/Cube.h"
#include "mc/client/model/geom/QuadUVRotation.h"
#include "mc/client/model/geom/TextureOffset.h"
#include "mc/client/renderer/block/tessellation_pipeline/item_transforms/Type.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/resources/MinEngineVersion.h"
#include "mc/world/actor/ModelPartLocator.h"
#include "mc/world/actor/player/SkinAdjustments.h"

// auto generated forward declare list
// clang-format off
class JsonValueHierarchy;
class SemVersionConstant;
struct TextureUVCoordinateSet;
namespace Json { class Value; }
// clang-format on

class Geometry {
public:
    // Geometry inner types declare
    // clang-format off
    struct ItemDisplayTransform;
    struct Box;
    struct NodeVertex;
    struct NodePolyMesh;
    struct NodeTextureMesh;
    struct Node;
    // clang-format on

    // Geometry inner types define
    struct ItemDisplayTransform {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::ClientBlockPipeline::ItemTransforms::Type> mTransformType;
        ::ll::TypedStorage<4, 12, ::Vec3>                                     mTranslation;
        ::ll::TypedStorage<4, 12, ::Vec3>                                     mRotation;
        ::ll::TypedStorage<4, 12, ::Vec3>                                     mScale;
        ::ll::TypedStorage<4, 12, ::Vec3>                                     mRotationPivot;
        ::ll::TypedStorage<4, 12, ::Vec3>                                     mScalePivot;
        // NOLINTEND
    };

    struct Box {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>             mMirror;
        ::ll::TypedStorage<4, 12, ::Vec3>          mFrom;
        ::ll::TypedStorage<4, 12, ::Vec3>          mSize;
        ::ll::TypedStorage<4, 12, ::Vec3>          mRotation;
        ::ll::TypedStorage<4, 12, ::Vec3>          mPivot;
        ::ll::TypedStorage<8, 16, ::TextureOffset> mTex;
        ::ll::UntypedStorage<4, 144>               mFaceUVs;
        ::ll::TypedStorage<4, 4, float>            mInflate;
        ::ll::TypedStorage<1, 1, bool>             mUsesFaceUVs;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void _boxFaceUVToJson(::Json::Value&, uchar, std::string const&, std::vector<std::string> const&) const;
        // NOLINTEND
    };

    struct NodeVertex {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> mPositionIndex;
        ::ll::TypedStorage<4, 4, uint> mNormalIndex;
        ::ll::TypedStorage<4, 4, uint> mUVIndex;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void toJson(::Json::Value&) const;
        // NOLINTEND
    };

    struct NodePolyMesh {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<Vec3>>                                mPositions;
        ::ll::TypedStorage<8, 24, std::vector<Vec3>>                                mNormals;
        ::ll::TypedStorage<8, 24, std::vector<Vec2>>                                mUVs;
        ::ll::TypedStorage<8, 24, std::vector<std::array<Geometry::NodeVertex, 3>>> mTris;
        ::ll::TypedStorage<8, 24, std::vector<std::array<Geometry::NodeVertex, 4>>> mQuads;
        ::ll::TypedStorage<1, 1, bool>                                              mAreUVsNormalized;
        // NOLINTEND

    public:
        // prevent constructor by default
        NodePolyMesh& operator=(NodePolyMesh const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI NodePolyMesh(::Geometry::NodePolyMesh const&);

        MCNAPI void clear();

        MCNAPI ::Geometry::NodePolyMesh& operator=(::Geometry::NodePolyMesh&&);

        MCNAPI ~NodePolyMesh();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Geometry::NodePolyMesh const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct NodeTextureMesh {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mTextureName;
        ::ll::TypedStorage<4, 12, ::Vec3>      mPosition;
        ::ll::TypedStorage<4, 12, ::Vec3>      mLocalPivot;
        ::ll::TypedStorage<4, 12, ::Vec3>      mRotation;
        ::ll::TypedStorage<4, 12, ::Vec3>      mScale;
        ::ll::TypedStorage<1, 1, bool>         mUsePixelDepth;
        // NOLINTEND

    public:
        // prevent constructor by default
        NodeTextureMesh();
    };

    struct Node {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::set<std::string>>                  mMixedCaseNames;
        ::ll::TypedStorage<1, 1, bool>                                    mMirror;
        ::ll::TypedStorage<1, 1, bool>                                    mNeverRender;
        ::ll::TypedStorage<4, 12, ::Vec3>                                 mPivot;
        ::ll::TypedStorage<4, 12, ::Vec3>                                 mRot;
        ::ll::TypedStorage<4, 12, ::Vec3>                                 mScale;
        ::ll::TypedStorage<4, 12, ::Vec3>                                 mBindPoseRotation;
        ::ll::TypedStorage<4, 4, float>                                   mInflate;
        ::ll::TypedStorage<1, 1, bool>                                    mPivotSubtractsParentPivot;
        ::ll::TypedStorage<8, 24, std::vector<Geometry::Box>>             mBoxes;
        ::ll::TypedStorage<8, 24, std::string>                            mParentName;
        ::ll::TypedStorage<8, 24, std::string>                            mBoneBindingExpression;
        ::ll::TypedStorage<8, 24, std::vector<ModelPartLocator>>          mLocators;
        ::ll::TypedStorage<8, 128, ::Geometry::NodePolyMesh>              mMesh;
        ::ll::TypedStorage<8, 24, std::vector<Geometry::NodeTextureMesh>> mTextureMeshes;
        ::ll::TypedStorage<1, 1, bool>                                    mDebug;
        ::ll::TypedStorage<4, 4, uint>                                    mSkinnedMeshGroupIdentifier;
        ::ll::UntypedStorage<8, 24>                                       mSourceFileVersion;
        ::ll::UntypedStorage<8, 32>                                       mSourceMinEngineVersion;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Node(::Geometry::Node const&);

        MCNAPI void addLocator(std::string const&, std::string const&, ::Vec3 const&, bool, bool);

        MCNAPI ::Geometry::Node& operator=(::Geometry::Node const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Geometry::Node const&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SkinAdjustments>                            mSkinAdjustments;
    ::ll::TypedStorage<4, 8, ::Vec2>                                       mRenderDim;
    ::ll::TypedStorage<4, 12, ::Vec3>                                      mRenderDimOffset;
    ::ll::TypedStorage<4, 12, ::Vec3>                                      mLeashOffset;
    ::ll::TypedStorage<4, 12, ::Vec3>                                      mScale;
    ::ll::TypedStorage<1, 1, bool>                                         mUseModelData;
    ::ll::TypedStorage<1, 1, bool>                                         mModified;
    ::ll::TypedStorage<8, 24, std::vector<Geometry::ItemDisplayTransform>> mItemTransforms;
    ::ll::TypedStorage<1, 1, ::FitToFrame>                                 mFitGuiItemToFrame;
    ::ll::TypedStorage<4, 8, ::Vec2>                                       mTextureDimensions;
    ::ll::TypedStorage<8, 24, std::string>                                 mSourceFilePathWithExtension;
    ::ll::TypedStorage<8, 24, std::string>                                 mSerializableName;
    ::ll::TypedStorage<8, 24, std::map<std::string, Geometry::Node>>       mNodes;
    ::ll::UntypedStorage<8, 32>                                            mMinEngineVersion;
    ::ll::TypedStorage<1, 1, bool>                                         mIsFromBaseGamePack;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                    mMaterialInstanceList;
    // NOLINTEND

public:
    // prevent constructor by default
    Geometry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Geometry(std::string const&, std::string const&, bool, int, int);

    MCNAPI Geometry(std::string const&, std::string const&, ::Geometry const&, bool, int, int);

    MCNAPI void _parseBones(::JsonValueHierarchy const&, bool, ::TextureUVCoordinateSet const&);

    MCNAPI void _parseBoxFaceUV(
        ::Geometry::Box&,
        ::Json::Value const&,
        uchar,
        std::string const&,
        ::Vec2 const&,
        ::TextureUVCoordinateSet const&
    );

    MCNAPI void _parseItemDisplayTransform(::Json::Value const&, std::string const&);

    MCNAPI std::vector<std::string> const& getMaterialInstanceList() const;

    MCNAPI ::Geometry::Node const* getNode(std::string_view) const;

    MCNAPI std::map<std::string, Geometry::Node> const& getNodes() const;

    MCNAPI ::Vec2 const& getTextureDimensions() const;

    MCNAPI bool isFromBaseGamePack() const;

    MCNAPI void parse(::JsonValueHierarchy const&, bool, ::TextureUVCoordinateSet const&);

    MCNAPI void toJson(::Json::Value&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& mDataDrivenEnderDragonSupportedVersion();

    MCNAPI static ::SemVersionConstant const& mDataDrivenRenderingSupportedVersion();

    MCNAPI static ::SemVersionConstant const& mDrownedParentFieldSupportedVersion();

    MCNAPI static ::SemVersionConstant const& mParentFieldSupportedVersion();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, std::string const&, bool, int, int);

    MCNAPI void* $ctor(std::string const&, std::string const&, ::Geometry const&, bool, int, int);
    // NOLINTEND
};
