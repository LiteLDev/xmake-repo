#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/SupplementaryFieldAutoGenerationMode.h"
#include "mc/client/renderer/TessellatorQuadInfo.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/ServiceReference.h"
#include "mc/deps/core_graphics/enums/PrimitiveMode.h"
#include "mc/deps/minecraft_renderer/renderer/MeshData.h"
#include "mc/deps/renderer/VertexField.h"

// auto generated forward declare list
// clang-format off
class Vec2;
namespace mce { class Color; }
namespace mce { class MaterialPtr; }
namespace mce { class Mesh; }
namespace mce { class TexturePtr; }
namespace mce { struct BufferResourceService; }
namespace mce { struct MeshDataVertexFieldCounts; }
namespace mce::framebuilder { class FrameBuilder; }
namespace mce::framebuilder { struct FrameLightingModelCapabilities; }
// clang-format on

class Tessellator {
public:
    // Tessellator inner types declare
    // clang-format off
    struct DebugContextCallback;
    // clang-format on

    // Tessellator inner types define
    enum class UploadMode : int {
        Buffered = 0,
        Manual   = 1,
        Never    = 2,
    };

    struct DebugContextCallback {};

    using Index = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                     mIsFormatFixed;
    ::ll::TypedStorage<8, 336, ::mce::MeshData>                                        mMeshData;
    ::ll::TypedStorage<1, 1, bool>                                                     mHasNormals;
    ::ll::TypedStorage<8, 8, ulong>                                                    mNextReserve;
    ::ll::TypedStorage<4, 20, std::optional<glm::vec<4, float, (glm::qualifier)0>>>    mNextNormal;
    ::ll::TypedStorage<4, 36, std::optional<glm::vec<2, float, (glm::qualifier)0>>[3]> mNextUV;
    ::ll::TypedStorage<4, 8, std::optional<uint>>                                      mNextColor;
    ::ll::TypedStorage<2, 4, std::optional<ushort>>                                    mNextBoneId;
    ::ll::TypedStorage<2, 4, std::optional<ushort>>                                    mNextPBRTextureIdx;
    ::ll::TypedStorage<4, 8, std::optional<uint>>                                      mNextMERS;
    ::ll::TypedStorage<1, 2, std::optional<uchar>>                                     mNextGeoType;
    ::ll::TypedStorage<1, 1, bool>                                                     mIndexPhase;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                  mPostTransformOffset;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                  mPostTransformScale;
    ::ll::TypedStorage<1, 1, uchar>                                                    mQuadFacing;
    ::ll::TypedStorage<1, 1, bool>                                                     mQuadTwoSided;
    ::ll::TypedStorage<8, 24, std::vector<TessellatorQuadInfo>>                        mQuadInfoList;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                  mFaceCenterAccumulator;
    ::ll::TypedStorage<4, 4, int>                                                      mCurQuadVertex;
    ::ll::TypedStorage<1, 1, bool>                                                     mApplyTransform;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>>              mTransformMatrix;
    ::ll::TypedStorage<1, 1, bool>                                                     mNoColor;
    ::ll::TypedStorage<1, 1, bool>                                                     mVoidBeginEnd;
    ::ll::UntypedStorage<1, 10>                                                        mForceTessellateIntercept;
    ::ll::UntypedStorage<8, 48>                                                        mInterceptTessellator;
    ::ll::TypedStorage<4, 4, uint>                                                     mCount;
    ::ll::TypedStorage<4, 4, uint>                                                     mMaxVertexCount;
    ::ll::TypedStorage<1, 1, bool>                                                     mTessellating;
    ::ll::TypedStorage<1, 1, bool>                                                     mBuildFaceData;
    ::ll::TypedStorage<8, 8, std::unique_ptr<mce::Mesh>>                               mPreGeneratedMesh;
    ::ll::UntypedStorage<8, 24>                                                        mBufferResourceService;
    // NOLINTEND

public:
    // prevent constructor by default
    Tessellator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Tessellator(std::weak_ptr<mce::BufferResourceService>);

    MCNAPI void addPostTransformOffset(::Vec3 const&);

    MCNAPI void addPostTransformOffset(float, float, float);

    MCNAPI void addRotation(float, ::Vec3 const&);

    MCNAPI void addTranslation(::Vec3 const&);

    MCNAPI void applyDefaultTransform();

    MCNAPI void begin(::Tessellator::DebugContextCallback, int const, bool const);

    MCNAPI void begin(::Tessellator::DebugContextCallback, ::mce::PrimitiveMode const, int const, bool const);

    MCNAPI void beginIndices(ulong);

    MCNAPI void beginOverride(::Tessellator::DebugContextCallback);

    MCNAPI void bone0(ushort const);

    MCNAPI void cancel();

    MCNAPI void clear();

    MCNAPI void color(int);

    MCNAPI void color(::mce::Color const&);

    MCNAPI void color(float, float, float, float);

    MCNAPI void colorABGR(int);

    MCNAPI ::mce::Mesh end(std::string_view const, ::SupplementaryFieldAutoGenerationMode const);

    MCNAPI ::mce::Mesh
    end(::Tessellator::UploadMode const, std::string_view const, ::SupplementaryFieldAutoGenerationMode const);

    MCNAPI ::mce::Mesh endOverride(std::string_view const, ::SupplementaryFieldAutoGenerationMode const);

    MCNAPI bool forceTessellateIntercept() const;

    MCNAPI bool getHasNormals();

    MCNAPI ::Vec3 const& getPostTransformOffset() const;

    MCNAPI ::glm::mat<4, 4, float, (glm::qualifier)0> const& getTransformMatrix() const;

    MCNAPI ::mce::MeshDataVertexFieldCounts getVertexFieldCount() const;

    MCNAPI bool isOverridden();

    MCNAPI bool isTessellating() const;

    MCNAPI void mers(float, float, float, float);

    MCNAPI void noColor();

    MCNAPI void normal(::Vec3 const&, float const);

    MCNAPI void normal(float, float, float, float);

    MCNAPI void pbrTextureIdx(ushort const&);

    MCNAPI void postTransformScale(::Vec3 const&);

    MCNAPI void quad(uint, uint, uint, uint);

    MCNAPI void reserveDeferredVertices(ulong);

    MCNAPI void resetPostTransformScale();

    MCNAPI void resetTessellateIntercept();

    MCNAPI void resetTransform(bool);

    MCNAPI void rotateAroundPivot(::Vec3 const&, float const, ::Vec3 const&, bool);

    MCNAPI void setHasNormals(bool const);

    MCNAPI void setPostTransformOffset(::Vec3 const&);

    MCNAPI void setPostTransformOffset(float, float, float);

    MCNAPI void setQuadFacingID(uchar);

    MCNAPI void setQuadTwoSided(bool);

    MCNAPI void setScaleTransform(::Vec3 const&);

    MCNAPI void setTessellateIntercept(
        std::function<void(const Tessellator&, const mce::MaterialPtr&, const mce::TexturePtr&)>
    );

    MCNAPI bool shouldApplyTransform() const;

    MCNAPI void simpleQuad(
        ::Vec3 const&,
        ::Vec2 const&,
        ::Vec3 const&,
        ::Vec2 const&,
        ::Vec3 const&,
        ::Vec2 const&,
        ::Vec3 const&,
        ::Vec2 const&
    );

    MCNAPI void tex(::Vec2 const&);

    MCNAPI void tex(float, float);

    MCNAPI void tex1(::Vec2 const&);

    MCNAPI void tex2(::Vec2 const&);

    MCNAPI void triangle(uint, uint, uint);

    MCNAPI void triggerIntercept(::mce::MaterialPtr const&, ::mce::TexturePtr const&);

    MCNAPI void trim();

    MCNAPI void vertex(::Vec3 const&);

    MCNAPI void vertex(float, float, float);

    MCNAPI void vertexUV(::Vec3 const&, ::Vec2 const&);

    MCNAPI void vertexUV(::Vec3 const&, float, float);

    MCNAPI void vertexUV(float, float, float, float, float);

    MCNAPI ~Tessellator();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SupplementaryFieldAutoGenerationMode
    selectFieldAutoGenerationMode(::mce::framebuilder::FrameLightingModelCapabilities const&, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<mce::BufferResourceService>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
