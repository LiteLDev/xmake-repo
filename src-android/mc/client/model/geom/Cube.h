#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/geom/PolygonQuad.h"
#include "mc/client/model/geom/QuadUVRotation.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Matrix;
class Tessellator;
class TextureOffset;
class VertexPT;
namespace Json { class Value; }
// clang-format on

class Cube {
public:
    // Cube inner types declare
    // clang-format off
    struct FaceUVData;
    // clang-format on

    // Cube inner types define
    struct FaceUVData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 8, ::Vec2>           mUV;
        ::ll::TypedStorage<4, 8, ::Vec2>           mUVSize;
        ::ll::TypedStorage<4, 4, int>              mMaterialInstanceListIndex;
        ::ll::TypedStorage<1, 1, bool>             mFaceValid;
        ::ll::TypedStorage<1, 1, ::QuadUVRotation> mUvRotation;
        // NOLINTEND

    public:
        // prevent constructor by default
        FaceUVData(FaceUVData const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                           mOrigin;
    ::ll::TypedStorage<4, 12, ::Vec3>                           mSize;
    ::ll::TypedStorage<4, 12, ::Vec3>                           mRotation;
    ::ll::TypedStorage<4, 12, ::Vec3>                           mCubePivot;
    ::ll::TypedStorage<8, 24, std::vector<PolygonQuad>>         mPolygons;
    ::ll::TypedStorage<4, 16, ::mce::Color>                     mColor;
    ::ll::TypedStorage<1, 1, bool>                              mMirrored;
    ::ll::TypedStorage<4, 144, std::array<Cube::FaceUVData, 6>> mFaceData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Cube(::Vec3 const&, ::Vec3 const&, float, bool, ::Vec2 const&, ::TextureOffset const&, ::mce::Color const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::Vec3 const&, ::Vec3 const&, float, bool, ::Vec2 const&, ::TextureOffset const&, ::mce::Color const&);
    // NOLINTEND
};
