#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/geom/QuadUVRotation.h"
#include "mc/client/model/geom/VertexPT.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Matrix;
class Tessellator;
// clang-format on

class PolygonQuad {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 80, ::VertexPT[4]> mVertices;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PolygonQuad(
        ::VertexPT const&,
        ::VertexPT const&,
        ::VertexPT const&,
        ::VertexPT const&,
        float,
        float,
        float,
        float,
        ::QuadUVRotation
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::VertexPT const&,
        ::VertexPT const&,
        ::VertexPT const&,
        ::VertexPT const&,
        float,
        float,
        float,
        float,
        ::QuadUVRotation
    );
    // NOLINTEND
};
