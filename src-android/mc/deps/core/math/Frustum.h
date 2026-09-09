#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/FrustumEdges.h"

class Frustum {
public:
    // Frustum inner types define
    enum FrustumSide : uchar {
        Right            = 0,
        Left             = 1,
        Bottom           = 2,
        Top              = 3,
        Back             = 4,
        Front            = 5,
        NumFrustumPlanes = 6,
    };

    enum Plane : uchar {
        PlaneNormalX          = 0,
        PlaneNormalY          = 1,
        PlaneNormalZ          = 2,
        PlaneToOriginDistance = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 96, ::glm::vec<4, float, (glm::qualifier)0>[6]> mFrustumPlanes;
    ::ll::TypedStorage<4, 48, ::FrustumEdges>                             mNearClippingPlaneEdges;
    ::ll::TypedStorage<4, 48, ::FrustumEdges>                             mFarClippingPlaneEdges;
    // NOLINTEND

public:
    // prevent constructor by default
    Frustum& operator=(Frustum const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Frustum();

    MCNAPI void calculateFrustum(::glm::mat<4, 4, float, (glm::qualifier)0> const&);

    MCNAPI bool
    cubeInFrustum(::glm::vec<3, float, (glm::qualifier)0> const&, ::glm::vec<3, float, (glm::qualifier)0> const&) const;

    MCNAPI ::FrustumEdges const& getNearClippingPlaneEdges() const;

    MCNAPI bool pointInFrustum(::glm::vec<3, float, (glm::qualifier)0> const&) const;

    MCNAPI void setupFrustum(::Frustum::FrustumSide const, ::glm::vec<3, float, (glm::qualifier)0> const&, float const);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Frustum getFrustum(::glm::mat<4, 4, float, (glm::qualifier)0> const&);

    MCNAPI static ::Frustum getFrustum(
        ::glm::mat<4, 4, float, (glm::qualifier)0> const&,
        ::glm::mat<4, 4, float, (glm::qualifier)0> const&,
        ::glm::mat<4, 4, float, (glm::qualifier)0> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
